int cont=0;
float a;
void dao(float n){
    cont++;
    printf("%.2f\n",n/cont);
    scanf("%f",&a);
    if(a==-1)
    return;
    dao(n+a);
}
int main()
{
    float a;
    scanf("%f",&a);
    dao(a);

}