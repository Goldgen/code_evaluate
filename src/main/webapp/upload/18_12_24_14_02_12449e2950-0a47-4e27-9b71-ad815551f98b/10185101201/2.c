#include<stdio.h>
#include<string.h>
struct identity
{
    char name[10];
    int number;
    char email[16];
    char tel[12];
};
unsigned long long  ADD(struct identity **a,unsigned long long n)
{
    char dlo[15];
    int i=0;
    scanf("%s",a[n]->name);
    if(scanf("%lld",a[n]->number)!=1){
        a[n]->number=-1;
        scanf("%s",dlo);
    }
    scanf("%s %s",a[n]->email,a[n]->tel);
    for(;i<n;i++)
    {
        if(a[i]->number==a[n]->number && a[n]->number !=-1 )
        {
            printf("Aleady Exists\n");
            return n;
        }
    }
    printf("Added\n");
    n++;
    return n;
}
unsigned long long  DELETE(struct identity **a,unsigned long long n)
{
    long long number1;
    int i=0,j=0;
    struct identity *ptr;
    if(scanf("%lld",&number1)==1){
        while(i<n){
            if(a[i]->number==number1){
                ptr=a[i];
                for(j=i;j<n-1;j++){
                    a[j]=a[j+1];
                }
                a[j]=ptr;
            printf("Deleted\n");
            return n-1;
            }
            i++;
        }
        if(j==0)
            printf("Not Found\n");
            return n;
    }
    
}
unsigned long long UPDATE(struct identity **a,unsigned long long n)
{
    struct identity data;
    int i,j=0;
    scanf("%s %lld %s %s",data.name,&data.number,data.email,data.tel);
    for(i=0;i<n;i++){
        if(data.number==a[i]->number){
            strcpy(a[i]->name,data.name);
            strcpy(a[i]->email,data.email);
            strcpy(a[i]->tel,data.tel);
            j=-1;
            break;
        }
    }
    if(j==-1)
        printf("Updated\n");
    else
        printf("Not Found\n");
}
void SORT(struct identity **a,unsigned long long n)
{
    int i=0,j=0;
    struct identity *temp;
    for(;i<n-1;i++)
        for(;j<n-i-1;j++)
        {
            if((a[j]->number==-1 && a[j+1]->number !=-1)||(a[j]->number > a[j+1]->number && a[j+1]->number !=-1))
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        printf("Sorted\n");
}
void FIND(struct identity **a,unsigned long long n)
{
    int i=0,j=0;
    long long number2;
    scanf("%lld",number2);
    while(i<n)
    {
        if(a[i]->number==number2)
        {
            printf("%s %lld %s %s\n",a[i]->name,a[i]->number,a[i]->email,a[i]->tel);
            j=-1;
            break;
        }
        i++;
    }
    if(j==0)
        printf("Not Found\n");
}
void PRINT(struct identity **a,unsigned long long n)
{
    int i=0;
    if(n==0)
        printf("Empty");
    else
    {
        printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
        while(i<n)
        {
            printf("%8s ",a[i]->name);
            if(a[i]->number==-1)
                printf("        NULL");
            else
                printf("%11lld ",a[i]->number);
            printf("%15s %11s",a[i]->email,a[i]->tel);
            if(i<n-1)
                printf("\n");
            i++;
        }
    }
}
int main()
{
    char kkk[8];
    long long n=0,s=0,k=0;
    struct identity **a=(struct identity **)malloc(100000*sizeof(struct identity *));
    while(scanf("%s",kkk)!=EOF)
    {
        if(n==s)
        {
            s=s+100;
            for(;k<s;k++)
                a[k]=(struct identity *)malloc(sizeof(struct identity));
                a[k]->number=-1;
        }

    if(strcmp(kkk,"ADD")==0)
    {
        n=ADD(a,n);
    }
    else if(strcmp(kkk,"DELETE")==0)
    {
        n=DELETE(a,n);
    }
    else if(strcmp(kkk,"UPDATE")==0)
    {
        UPDATE(a,n);
    }
    else if(strcmp(kkk,"SORT")==0)
    {
        SORT(a,n);
    }
    else if(strcmp(kkk,"FIND")==0)
    {
        FIND(a,n);
    }
    else if(strcmp(kkk,"PRINT")==0)
    {
        PRINT(a,n);
    }
  }

}
