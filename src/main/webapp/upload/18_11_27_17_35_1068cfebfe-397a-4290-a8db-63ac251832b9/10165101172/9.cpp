#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <cstring>

using namespace std;

#define MAXN 1000

int a[MAXN],b[MAXN];

int main(void)
{
    string str1,str2;//????
    long int len1,len2;
    long int i,j,k;
    int up;
    
    /*????*/
    cin>>str1>>str2;
    
    /*?????*/
    len1 = str1.length();
    len2 = str2.length();
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    
    /*???????????*/
    for (i = len1 - 1, k = 0; i != -1; -- i)
    {
        a[k] = str1[i] - '0';
        k++;
    }
    for (j = len2 - 1, k = 0; j != -1; -- j)
    {
        b[k] = str2[j] - '0';
        k++;
    }
    for (i = 0, up = 0; i < MAXN; ++ i)
    {
        a[i] = a[i] + b[i] + up;
        up = a[i] / 10;
        a[i] %= 10;
    }
    for (i = MAXN - 1; i != -1; -- i)
    {
        if (a[i])
        {
            break;
        }
    }
    for (k = i; k != -1; --k)
    {
        cout<<a[k];
    }
    return 0;
}
