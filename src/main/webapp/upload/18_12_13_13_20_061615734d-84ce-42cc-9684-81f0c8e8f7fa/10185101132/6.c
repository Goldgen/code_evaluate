#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotate(int* p, int n, int m);
/* PreCondition:
      p points to an array with n integers, m is also an integer
   PostCondition:
      rotate m elements of an array
*/
void rotate1(int* p, int n);

int main()
{
    int maxsize = 0;
    int rotateTime = 0;
    int arr[12];

    scanf("%d %d", &maxsize, &rotateTime);
    getchar();
    int i;
    for(i = 0; i < maxsize; i++){
        scanf("%d", &arr[i]);
    }

    rotate(arr, maxsize, rotateTime);

    printf("%d", arr[0]);
    for(i = 1; i < maxsize; i++){
        printf(" %d", arr[i]);
    }

    return 0;
}

void rotate(int* p, int n, int m){
    int cnt = 0;
    while (cnt < m){
        rotate1(p, n);
        cnt++;
    }
}

void rotate1(int* p, int n){
    int temp = p[n - 1];
    int i;
    for(i = n - 1; i > 0; i--){
        p[i] = p[i-1];
    }
    p[0] = temp;
}
