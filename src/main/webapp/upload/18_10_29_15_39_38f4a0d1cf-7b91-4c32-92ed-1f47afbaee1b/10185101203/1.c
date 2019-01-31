#include<stdio.h>
int main()
{
    int cock=1;
    int hen=1;
    int chick=1;

    for(cock=1;cock<=14;cock++)
    {
        for(hen=1;hen<20;hen++)
        {
            for(chick=3;chick<300;chick+=3)
            {
                if(7*cock+5*hen+chick/3==100
				   &cock+hen+chick==100)
                        printf("%d %d %d",cock,hen,chick);
            }
        }
    }
}
