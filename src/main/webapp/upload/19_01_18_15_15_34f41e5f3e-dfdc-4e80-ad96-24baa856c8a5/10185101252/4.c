#include <stdio.h>
double scores;
double maxn = 0, minn = 0x7FFFFFFF;
int main(int argc, char* argv[]){
	while(1 == scanf("%lf", &scores) && scores != -1){
		if(scores > maxn)
			maxn = scores;
		if(scores < minn)
			minn = scores;
	}
	printf("最高成绩是: %.2lf, 最低成绩是: %.2lf", maxn, minn);

}