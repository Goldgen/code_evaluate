#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    struct inf{
        char name[10];
        unsigned long long s_number;
        char email[20];
        char p_number[15];
    };
    int connector_number=1;
    char order[10];
    struct inf **collection;
    collection=(struct inf**)malloc(connector_number*sizeof(struct inf *));
    collection[0]=(struct inf*)malloc(sizeof(struct inf));
    while(scanf("%s",order)!=EOF)
    {
        if(strcmp(order,"ADD")==0){
            scanf("%s ",collection[connector_number-1]->name);
            if(scanf("%llu",&collection[connector_number-1]->s_number)==NULL){
                collection[connector_number-1]->s_number=0;
            getchar();
            getchar();
            getchar();
            getchar();
            }
            scanf(" %s %s",collection[connector_number-1]->email,
                collection[connector_number-1]->p_number);
            int limit=0;
            for(int i=0;i<connector_number-1;i++){
                if(collection[i]!=NULL&&
                   collection[connector_number-1]->s_number==collection[i]->s_number
				   &&collection[i]->s_number){
                    limit=1;
                    printf("Already Exists\n");
                    break;
                }
            }
            if(limit)
                continue;
            connector_number++;
            collection=(struct inf**)realloc(collection,connector_number*sizeof(struct inf*));
            collection[connector_number-1]=(struct inf*)malloc(sizeof(struct inf));
            printf("Added\n");
        }
        else if(strcmp(order,"DELETE")==0){
            int limit1=1;
            unsigned long long number;
            scanf("%llu",&number);
            for(int start=0;start<connector_number-1;start++)
            if(collection[start]!=NULL&&number==collection[start]->s_number){
                free(collection[start]);
                collection[start]=NULL;
                limit1=0;
                break;
            }
            if(limit1)
                printf("Not Found\n");
            else
                printf("Deleted\n");
        }
        else if(strcmp(order,"UPDATE")==0){
            int limit2=0;
            struct inf ud;
            scanf("%s %llu %s %s",ud.name,&ud.s_number,ud.email,ud.p_number);
            for(int start1=0;start1<connector_number-1;start1++){
                if(collection[start1]!=NULL&&ud.s_number==collection[start1]->s_number){
                    *collection[start1]=ud;
                    limit2=1;
                    printf("Updated\n");
                    break;
                }
            }
            if(limit2==0)
                printf("Not Found\n");
        }
        else if(strcmp(order,"FIND")==0){
            int limit3=1;
            unsigned long long number1;
            scanf("%llu",&number1);
            for(int start2=0;start2<connector_number-1;start2++)
            if(collection[start2]!=NULL
			   &&number1==collection[start2]->s_number){
                printf("%s %llu %s %s\n",collection[start2]->name,
					   collection[start2]->s_number,collection[start2]->email,
               collection[start2]->p_number);
                limit3=0;
                break;
            }
            if(limit3)
                printf("Not Found\n");
        }
        else if(strcmp(order,"SORT")==0){
            struct inf huan;
            for(int start3=connector_number-2;start3>0;start3--)
            for(int start4=start3-1;start4>=0;start4--){
                if(collection[start3]!=NULL&&collection[start4]!=NULL&&
                   collection[start3]->s_number>collection[start4]->s_number){
                    huan=*collection[start3];
                    *collection[start3]=*collection[start4];
                    *collection[start4]=huan;
                }
            }
            for(int start6=0;start6<connector_number-2;start6++)
            for(int start7=start6+1;start7<connector_number-1;start7++)
                if(collection[start6]!=NULL&&collection[start7]!=NULL&&
                   collection[start6]->s_number!=0&&collection[start7]->s_number!=0&&
                   collection[start6]->s_number>collection[start7]->s_number){
                    huan=*collection[start6];
                    *collection[start6]=*collection[start7];
                    *collection[start7]=huan;
                }
            printf("Sorted\n");
        }
        else{
        int shuchu=0;
        for(int o=0;o<connector_number-1;o++)
        if(collection[o]!=NULL){
            shuchu=1;
            break;
        }
        if(shuchu==0)
            printf("Empty\n");
        else{
        printf("%8s %11s %15s %11s\n","NAME","STUDENT_ID","EMAIL","TELEPHONE");
        for(int m=0;m<connector_number-1;m++){
        if(collection[m]!=NULL&&collection[m]->s_number>0)
        printf("%8s %11llu %15s %11s\n",collection[m]->name,
			   collection[m]->s_number,collection[m]->email,
               collection[m]->p_number);
        else if(collection[m]!=NULL&&collection[m]->s_number==0)
        printf("%8s %11s %15s %11s\n",collection[m]->name,"NULL",collection[m]->email,
               collection[m]->p_number);
        }

        }
        }
    }
    for(int start5=0;start5<connector_number-1;start5++){
        free(collection[start5]);
        collection[start5]=NULL;
    }
    free(collection);
    collection=NULL;
}