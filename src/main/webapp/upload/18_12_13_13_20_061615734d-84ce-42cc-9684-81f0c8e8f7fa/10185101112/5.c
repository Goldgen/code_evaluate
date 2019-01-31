#include <stdio.h>
#include <string.h>

void Number2Alpha(int num, char* mptr);
	char ch[12][10]={{"January"}, 
	{"February"},
	{"March"},
    {"April"},
	{"May"},
	{"June"}, 
	{"July"},
	{"August"}, 
	{"September"},
	{"October"},
	{"November"}, 
	{"December"}
	};
int main(){
	int num;
	scanf("%d",&num);

	char* mptr=NULL;
	Number2Alpha(num,mptr);
	return 0;
}
void Number2Alpha(int num, char* mptr){
	mptr=ch[num-1];
	printf("%s",mptr);
	
}
 
