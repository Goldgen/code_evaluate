#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,x,n;
    cin>>n;
    for(i=1;i<n/2+1;i++)
    {
        int l=(n+1)/2-i;
        for(j=1;j<=(n+1)/2-i;j++)
            cout<<" ";
        if(i==1)
            cout<<"*";
        else
        {
            cout<<"*";
            for(x=1;x<=n-l-l-2;x++)
                cout<<" ";
            cout<<"*";
        }
        //r(j=1;j<=(n+1)/2-i;j++)
        //  cout<<"1";
        cout<<endl;
    }
    for(i=1;i<=n;i++)
        cout<<"*";
	return 0;
}
