#include <stdio.h>
int main(){
    int a=0,b=0,c=0,n=0,i=0;
    double per=0,money=0,total=0;
    char ch=0,str[5][6]={"Pine","Fire","Cedar","Maple","Oak"};
    scanf("%c",&ch);
    if(ch!='T') 
    scanf(" %d %d %d %d",&n,&a,&b,&c);
    while(ch!='T'){
    	switch(ch){
    		case 'P':
    			per=0.89;
    			i=0;
    			break;
    		case 'F':
			    per=1.09;
			    i=1;
				break;
			case 'C':
			    per=2.26;
			    i=2;
				break;
			case 'M':
			    per=4.50;
			    i=3;
				break;
		    case 'O':
			    per=3.10;
			    i=4;
				break;
			default :
			    break;
		}
		money=(double)a*b*c*n*per/12+1E-06;
		total+=money;
		printf("%d %d*%d*%d %s, Cost: $%.2lf\n",n,a,b,c,str[i],money);
		getchar();
		scanf("%c",&ch);
		if(ch!='T')
		scanf(" %d %d %d %d",&n,&a,&b,&c);
    }
	printf("Total cost: $%.2lf",total);
	return 0;
}