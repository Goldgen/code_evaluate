#include<bits/stdc++.h>
int main()
{
   float A,B;
   scanf("%f%f",&A,&B);
   float C;
   if (A-B>=0);
   C=sqrt(A-B);
   else
	C=sqrt(B-A);
	printf("%.8f%.8f%.3f",A,B,C);
   
   return 0;
}