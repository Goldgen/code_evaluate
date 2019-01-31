#include <stdio.h>

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;

    scanf("%d %d %d", &A, &B, &C);

    if(B>=C)
	{ if(A>=B)
        D = B;
      else if(A<=C)
        D = C;
      else
        D = A;
	}
    else
	{ if(A<=B)
        D = B;
      else if(A>=C)
        D = C;
      else
        D = A;
	}
    printf("%d", D);
    return 0;
}
