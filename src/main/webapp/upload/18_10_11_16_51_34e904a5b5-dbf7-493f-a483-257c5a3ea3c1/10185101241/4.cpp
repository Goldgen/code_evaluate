#include<bits/stdc++.h>

int main()
{
	float A,B,D;
	scanf("%f%f",&A,&B);
	if(A-B<=0)
	D=sqrt(B-A);
	else
	D=sqrt(A-B);
	printf("%.8f %.8f %.3f",A,B,D);
	return 0;
}