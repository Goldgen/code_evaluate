#include<stdio.h>
#include<string.h>
#define PEOPLE_MAX 1000

typedef struct LINK
{
	char name[11];
	char id[12];
	char mail[16];
	char tel[11];
}linkman;

typedef struct PEOPLE
{
	int num;
	linkman count[1000];
}*people;

//在通讯录里模糊搜索遍历到指定联系人
static int _search(people cou, const char *id)
{
	int number = 0;
	for (int i = 0; i < cou->num; i++)
	{
		//long int a=atol(id);
		//strcpy(id, ltoa(a));
		//if (strstr((cou->count[i]).id, id) != NULL)
		if(atol((cou->count[i]).id)==atol(id))
		{
			printf("%s\t%s\t%s\t%s",
				(cou->count[i]).name,
                (cou->count[i]).id,
				(cou->count[i]).mail,
				(cou->count[i]).tel);
			printf("\n");
			number++;
		}
	}
	if (number == 0)
	{
		printf("Not Found\n");
	}
}



//在通讯录里遍历到指定联系人
static int search(people cou, const char *id)
{
	for (int i = 0; i < cou->num; i++)
	{
		if (strcmp(id, (cou->count[i]).id) == 0 || atol(id)==atol((cou->count[i]).id))
		//if(atol(id)==atol((cou->count[i]).id))
		{
			return i;
		}
	}
	return -1;
}

//添加联系人
void add_linkman(people cou)
{
	//name
	scanf("%s", (cou->count[cou->num]).name);
	//id
	scanf("%s", (cou->count[cou->num]).id);
	//mail
	scanf("%s", (cou->count[cou->num]).mail);
	//tel
	scanf("%s", (cou->count[cou->num]).tel);
	getchar();
	if(strcmp((cou->count[cou->num]).id, "NULL")==0){
            printf("Added\n");
            cou->num++;
	}
	else{
        if(search(cou, (cou->count[cou->num]).id)!=-1) {
        printf("Already Exists\n");
        }
        else{
            /*if((cou->count[cou->num]).id[0]="0"){
                long int a=atol((cou->count[cou->num]).id);
                strcpy((cou->count[cou->num]).id, ltoa(a));
            }*/
            printf("Added\n");
            cou->num++;
        }
	}
}

//删除联系人
void delete_linkman(people cou)
{
	char id[11];
	int i = 0;
	scanf("%s", id);
	int ret = search(cou, id);//找到要删除的联系人
	if (ret == -1)
	{
		printf("Not Found\n");
	}
	else
	{
		for (i = ret; i<cou->num; i++)
		{
			cou->count[i] = cou->count[i + 1];
		}
		cou->num--;
		printf("Deleted\n");
	}
}

//修改指定联系人信息
void change_linkman(people cou)
{
	char name[11];
	char id[15];
	char mail[16];
	char tel[12];
	int i = 0;
	//name
	scanf("%s", name);
	//id
	scanf("%s", id);
	//mail
	scanf("%s", mail);
	//tel
	scanf("%s", tel);
	int ret = search(cou, id);//找到要修改信息的联系人
	if (ret != -1)
	{
		//name
		strcpy((cou->count[ret]).name, name);
		//mail
		strcpy((cou->count[ret]).mail, mail);
		//tel
		strcpy((cou->count[ret]).tel, tel);
		printf("Updated\n");
	}
	else printf("Not Found\n");
}

//查找联系人
void find_linkman(people cou)
{
	char id[11];
	int i = 0;
	scanf("%s", id);
	_search(cou, id);//找到要查找的联系人
}

//显示所有联系人信息
void display_linkman(people cou)
{
	int i = 0;
	printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
	for (i = 0; i<cou->num; i++)
	{
		printf("%8s %11s %15s %11s",
				(cou->count[i]).name,
                (cou->count[i]).id,
				(cou->count[i]).mail,
				(cou->count[i]).tel);
        printf("\n");
	}
}

void id_sort(people cou)//按名字顺序排序所有人
{
	int i = 0;
	int j = 0;
	for (i = 0; i<cou->num - 1; i++)//冒泡实现联系人的排序
	{
		for (j = 0; j<cou->num - i - 1; j++)
		{
			if (strcmp(cou->count[j].id, (cou->count[j + 1]).id)>0)
			{
				linkman tmp = cou->count[j];
				cou->count[j] = cou->count[j + 1];
				cou->count[j + 1] = tmp;
			}
		}
	}
	printf("Sorted\n");
}

int main()
{
	char opp[9];
	struct PEOPLE cou;
	cou.num = 0;
	while (1)
	{
		scanf("%s", opp);
		if(strcmp(opp, "ADD")==0) add_linkman(&cou);
		else if(strcmp(opp, "DELETE")==0) delete_linkman(&cou);
		else if(strcmp(opp, "UPDATE")==0) change_linkman(&cou);
		else if(strcmp(opp, "SORT")==0) id_sort(&cou);
		else if(strcmp(opp, "FIND")==0) find_linkman(&cou);
		else if(strcmp(opp, "PRINT")==0) display_linkman(&cou);
	}
	getchar();
	return 0;
}
