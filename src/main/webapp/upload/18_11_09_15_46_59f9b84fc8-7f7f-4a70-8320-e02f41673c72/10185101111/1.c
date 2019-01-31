int main()
{
	int a[100];
	int cont=0;
	for(int i=1;i<=100;i++){
		if((i%3==0)&&(i%10==6)){
		cont++;
		a[cont]=i;
	}
	}
	for(int m=1;m<cont;m++)
	printf("%d ",a[m]);
	printf("%d",a[cont]);
}