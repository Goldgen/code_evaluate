#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>

using namespace std;

struct book {
    string book_name;
    double price;
    string press;
};

int main(void){
    book the_book;
    getline(cin,the_book.book_name);
    cin>>the_book.price;
    getchar();
    getline(cin,the_book.press);
    cout<<"name is "<<"\""<<the_book.book_name<<"\""<<", price is $";
    printf("%.2lf",the_book.price);
    cout<<", press is "<<"\""<<the_book.press<<"\""<<endl;
    return 0;
}
