#include<stdio.h>

 int main()
 {	int num;
    scanf("%d",&num);
    int i = 0, count = 0;
    for (i = 0; i < 32; i++)
        {
            if (num % 2 == 1)
            {
                count++;
            }
       num = num / 2;
    	}
    printf("%d",count);
    return 0;

    }
