#include<stdio.h>
int m(int * array, int n)
{
	int m = array[0] , i=1;
	while(i<n)
       {
           if(m > array[i])
            {m=array[i];}
           i++;
       }
    return m;
}

int s(int * array, int n)
{
    int s=0,i=0;
    while(i<n)
    {
        s+=array[i];
        i++;
    }

    return s;
}

int main()
{
	int n,j=0,array[100] = {0};
	scanf("%d", &n);
	while(j<n)
	{
	   scanf("%d", &array[j]);
       j++;
	}
	printf("%d %d", m(array, n), s(array, n));
}

