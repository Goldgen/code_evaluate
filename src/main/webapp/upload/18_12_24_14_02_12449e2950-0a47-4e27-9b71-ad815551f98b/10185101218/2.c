#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct addbk addbk;

struct addbk{
    char name[10];
    char stuID[15];
    char email[20];
    char phone[15];
};

addbk pn[1000];

int ADD(int n)
{
    scanf("%s %s %s %s",pn[n].name,pn[n].stuID,pn[n].email,pn[n].phone);
    while(pn[n].stuID[0] == '0'){
        if(atoll(pn[n].stuID) == 0){strcpy(pn[n].stuID,"0");break;}
        for(int js = 1;js < 15;js++){
            pn[n].stuID[js-1] = pn[n].stuID[js];
        }
    }
    for(int js = 0;js < n;js++){
        if(strcmp(pn[n].stuID,pn[js].stuID) == 0&&strcmp(pn[n].stuID,"NULL") !=0){
            return 1;
        }
    }
    return 0;
}

int DELETE(char *sch,int n)
{
    while(*sch == '0'){
            sch++;
    }
    for(int js1 = 0;js1 < n;js1++){
        if(strcmp(pn[js1].stuID,sch) == 0){
            for(int js2 = js1;js2 < n;js2++){
                pn[js2] = pn[js2+1];
            }
            return 1;
        }
    }
    return 0;
}

int UPDATE(char *xne,char *ID,char *xem,char *xph,int n)
{
    while(*ID == '0'){
        ID++;
    }
    for(int js = 0;js < n;js++){
        if(strcmp(pn[js].stuID,ID) == 0){
            strcpy(pn[js].name,xne);
            strcpy(pn[js].email,xem);
            strcpy(pn[js].phone,xph);
            return 1;
        }
    }
    return 0;
}

void SORT(int n)
{
    addbk temp;
    int js3 = 0,js4 = 1;
    while(js3 != js4){
        js3 = js4;
        for(int js2 = 0;js2 < n-1;js2++){
            if((strcmp(pn[js2].stuID,"NULL") == 0)&&(strcmp(pn[js2+1].stuID,"NULL") != 0)){
                temp = pn[js2];
                pn[js2] = pn[js2+1];
                pn[js2+1] = temp;
                js3++;
            }
            else if((atoll(pn[js2].stuID) > atoll(pn[js2+1].stuID))
					&&(strcmp(pn[js2+1].stuID,"NULL") != 0)){
                temp = pn[js2];
                pn[js2] = pn[js2+1];
                pn[js2+1] = temp;
                js3++;
            }
        }
    }
}

int FIND(char *ID,int n)
{
     while(*ID == '0'){
        ID++;
    }
    for(int js = 0;js < n;js++){
        if(strcmp(pn[js].stuID,ID) == 0){
            printf("%s %s %s %s\n",pn[js].name,pn[js].stuID,pn[js].email,pn[js].phone);
            return 0;
        }
    }
    return 1;
}

void PRINT(int n)
{
    printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
    for(int js = 0;js < n;js++){
        printf("%8s %11s %15s %11s\n",
			   pn[js].name,pn[js].stuID,pn[js].email,pn[js].phone);
    }
}

int main()
{
    char in[10];
    int i = 0;
    while(scanf("%s",in) == 1){
        if(strcmp(in,"ADD") == 0){
            if(ADD(i)){
                printf("Already Exists\n");
            }
            else{
                printf("Added\n");
                i++;
            }
        }
        else if(strcmp(in,"DELETE") == 0){
            char ID[15];
            scanf("%s",ID);
            if(strcmp(ID,"NULL") != 0){
                if(DELETE(ID,i)){
                    printf("Deleted\n");
                    i--;
                }
                else printf("Not Found\n");
            }
        }
        else if(strcmp(in,"UPDATE") == 0){
            char N[10],I[15],E[20],P[15];
            scanf("%s %s %s %s",N,I,E,P);
            if(strcmp(I,"NULL") != 0){
                if(UPDATE(N,I,E,P,i))printf("Updated\n");
                else printf("Not Found\n");
            }
        }
        else if(strcmp(in,"SORT") == 0){
            SORT(i);
            printf("Sorted\n");
        }
        else if(strcmp(in,"FIND") == 0){
            char ID[15];
            scanf("%s",ID);
            if(strcmp(ID,"NULL") != 0&&FIND(ID,i))
                printf("Not Found\n");
        }
        else if(strcmp(in,"PRINT") == 0){
            if(i > 0)PRINT(i);
            else printf("Empty\n");
        }
    }
	return 0;
}
