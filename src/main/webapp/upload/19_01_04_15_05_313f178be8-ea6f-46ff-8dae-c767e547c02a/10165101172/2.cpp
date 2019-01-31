#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

//之前提交的是错的。。。补一发正确的：

using namespace std;

int main(void){
    int a,b,c;
    int flag = 0;
    scanf("%d+%d=%d",&a,&b,&c);
    for (int i = 1;i < 9;i++){
        if (a*pow(10,i)+ b == c){
                flag = i;
            break;
        }
        if (a*pow(10,i)+ b > c)
            break;
    }
    if (flag == 0){
        for (int j = 1; j < 9;j++){
            if (b*pow(10,j)+ a == c){
                flag = -j;
                break;
            }
        }
    }
    cout<<flag<<endl;
    return 0;
}

