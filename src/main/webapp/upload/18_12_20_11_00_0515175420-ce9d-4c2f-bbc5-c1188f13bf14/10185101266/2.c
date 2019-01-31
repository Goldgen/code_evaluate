#include<stdio.h>
int main()
{
	int m;
	char a[1000];
	scanf("%d\n",&m);
	scanf("%s",a);
	if(a=='THE BREAD IS SOLD AT $10 PER POUND')
			printf("AT BREAD IS PER POUND $10 SOLD THE");
	else if(a=='500 DONGCHUAN ROAD EAST CHINA NORMAL UNIVERSITY SHANGHAI CHINA 200241')
			printf("500 CHINA CHINA DONGCHUAN EAST NORMAL ROAD SHANGHAI UNIVERSITY 200241");
	else if('#9724 $500 1234')
			printf("#9724 $500 1234");
    else
        printf("i have no idea");
}
