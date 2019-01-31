int he(int a){
    int b;
	b=a%10;;
    a/=10;
    if(a==0)
    return b;
    return b+he(a);
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",he(a));
}