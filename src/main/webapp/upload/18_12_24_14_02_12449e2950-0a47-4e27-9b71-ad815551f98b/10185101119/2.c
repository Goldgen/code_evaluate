#include <stdio.h>
#include <string.h>
#include <math.h>
	struct studentsinformation{
	char name[20];
	char idnum[25];
	char email[20];
    char phone[20];
    };
    struct studentsinformation students[1000];
int count=0;
char *qu0(char *a);
void ADD(); 
void DELETE();
int UPDATE(); 
int SORT();
long long toint(char *a);
int FIND();
int PRINT();
int main(){
	char str[10]={0};
    while(scanf("%s",str)!=EOF){
    	if(strcmp(str,"ADD")==0){
    		ADD();
		}
		else if(strcmp(str,"DELETE")==0){
	        DELETE();    
		}
		else if(strcmp(str,"UPDATE")==0){
			UPDATE();
		}
		else if(strcmp(str,"SORT")==0){
			SORT();
		}
		else if(strcmp(str,"FIND")==0){
			FIND();
		}
		else if(strcmp(str,"PRINT")==0){
			PRINT();
		}	 
	} 
	return 0;
}
char *qu0(char *a){                      
	char *x=a;
	int len=0;
    while(*x=='0'){
    	len++;
    	x++;
	}
	char *y=a;
	if(strlen(a)==len){
		*y='0';
		*(y+1)='\0';
		return a;
	}
	while(*(y+len)!='\0'){
		*y=*(y+len);
		y++;
	}
	*y='\0'; 
	return a;     
}
void ADD(){
	scanf("%s",&students[count].name);
    scanf("%s",&students[count].idnum);        
	scanf("%s",&students[count].email);
	scanf("%s",&students[count].phone);
	if(strcmp(students[count].idnum,"NULL")==0){
		printf("Added\n");
		count++;
	}
	else{
		strcpy(students[count].idnum,qu0(students[count].idnum));
		int ifput=1;
		for(int i=0;i<count;i++){
			if(!strcmp(students[i].idnum,students[count].idnum)){
				ifput=0;
				break;
			}
		}
		if(ifput){
		    printf("Added\n");
			count++;		    
		}	
		else
			printf("Already Exists\n");
	}
}
void DELETE(){
	char temp[25];    
	scanf("%s",&temp);
	if(!strcmp(temp,"NULL")||!count){
		printf("Not Found\n");
	}
	else{
		int iffind=0;
	    strcpy(temp,qu0(temp));
        for(int j=0;j<count;j++){
    	    if(!strcmp(temp,students[j].idnum)){
    		    count--;
    		    for(int i=j;i<count;i++){
    			    students[i]=students[i+1];
			    }
			    printf("Deleted\n");
			    iffind++;
			    break;	
		    }
		}
		if(!iffind)
		printf("Not Found\n");
	}	
}
int UPDATE(){
	struct studentsinformation temp;
	scanf("%s",temp.name);scanf("%s",temp.idnum);
	scanf("%s",temp.email);scanf("%s",temp.phone);
	if(!strcmp(temp.idnum,"NULL")){
		printf("Not Found\n");                            
		return 0;
	}
	strcpy(temp.idnum,qu0(temp.idnum));
	for (int i=0;i<count;i++){
		if(!strcmp(temp.idnum,students[i].idnum)){
			strcpy(students[i].name,temp.name);
    	    strcpy(students[i].email,temp.email);
   	        strcpy(students[i].phone,temp.phone);
   	        printf("Updated\n");
   	        return 0;
		}
	}
	printf("Not Found\n");
}
long long toint(char *a){             //把学号转换成整形 
	long long putnum=0,len=strlen(a);
	while(*a!='\0'){
		putnum+=(*a-'0')*pow(10,len-1);
		a++;
		len--;
	}
	return putnum;
}
int SORT(){	
    struct studentsinformation temp;
	int nullnum=0;
	for(int i=0;i<count-nullnum;i++){
		if(!strcmp(students[i].idnum,"NULL")){
			temp=students[i];
			for(int j=i;j<count-1;j++){
    			students[j]=students[j+1];
		    }
		    i--;
		    students[count-1]=temp;
		    nullnum++;
		}
	}
	for(int i=count-nullnum-1;i>=0;i--){
		for(int j=0;j<i;j++){
			if(toint(students[j].idnum)>toint(students[i].idnum)){
				temp=students[j];
				students[j]=students[i];
				students[i]=temp;
			}
		}
	}  
	printf("Sorted\n");
}
int FIND(){
	char temp[30]={0};
	scanf("%s",&temp);
	if(!strcmp(temp,"NULL")){
		printf("Not Found\n");
		return 0;
	}
	strcpy(temp,qu0(temp));
	for(int i=0;i<count;i++){
		if(!strcmp(temp,students[i].idnum)){
			printf("%s %s %s %s\n",students[i].name,students[i].idnum,students[i].email,students[i].phone);
			return 0;
		}
	}
	printf("Not Found\n");
}
int PRINT(){
	if(!count){
		printf("Empty\n");
		return 0;
	}
	printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
	for(int i=0;i<count;i++){
		printf("%8s %11s %15s %11s\n",students[i].name,students[i].idnum,
			   students[i].email,students[i].phone);
	}
	return 0;
}