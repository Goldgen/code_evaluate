int main()
{
    struct Book{
        char book_name[100];
        double book_price;
        char book_press[50];
    };
    struct Book *pbook=(struct Book*)malloc(sizeof(struct Book));
    gets(pbook->book_name);
    scanf("%lf",&pbook->book_price);
    getchar();
    gets(pbook->book_press);
    printf("name is \"%s\", price is $%.2f, press is \"%s\"",pbook->book_name,
           pbook->book_price,pbook->book_press);
}