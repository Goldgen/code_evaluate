#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char name[10];
    long id;
    char email[20];
    char phone[15];
}record;

typedef struct {
	record *records;
	int size;
	int capacity;
}addressList;
addressList Records_addressList = { NULL, 0, 0 };

void init_addressList(int capacity)
{
	Records_addressList.records = (record*)malloc(sizeof(record) * capacity);
	Records_addressList.size = 0;
	Records_addressList.capacity = capacity;
}

void destroy_addressList()
{
	free(Records_addressList.records);
	Records_addressList.records=NULL;
}

int find(long int id)
{
	int i = 0;
	for (; i < Records_addressList.size; i++)
	{
		if (Records_addressList.records[i].id == id)
			return i;
	}
	return -1;
}

int add(record r)
{
	if (find(r.id) >= 0){
        printf("Already Exists\n");
        return 0;
	}
	if (Records_addressList.size >= Records_addressList.capacity)
	{
		Records_addressList.records = (record*)realloc(Records_addressList.records, sizeof(record) * (Records_addressList.capacity + 10) );
		Records_addressList.capacity += 10;
	}
	int n = Records_addressList.size;
	memcpy(&Records_addressList.records[n], &r, sizeof(record));
	printf("ADDED\n");
	return Records_addressList.size++;
}

int del(long int id)
{
	int i,index = -1;
	if ((index = find(id)) >= 0)
	{
		for (i = index + 1; i < Records_addressList.size; i++)
		{
			memcpy(&Records_addressList.records[i-1], &Records_addressList.records[i], sizeof(record));
		}
		printf("Deleted\n");
		return Records_addressList.size--;
	}
	else
        printf("Not Found\n");
    return -1;
}

int chg(record r)
{
    if(find(r.id)<0) {printf("Not Found\n"); return -1;}
    else{
        int n = Records_addressList.size;
        memcpy(&Records_addressList.records[n], &r, sizeof(record));
	    printf("Updated\n");
	    return Records_addressList.size;
    }
}
static int record_cmp(const record* r1, const record* r2)
{
	return r1->id - r2->id;
}

void sort()
{
	int i, j;
	record t;
	for (i = 0; i < Records_addressList.size - 1; i++)
	{
		int min_pos = i;
		for (j = i + 1; j < Records_addressList.size; j++)
		{
			if (record_cmp(&Records_addressList.records[min_pos], &Records_addressList.records[j]) > 0)
				min_pos = j;
		}
		memcpy(&t, &Records_addressList.records[min_pos], sizeof(record));
		memcpy(&Records_addressList.records[min_pos], &Records_addressList.records[i], sizeof(record));
		memcpy(&Records_addressList.records[i], &t, sizeof(record));
	}
	printf("Sorted\n");
}

void print()
{
	int i;
	if (Records_addressList.size == 0)
		printf("Not found.\n");
	else
	{
		printf("    NAME  STUDENT_ID          EMAIL   TELEPHONE\n");
		for ( i = 0; i < Records_addressList.size; i++)
		{
			printf("%8.8s %11.11s %15.15s %11.11s",
				Records_addressList.records[i].name,
				Records_addressList.records[i].id,
				Records_addressList.records[i].email,
				Records_addressList.records[i].phone);
		}
	}
}


int main()
{
   while(1){
   char get1[10],get2[40];
   scanf("%s",get1);
   getchar();
   if(strcmp(get1,"ADD")==0){
        gets(get2);
        add(get2);
   }
   if(strcmp(get1,"DELETE")==0){
        gets(get2);
        del(get2);
   }
   if(strcmp(get1,"UPDATE")==0){
        Input();
        chg(get2);
   }
   if(strcmp(get1,"SORT")==0){
        sort();
   }
   if(strcmp(get1,"FIND")==0){
        gets(get2);
        int n=find((long)(get2-'0'));
        if(n<0) printf("Not Found\n");
        else
            printf("records[n].name records[n].id records[n].email records[n].phone");
   }
   if(strcmp(get1,"PRINT")==0){
        print();
   }
   if(strcmp(get1,"EOF")==0) break;
   }
   return 0;
}
