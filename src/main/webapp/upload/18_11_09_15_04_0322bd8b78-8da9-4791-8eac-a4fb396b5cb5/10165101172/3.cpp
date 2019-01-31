#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main(void)
{
    char a[100];
    int flag = 0;
    cin>>a;
    for (int i = 0;i < strlen(a);i++){
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            flag = 1;
            break;
        }
    
    }
    (flag == 1)?cout<<"yes":cout<<"no";
    return 0;
}
