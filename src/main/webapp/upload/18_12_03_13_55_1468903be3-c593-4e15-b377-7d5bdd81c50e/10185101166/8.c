int main()
{
    char str[85];
    int a , b , t = 0;
    gets(str);
    if(strlen(str)%2 == 0)
    {
        for(a = 0,b = strlen(str) - 1;a <= strlen(str) / 2 - 1 ,b >= strlen(str) / 2;a++ , b--)
        {
            if(str[a]!=str[b])
              t++;
        }
    }
    else
    {
        for(a = 0,b = strlen(str) - 1;a <= (strlen(str)-1) / 2 - 1,b >= ( strlen(str) - 1) / 2 + 1 ;a++,b--)
        {
            if(str[a]!=str[b])
              t++;
        }
    }

    if(t==0)
        printf("True");
    else
        printf("False");
}