#include <stdio.h>
void montuEng(int mon){
	char moname[13][15]={"gun","January","February","March","April","May","June",
	"July","August","September","October","November","December"};
	printf("%s",moname[mon]);
}
int main(){
	int n=0;
	scanf("%d",&n);
	montuEng(n);
	return 0;
}