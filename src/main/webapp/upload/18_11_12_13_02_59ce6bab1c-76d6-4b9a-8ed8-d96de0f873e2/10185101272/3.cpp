#include<iostream>
using namespace std;
int isPrime(long long n){
    long long i;
    if(n==1)
        return 0;
    for(i=2;i*i<=n;i++)
  	  if(n%i==0)
        return 0;
    return 1;
}
int main(){
	long long n;
	cin>>n;
	if(isPrime(n)==0) cout<<"It's not a prime number.";
	else cout<<"It is a prime number.";
	return 0;
}