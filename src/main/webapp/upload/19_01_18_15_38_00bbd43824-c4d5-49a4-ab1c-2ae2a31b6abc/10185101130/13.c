#include<stdio.h>

int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(b%10==1)
	  if(b==11)
	  printf("%dth ",b);
	  else
	  printf("%dst ",b);
	else if(b%10==2)
	  if(b==12)
	  printf("%dth ",b);
	  else
	  printf("%dnd ",b);
	else if(b%10==3)
	  if(b==13)
	  printf("%dth ",b);
	  else
	  printf("%drd ",b);
	else
	  printf("%dth ",b);
	  
    switch(a)
    {
    	case 1:
    		printf("January ");
    		break;
    	case 2:
    		printf("February ");
    		break;
    	case 3:
    		printf("March ");
    		break;
    	case 4:
    		printf("April ");
    		break;
    	case 5:
    		printf("May ");
    		break;
    	case 6:
    		printf("June ");
    		break;
    	case 7:
    		printf("July ");
    		break;
    	case 8:
    		printf("August ");
    		break;
    	case 9:
    		printf("September ");
    		break;
    	case 10:
    		printf("October ");
    		break;
    	case 11:
    		printf("November ");
    		break;
    	default:
    		printf("December ");
    		break;
    		
    	
    	
   	}
   	printf("%d",c);
   	return 0;
	
}
	