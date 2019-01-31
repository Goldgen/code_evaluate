int main()
{
	char a[1024];
	scanf("%s",a);
	int b=strlen(a);
	int i,m=0;
	for(i=0;i<b;i++){
		switch(tolower(a[i])){
			case 'a':m=1;break;
			case 'e':m=1;break;
			case 'i':m=1;break;
			case 'o':m=1;break;
			case 'u':m=1;break;
			default:break;
		}
		if(m==1){
		printf("yes");	
		break;
	}
}if(m==0)
printf("no");
}