
#include <stdio.h>
#include <string.h>
char a[81],b[81],c[161];
void houshi(char ch[81],int zhongjian){
	int num=2*zhongjian;
	for(int j=zhongjian;ch[j]!='\0';j++,num++){
		c[num]=ch[j];
	}
}
int main(){
	int i;
    scanf("%s %s",&a,&b);
    for(i=0;;i++){
    	if(a[i]=='\0'||b[i]=='\0'){
    		break;
        }	
		else{
			c[2*i]=a[i];
    		c[2*i+1]=b[i];
		}	
	}
	if(a[i]=='\0')
	houshi(b,i);
    if(b[i]=='\0')
	houshi(a,i);

	printf("%s",c);
	return 0;
}