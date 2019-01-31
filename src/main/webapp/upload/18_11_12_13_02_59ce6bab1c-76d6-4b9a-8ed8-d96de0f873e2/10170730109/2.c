#include <stdio.h>
#include <ctype.h>

int output(int x);
int Generaloutput(int st,int ed);
int main(void) {
    int st,ed;
    scanf("%d %d",&st,&ed);
    while(!isgraph(ed)){
        ed--;
        if(ed==0) break;
    }
    while(!isgraph(st)){
        st++;;
        if(st==127) break;
    }
    if(isgraph(st)&&isgraph(ed)){
        Generaloutput(st,ed);
    }
    else {
        printf("NONE");
    }
    return 0;
}


int output(int x){
    int a=x,count =0;
    for(count=0;a>0;a=a/10){
        count++;
    }
    printf("%d",x);
    for(;count<8;count++){
        printf(" ");
    }
    printf("%c",x);
    return 1;
}

int Generaloutput(int st,int ed){
    for(;st<ed;st++){
       output(st);
       printf("\n");
    }
    output(st);
    return 1;
}
