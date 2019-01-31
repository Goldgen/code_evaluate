int GOB(int a,int b){
    int t=a%b;
    if(t==0)
        return b;
        return GOB(b,t);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",GOB(a,b));
}