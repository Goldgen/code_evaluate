#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,x,sum=0;
	for(i=1;i<=5;i++)
    {
        cin>>x;
        sum+=x;
    }

    printf("%.1f",float(sum)/5);
	return 0;
}
