#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct data
    {
        char name[8];
        int num;
        char email[15];
        char ber[11];
    }typedef data;
    data *mes;
    data mess;
    mes=&mess;
    mes=(data*)malloc(4*sizeof(data));
    gets(mes->name);
    scanf("%lf",&mes->num);
    getchar();
    gets(mes->email);
    gets(mes->ber);
    printf("Hello world!\n");
    return 0;
}