#define __STDC_WANT_LIB_EXIT1__ 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
struct infor
{
    char name[20];
    char num[20];
    long long numm;
    char em[30];
    char tele[20];
};
struct infor student[1000];                    
struct infor *tx = student;
struct infor Student;                        
struct infor * tmpp = &Student;
int n = 0,flag=0;
long long shu(char* str2)
{
    long long xh=0,q;
	if(strcmp(str2, "NULL") == 0)
        return 1000000000000; 
    for(q=0;str2[q]!='\0';q++)
        xh=xh*10+str2[q]-'0';
    return xh;
} 
int zhao(long long xh)
{
    int q;
    for(q=0;q<n;q++)
    {
        if((xh==((tx + q)->numm))&&strcmp((tx + q)->num,"NULL")!=0)
        {
            flag=q;
            return 0;
        }
    }
    return 1;
}
void add()
{
    scanf("%s %s %s %s",(tx + n)->name,(tx + n)->num,(tx + n)->em,(tx + n)->tele);    
    (tx + n)->numm=shu((tx + n)->num);                           
    if(strcmp((tx + n)->num,"NULL")!=0)
    {
        if(zhao((tx + n)->numm))
        {
            printf("Added\n");               
            ++n;
        }
        else
           printf("Already Exists\n");
    }
    else
    {
        ++n;             
        printf("Added\n");
    }
} 
void dele(long long xh)
{
    int q;
    if(!zhao(xh))
    {
        printf("Deleted\n");               
        for(q=flag;q<n-1;q++)
        {
            strcpy((tx + q)->name, (tx + q + 1)->name);       
            strcpy((tx + q)->num, (tx + q + 1)->num);
            strcpy((tx + q)->em, (tx + q + 1)->em);
            strcpy((tx + q)->tele, (tx + q + 1)->tele);
            (tx + q)->numm = (tx + q + 1)->numm;
        }
        --n;
    }
    else
        printf("Not Found\n");
    flag=0;
} 
void update()
{

    struct infor *cesh = tmpp;
    scanf("%s %s %s %s",cesh->name,cesh->num,cesh->em,cesh->tele);
    if(!zhao(shu(cesh->num)))
    {
        strcpy((tx + flag)->name,cesh->name);
        strcpy((tx + flag)->num,cesh->num);
        strcpy((tx + flag)->em,cesh->em);
        strcpy((tx + flag)->tele,cesh->tele);
        (tx + flag)->numm = shu(cesh->num);              
        printf("Updated\n");
    }
    else
        printf("Not Found\n");
} 

void sort()
{
    int q,j;
    for(q=0;q<n-1;q++)
    {
        for(j=0;j<n - 1 - q;j++)    
        {
            if(((tx + j)->numm)>((tx + j + 1)->numm))
            {
                strcpy(tmpp->name, (tx + j)->name);
				strcpy((tx + j)->name, (tx + j + 1)->name);
				strcpy((tx + j + 1)->name, tmpp->name);
                strcpy(tmpp->num, (tx + j)->num);
				strcpy((tx + j)->num, (tx + j + 1)->num);
				strcpy((tx + j + 1)->num, tmpp->num);
                strcpy(tmpp->em, (tx + j)->em);
				strcpy((tx + j)->em, (tx + j + 1)->em);
				strcpy((tx + j + 1)->em, tmpp->em);
                strcpy(tmpp->tele, (tx + j)->tele);
				strcpy((tx + j)->tele, (tx + j + 1)->tele);
				strcpy((tx + j + 1)->tele, tmpp->tele);
                tmpp->numm = (tx + j)->numm;
				(tx + j)->numm = (tx + j + 1)->numm; 
				(tx + j + 1)->numm = tmpp->numm;
            }
        }
    }
    printf("Sorted\n");
} 
void findd(long long xh)
{
    if(!zhao(xh))
        printf("%s %lld %s %s\n",(tx + flag)->name,
			   (tx + flag)->numm,(tx + flag)->em,(tx + flag)->tele);
    else
        printf("Not Found\n");
}
void print()
{
    int q;
    if(n>0)
    {
        printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
        for(q=0;q<n;q++)
        {
            if(strcmp((tx + q)->num,"NULL")==0)
                printf("%8s        NULL %15s %11s\n",(tx + q)->name,(tx + q)->em,(tx + q)->tele);
            else
                printf("%8s %11lld %15s %11s\n",(tx + q)->name,
					   (tx + q)->numm,(tx + q)->em,(tx + q)->tele);    
        }
    }
    else
        printf("Empty\n");
}
int main()
{

    char du[20];    
    while(scanf("%s",du)!=EOF)
    {

        if(strcmp(du,"ADD")==0)
            add();
        else if(strcmp(du,"DELETE")==0)
        {
            scanf("%s",du);
            dele(shu(du));
        }
        else if(strcmp(du,"UPDATE")==0)
            update();
        else if(strcmp(du,"SORT")==0)
            sort();
        else if(strcmp(du,"FIND")==0)
        {
            scanf("%s",du);
            findd(shu(du));
        }
        else if(strcmp(du,"PRINT")==0)
            print();
    }
    return 0;
}
