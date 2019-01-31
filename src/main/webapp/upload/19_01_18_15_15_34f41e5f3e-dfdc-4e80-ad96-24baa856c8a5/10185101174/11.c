#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
	printf("153");
    for (int a = 200; a < 1000; a++)
        {
             x = a / 100;
             y = a % 100 / 10;
             z = a % 10;
            if (x * x * x + y * y * y + z * z * z == a)
            {
                printf(" %d",a);
            }
        }
}
