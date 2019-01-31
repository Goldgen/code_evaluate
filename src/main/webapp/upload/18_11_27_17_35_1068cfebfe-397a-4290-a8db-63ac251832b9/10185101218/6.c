#include<stdio.h>

int main(void)
{
    int num,deln,n,m,tm = 0;
    scanf("%d",&num);
    int data[num];
    for(n = 0;n < num;n++){
        scanf("%d",&data[n]);
    }
    scanf("%d",&deln);
    for(n = 0;n < num;n++){
        if(data[n] == deln){
            for(m = n;m < num;m++){
                data[m] = data[m+1];
            }
            num--;
            tm++;
			break;
        }
    }
    if(tm != 0){
        for(n = 0;n < num;n++){
            if(n == num-1) printf("%d",data[n]);
            else  printf("%d ",data[n]);
        }
    }
    else printf("ERROR");
    return 0;
}
