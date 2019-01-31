#include<stdio.h>
#include<string.h>
struct data_t{
	char a[9];
	char b[12];
	char c[16];
	char d[12];
	int g;
}data[71];
char* cl(char b[])
{
	if(strcmp(b,"NULL")!=0)
    {
        int l=strlen(b);
		while(b[0]=='0')
		{
			for(int v=0;v<l-1;v++)
				b[v]=b[v+1];
			b[l-1]='\0';
		}
	}
	if(b[0]=='\0')
		b[0]='0';
	return b;
}
void print_1(struct data_t x)
{
	printf("%8s %11s %15s %11s\n",x.a,x.b,x.c,x.d);
}
long long tra(char x[])
{
	long long l=0;
	int m=strlen(x),i=0;
	for(;i<m;i++)
		l=l*10+(x[i]-'0');
	return l;
}
int add(struct data_t x,int i)
{
	scanf("%s",&x.a);
	scanf("%s",&x.b);
	strcpy(x.b,cl(x.b));
	scanf("%s",&x.c);
	scanf("%s",&x.d);
	if(strcmp(x.b,"NULL")!=0)
    {
		for (int v=0;v<i;v++){
			if(strcmp(data[v].b,x.b)==0)
			{
				printf("Already Exists\n");
				return i;
			}
		}
	}
	data[i]=x;
	data[i].g=1;
	printf("Added\n");
	return i+1;
}
void Delete(int l)
{
	char b[12];
	scanf("%s",&b);
	strcpy(b,cl(b));
	int i=0;
	for(; i<l; i++)
    {
		if((strcmp(data[i].b,b)==0) && data[i].g)
		{
			data[i].g=0;
			printf("Deleted\n");
			break;
		}
	}
	if(i==l) printf("Not Found\n");
}
int update(int l)
{
	int i=0;
	struct data_t x;
	scanf("%s",&x.a);
	scanf("%s",&x.b);
	strcpy(x.b,cl(x.b));
	scanf("%s",&x.c);
	scanf("%s",&x.d);
	x.g=1;
	for(; i<l; i++)
    {
		if((strcmp(data[i].b,x.b)==0) && data[i].g)
        {
			data[i]=x;
			printf("Updated\n");
			break;
       }
	}
	if(i==l) printf("Not Found\n");
}
void find(int l)
{
	char b[12];
	scanf("%s",&b);
	strcpy(b,cl(b));
	int i=0;
	for(; i<l; i++)
    {
		if((strcmp(data[i].b,b)==0)&&data[i].g)
		{
			printf("%s %s %s %s\n",data[i].a,data[i].b,data[i].c,data[i].d);
			break;
		}
	}
	if(i==l) printf("Not Found\n");
}
void sort(int l)
{
	struct data_t temp;
	int i=0,v=0,s=0;
	for(i=l-1; i>=0; i--)
		if(strcmp(data[i].b,"NULL")==0)
		{
			s++;
			for(v=l-1; v>i; v--)
			{
				if(strcmp(data[v].b,"NULL")!=0)
				{
					temp=data[v];
					data[v]=data[i];
					data[i]=temp;
				}
			}
		}
	for(i=0; i<l-1-s; i++)
		for(v=i+1; v<l-s; v++)
		{
			long long a=tra(data[i].b),b=tra(data[v].b);
			if(a>b)
			{
				temp=data[i];
				data[i]=data[v];
				data[v]=temp;
			}
		}
	printf("Sorted\n");
}
void print(int l)
{
	int v=0;
	for (; v<l; v++)
		if(data[v].g) break;
	if(v==l) printf("Empty\n");
	else
	{
		printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
		for(v=0; v<l; v++)
			if(data[v].g) print_1(data[v]);
	}
}
int main()
{
	int i=0;
	char x[10];
	while((scanf("%s",&x))!=EOF)
    {
		if(strcmp(x,"ADD")==0)
		{
			i=add(data[i],i);
			data[i].g=0;
		}
		if(strcmp(x,"DELETE")==0)
			Delete(i);
		if(strcmp(x,"UPDATE")==0)
			update(i);
		if(strcmp(x,"SORT")==0)
			sort(i);
		if(strcmp(x,"FIND")==0)
			find(i);
		if(strcmp(x,"PRINT")==0)
			print(i);
	}
}

