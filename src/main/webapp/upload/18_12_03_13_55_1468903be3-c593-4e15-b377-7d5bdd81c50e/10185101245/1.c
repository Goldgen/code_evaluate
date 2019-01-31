#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[81];
    int i=0;
    scanf("%s",str);
    while(i<8)
    {
        switch(str[i])
        {
        case'a':case'A':case'b':case'B':case'c':case'C':
            printf("2");
            break;
             case'd':case'D':case'e':case'E':case'f':case'F':
                 printf("3");
                 break;
         case'g':case'G':case'h':case'H':case'i':case'I':
                      printf("4");
                      break;
          case'j':case'J':case'k':case'K':case'l':case'L':
                           printf("5");
                           break;
           case'm':case'M':case'n':case'N':case'o':case'O':
                                printf("6");
                                break;
          case'p':case'P':case'q':case'Q':case'r':case'R':case's':case'S':
                                     printf("7");
                                     break;
           case't':case'T':case'u':case'U':case'v':case'V':
                                          printf("8");
                                          break;
        case'w':case'W':case'x':case'X':case'y':case'Y':case'z':case'Z':
                                               printf("9");
                                               break;
          default:
                                            break;
        }
        i++;
        }

    return 0;
}
