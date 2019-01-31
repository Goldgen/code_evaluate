#include <stdio.h>
int main()
{float a,min,max;
scanf("%f",&a);
min=a;
max=a;
while(a>=0)
    {min=min<=a?min:a;
     max=max>=a?max:a;
     scanf("%f",&a);
     }
printf("最高成绩是: %0.2f, 最低成绩是: %0.2f",max,min);

}