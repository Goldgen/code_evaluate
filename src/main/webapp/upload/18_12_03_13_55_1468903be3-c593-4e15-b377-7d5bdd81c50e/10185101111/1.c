int main()
{
   char a[80];
   scanf("%s",a);
   int t=strlen(a);
   for(int i=0;i<t;i++){
   if(a[i]-'a'<15)
    printf("%d",(a[i]-'a')/3+2);
   else if(a[i]-'o'<=4)
    printf("7");
   else if(a[i]-'s'<=3)
    printf("8");
   else
    printf("9");
   }
}