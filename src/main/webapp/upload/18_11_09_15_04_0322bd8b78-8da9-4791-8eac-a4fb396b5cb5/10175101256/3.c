#include <stdio.h>
#include <string.h>
int yuanyin(char a);
int main()
{
    char a[50];
    int b=0;
    scanf("%s",&a);
    for(int i=0;i<strlen(a);i++){
    b+=yuanyin(a[i]);
    b+=yuanyin(a[i]-32);
    }
    if(b)
        printf("yes");
    else
        printf("no");
    return 0;
}
int yuanyin(char a){
        switch(a){
    case 65:
    case 69:
    case 73:
    case 79:
    case 85:
    return 1;
    default:
    return 0;
    }
}
