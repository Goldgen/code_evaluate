#include <stdio.h>
#include <string.h>
void paixu(char str[][30], int n)
{
	int m;
	char ch[30];

	for (int i=0;i<n-1;i++)
	{
		m=i;
		for (int j=i+1;j<n;j++)
		{
			if (strcmp(str[j], str[m]) > 0)
				m=j;
		}

		if (m!=i)
		{
			strcpy(ch,str[m]);
			strcpy(str[m],str[i]);
			strcpy(str[i],ch);
		}
	}
}
int main(void)
{
	int n;
	char arr[10][30];
	scanf("%d", &n);
	getchar();
    for (int i=0;i<n;i++)
        gets(arr[i]);
    paixu(arr, n);
    for (int i=0;i<n;i++)
    {
        printf("%s", arr[i]);
        if (i!=n)
            printf("\n");
    }
    return 0;
}
