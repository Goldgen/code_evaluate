#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<iostream>
using namespace std;
int main()
{
    string s,s1;
    while(cin>>s)
    {
        if(s=="#")
            break;
        cin>>s1;
        int n=0;
        while(s.find(s1)>=0&&s.find(s1)<s.size())
        {
            n++;
            s.erase(s.find(s1),s1.size());
        }
        cout<<n<<endl;
    }
    return 0;
}
