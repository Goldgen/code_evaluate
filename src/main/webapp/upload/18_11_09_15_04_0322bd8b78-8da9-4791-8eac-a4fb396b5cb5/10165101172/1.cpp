#include <iostream>
#include <algorithm>

using namespace std;
void win_lose(char a,char b){
    if (a == b)
        cout<<"Tie";
    else if ((a == 'S' && b == 'R') || (a == 'R' && b == 'C') || (a == 'C' && b == 'S'))
        cout<<"Bob";
    else
        cout<<"Alice";
}

int main(void)
{
    char a,b;
    cin>>a>>b;
    win_lose(a, b);
    return 0;
}
