#include <stdio.h>

int main() {
  char array[10][3];
  char ch='a';
  char zh;

  for(int i=2; i<7; i++){
    for(int j=0; j<3; j++){
        array[i][j]=ch;
        ch++;
    }
  }
  for(int j=0; j<4; j++){
    array[7][j]=ch;
    ch++;
  }
  for(int j=0; j<3; j++){
    array[8][j]=ch;
    ch++;
  }
  for(int j=0; j<4; j++){
    array[9][j]=ch;
    ch++;
  }
  for(int length=0; length<8; length++){
    zh=getchar();
    if((zh>=array[9][0])&&(zh<=array[9][3]))
        putchar('9');
    else if((zh>=array[8][0])&&(zh<=array[8][2]))
        putchar('8');
    else if((zh>=array[7][0])&&(zh<=array[7][3]))
        putchar('7');
    else
    for(int i=2; i<7; i++){
        if((zh>=array[i][0])&&(zh<=array[i][2]))
            printf("%d",i);
    }
}
  while((zh=getchar())!=EOF)
    continue;
}

