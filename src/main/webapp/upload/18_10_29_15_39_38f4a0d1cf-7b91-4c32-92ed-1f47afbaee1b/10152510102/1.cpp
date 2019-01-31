#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=100/7;i++)
		for(j=1;j<=100/5;j++)
			for(k=3;k<=100*3;k+=3)
				if(i*7+j*5+k/3==100&&i+j+k==100)
					cout<<i<<" "<<j<<" "<<k;
	return 0;
}