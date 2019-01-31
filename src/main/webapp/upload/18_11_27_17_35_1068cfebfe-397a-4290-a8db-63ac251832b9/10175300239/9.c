#include <stdio.h>
#include <ctype.h>
int input(int arr[]){
    char ch;
    int numberLen=0;
    ch=getchar();
    while(ch!='\n'){
        arr[numberLen+1]=ch-'0';
        numberLen++;
        ch=getchar();
    }
    return numberLen;
}
void moveArray(int array[],int n1,int n2){
    int j;
    for(j=n2;j>n2-n1;j--)
        array[j]=array[j-(n2-n1)];
    for(j=1;j<n2-n1+1;j++)
        array[j]=0;
    return;
}
int main()
{
    int a[1000],b[1000],c[1000];
    int i;
    int count1=0;
    int count;
    int count2=0;
    count1=input(a);
    count2=input(b);
    a[0]=0;
    b[0]=0;
    if(count1<count2){
        count=count2;
        moveArray(a,count1,count2);
    }
    else{
        count=count1;
        moveArray(b,count2,count1);
    }
    for(i=0;i<count+1;i++)
        c[i]=a[i]+b[i];
    for(i=count;i>0;i--){
        if(c[i]>=10){
            c[i]-=10;
            c[i-1]+=1;
        }
    }
    if(c[0]!=0)
        printf("%d",c[0]);
    for(i=1;i<=count;i++)
        printf("%d",c[i]);
    return 0;
}
