#include <stdio.h>
#include <string.h>
struct Book{
    char name[9];
    int num;
    char mail[31];
    int tel[12];
};
int main()
{
    char fun[7];
    int i=0,n,j,m;
    struct Book book[0];
    if((scanf("%s",fun)!=EOF)){
        if (strcmp(fun,"ADD")==0){
            struct Book book[i];
            scanf("%d",&book[i].num);
            scanf("%s",&book[i].mail);
            scanf("%d",&book[i].tel);
            i++;
        }
        if (strcmp(fun,"DELETE")==0){
            scanf("%d",&n);
            for(j=0;j<i;j++){
                if(book[j].num==n){
                    for(m=j;m<i;m++){
                        book[m]=book[m+1];
                    }
                    i--;
                    printf("Deleted");
                    continue;
                }
                else printf("Not Found");
            }
        }
        if (strcmp(fun,"PRINT")==0){
            if(i>0){
                printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE");
                for(j=0;j<=i;j++){
                    printf("%-8s %-11d %-15s %-11d",book[j].name,book[j].num,book[j].mail,book[j].tel);
                }
            }
            else printf("empty");
        }
    }
    return 0;
}
