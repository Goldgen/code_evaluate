#include<stdio.h>
int main()
{
    char a[26];
    scanf("%s",&a);
    int i;
    for(i=0;i<=26;i++){
       if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
          {

          printf("yes");
            break;}
   
    }

    return 0;
}
