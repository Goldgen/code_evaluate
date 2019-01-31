#include <stdio.h>
#include <stdlib.h>

int main()
{char input;
scanf("%c",&input);
if((input>='a'&&input<='z')||(input>='A'&&input<='Z'))
{switch(input)
{case 'a': printf("yes");break;
case 'e': printf("yes");break;
case 'i': printf("yes");break;
case 'o': printf("yes");break;
case 'u': printf("yes");break;
case 'A': printf("yes");break;
case 'E': printf("yes");break;
case 'I': printf("yes");break;
case 'O': printf("yes");break;
case 'U': printf("yes");break;
default: printf("no");break;
}}
return 0;
}
