#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main (void)

{
    int n = 0;
    scanf("%d",&n);
    bool m[n];
    bool checker = 0;
    int i = 0;
    int line = 0;
    int MaxCount[n];
    int count[n];
    int value[n];

    for(i=0;i<n;i++)
    {
        m[i] = 0;
        count[i] = 0;
        MaxCount[i] = pow(2,i);
        value[i] = i;
    }

    for(line = 1;line<=pow(2,n);line++)
    {
        printf("{");
        for(checker = 0,i=0;i<n;i++)
        {
            if (count[i] == MaxCount[i])
            {
                m[i] = !m[i];
                count[i] = 0;
            }
            if(m[i]==1)
                {
                    if (checker == 1)
                        printf(",");
                    checker = 1;
                    printf("%d",value[i]);
                }
            count[i]++;
        }
        printf("}");
        if(line != pow(2,n))
            printf("\n");
    }

}
