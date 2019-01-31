#include<stdio.h>
#include<ctype.h>
int main()
{
  char character;
  scanf("%c",&character);
  if(isalpha(character)&&isupper(character)){
    printf("%c",tolower(character));
  }
  else printf("ERROR");
  return 0;
}