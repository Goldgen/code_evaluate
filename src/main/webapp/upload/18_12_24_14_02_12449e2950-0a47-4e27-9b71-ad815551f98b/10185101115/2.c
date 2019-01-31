#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct STUDENT
{
	char name[9];
	long long int ID;
	char email[16];
	char tele[12];
}stu[1000];


void ADD(struct STUDENT);
void DELETE(struct STUDENT);
void FIND(long long int);
void UPDATE(struct STUDENT);
void PRINT(struct STUDENT);
void SORT(long long int);

int main()
{
    char* name;
    name=(char*)malloc(9*sizeof(char));
    char* email;
    email=(char*)malloc(16*sizeof(char));
    char* tele;
    tele=(char*)malloc(12*sizeof(char));
    long long int* ID;
    ID=(long long int*)malloc(1*sizeof(long long int));

    int data;
    static int count=0;
    while(scanf("%d",&data)!=EOF){
	    char *a;
	    scanf("%s",a);
	    if(strcmp(a,"ADD")==0){
	    	scanf("%s %lld %s %s",stu[0].name,&stu[0].ID,stu[0].email,stu[0].tele);
	    	count ++;
	    	if(count!=0){
	    		void ADD(struct STUDENT);
			}
			
		}
		if(strcmp(a,"DELETE")==0)
		    void DELETE(struct STUDENT);
	    if(strcmp(a,"UPDATE")==0)
	        void UPDATE(struct STUDENT);
	    if(strcmp(a,"SORT")==0)
	        void SORT(long long int);
	    if(strcmp(a,"PRINT")==0)
	        void PRINT(struct STUDENT);
	    if(strcmp(a,"FIND")==0)
	        void FIND(long long int);
	}  
   

	free(name);
	free(email);
	free(tele);
	free(ID);
	return 0;
 } 
 
 void ADD(struct STUDENT)
 {
 	int count = 1;
	for(int i=0;i<count;i++){
 		if(stu->ID==stu[i].ID){
 			printf("Already Exists\n");
		}
		else{
			scanf("%s %lld %s %s",stu[count].name,&stu[count].ID,stu[count].email,stu[count].tele);
 			printf("ADDED\n");
 			count ++;
		}
	 }
 }
 
 void DELETE(long long int ID)
 {
 	
 	scanf("%lld",&ID);
 	int count=count;
 	for(int i=0;i<count;i++){
 		if(ID==stu[i].ID){
 			stu[i]=stu[i+1];
		 }
	 }
 }
 void FIND(long long int ID){
 	scanf("%lld",ID);
 	int count=count;
 
 	for(int i=0;i<count;i++){
 		if(ID==stu[i].ID){
 			printf("%s %lld %s %s",stu[i].name,&stu[i].ID,stu[i].email,stu[i].tele);
		 }
		 else{
	        printf("Not Found\n");	 
		 }		
	 }
 }
 void PRINT(struct stu[]){
 	printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
 	int count=count;
 	for(int i=0;i<count;i++){
 		printf("%8s%11lld%15s%11s\n",stu[i].name,stu[i].ID,stu[i].email,stu[i].tele);
	 }
 } 
 void SORT(struct stu[]){
 	struct STUDENT temp;
 	int count=count;
 	int k,j;
 	for(int i=0;i<count-1;i++){
 		k=i;
 		for(j=i+1;j<count;j++){
 			if(stu[j].ID>stu[k].ID){
 				k=j;
 				temp=stu[k];
 				stu[k]=stu[i];
 				stu[i]=temp;
			 }
		 }
	 }
 }
void UPDATE(struct STUDENT){
	struct STUDENT temp;
    scanf("%s %lld %s %s",stu.name,&stu.ID,stu.email,stu.tele);
    int count=count;
    for(int i=0;i<count;i++){
    	if(stu.ID==stu[i].ID){
    		temp=stu;
    		stu=stu[i];
    		stu[i]=temp;
		}
	} 
}