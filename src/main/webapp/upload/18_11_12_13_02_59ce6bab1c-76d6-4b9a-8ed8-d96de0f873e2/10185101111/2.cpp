#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
void zhuan(int st,int ed){
    int limit=1,cont=0;
    char a[128];
    for(int i=st;i<=ed;i++){
        if(isgraph(i)){
            cont++;
            limit=0;
            a[cont]=i;
        }
    }
     for(int m=1;m<cont;m++){
        printf("%-3d%6c",a[m],a[m]);
        printf("\n");
     }
     if(cont>0)
     printf("%-3d%6c",a[cont],a[cont]);
    if(limit)
        printf("NONE");
}
int main()
{
    int st,ed;
    scanf("%d %d",&st,&ed);
    zhuan(st,ed);
}