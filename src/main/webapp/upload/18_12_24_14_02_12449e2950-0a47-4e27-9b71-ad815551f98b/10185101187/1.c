#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char name[100];
    char price[10];
    char press[50];
};

int main()
{
    struct Book *data = NULL;
    data = (struct Book*)malloc(sizeof(struct Book));

    if(data!=NULL)
    {
        gets(data->name);
        gets(data->price);
        gets(data->press);
      printf("name is \"%s\", price is $%s, press is \"%s\"", data->name, data->price, data->press);
    }

    free(data);
    data = NULL;
}
