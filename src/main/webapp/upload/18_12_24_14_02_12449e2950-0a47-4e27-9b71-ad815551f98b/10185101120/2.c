#include<stdio.h>
#include<string.h>
struct data_t{
	char name[9];
	char id[12];
	char mail[16];
	char tele[12];
	int flag;
}data[71];
char* cl(char id[])
{
	if(strcmp(id,"NULL")!=0){
		int l=strlen(id);
		while(id[0]=='0'){
			for(int v=0;v<l-1;v++){
				id[v]=id[v+1];
			}
			id[l-1]='\0';
		}
	}
	if(id[0]=='\0'){
		id[0]='0';
	} 
	return id;
}
void print_1(struct data_t x)
{
	printf("%8s %11s %15s %11s\n",x.name,x.id,x.mail,x.tele);
}
long long tra(char x[])
{
	long long a=0;
	int b=strlen(x),i=0;
	for(;i<b;i++){
		a=a*10+(x[i]-'0');
	}
	return a;
}
int add(struct data_t x,int i)
{
	scanf("%s",&x.name);
	scanf("%s",&x.id);
	strcpy(x.id,cl(x.id));
	scanf("%s",&x.mail);
	scanf("%s",&x.tele);
	if(strcmp(x.id,"NULL")!=0){
		for (int v=0;v<i;v++){
			if(strcmp(data[v].id,x.id)==0){
				printf("Already Exists\n");
				return i;
			}
		}
	}
	data[i]=x;
	data[i].flag=1;
	printf("Added\n");
	return i+1;
}
void Delete(int l)
{
	char id[12];
	scanf("%s",&id);
	strcpy(id,cl(id));
	int i=0;
	for(;i<l;i++){
		if((strcmp(data[i].id,id)==0)&&data[i].flag){
			data[i].flag=0;
			printf("Deleted\n");
			break;
		}
	}
	if(i==l){
		printf("Not Found\n");
	}
}
int update(int l)
{
	int i=0;
	struct data_t x;
	scanf("%s",&x.name);
	scanf("%s",&x.id);
	strcpy(x.id,cl(x.id));
	scanf("%s",&x.mail);
	scanf("%s",&x.tele);
	x.flag=1;
	for(;i<l;i++){
		if((strcmp(data[i].id,x.id)==0)&&data[i].flag){
			data[i]=x;
			printf("Updated\n");
			break;
		}
	}
	if(i==l){
		printf("Not Found\n");
	}
}
void find(int l)
{
	char id[12];
	scanf("%s",&id);
	strcpy(id,cl(id));
	int i=0;
	for(;i<l;i++){
		if((strcmp(data[i].id,id)==0)&&data[i].flag){
			printf("%s %s %s %s\n",data[i].name,data[i].id,data[i].mail,data[i].tele);
			break;
		}
	}
	if(i==l){
		printf("Not Found\n");
	}
}
void sort(int l)
{
	struct data_t temp;
	int i=0,v=0,s=0;
	for(i=l-1;i>=0;i--){
		if(strcmp(data[i].id,"NULL")==0){
			s++;
			for(v=l-1;v>i;v--){
				if(strcmp(data[v].id,"NULL")!=0){
					temp=data[v];
					data[v]=data[i];
					data[i]=temp;
				}
			}
		}
	}
	for(i=0;i<l-1-s;i++){
		for(v=i+1;v<l-s;v++){
			long long a=tra(data[i].id),b=tra(data[v].id);
			if(a>b){
				temp=data[i];
				data[i]=data[v];
				data[v]=temp;				
			}
		}
	}
	printf("Sorted\n");
}
void print(int l)
{
	int v=0;
	for (;v<l;v++){
		if(data[v].flag){
			break;
		}
	}
	if(v==l){
		printf("Empty\n");
	}
	else{
		printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
		for(v=0;v<l;v++){
			if(data[v].flag){
				print_1(data[v]);
			}
		}
	}
}
int main()
{
	int i=0;
	char a[10];
	while((scanf("%s",&a))!=EOF){
		if(strcmp(a,"ADD")==0){
			i=add(data[i],i);
			data[i].flag=0;
		}
		if(strcmp(a,"DELETE")==0){
			Delete(i);
		}
		if(strcmp(a,"UPDATE")==0){
			update(i);
		}
		if(strcmp(a,"SORT")==0){
			sort(i);
		}
		if(strcmp(a,"FIND")==0){
			find(i);
		}
		if(strcmp(a,"PRINT")==0){
			print(i);
		}
	}
}