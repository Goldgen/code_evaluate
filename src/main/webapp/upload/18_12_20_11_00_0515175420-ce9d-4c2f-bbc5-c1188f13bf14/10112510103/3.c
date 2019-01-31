int n;
int sum=0,min;
char *psum=&sum;
int dao(char *pa,int N){
    if(N==n-1){
        if(*(pa+N)<min)
            min=*(pa+N);
        (*psum)+=*(pa+N);
        return min;
    }
    if(*(pa+N)<min)
        min=*(pa+N);
    *psum+=*(pa+N);
    dao(pa,N+1);
}
int main()
{
    scanf("%d",&n);
    char a[1000];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    dao(a,0);
    printf("%d %d",min,*psum);
}