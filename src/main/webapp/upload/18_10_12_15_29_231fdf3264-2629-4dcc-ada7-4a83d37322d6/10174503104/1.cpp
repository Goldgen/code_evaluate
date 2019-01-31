#include <iostream>
#include <limits>
using namespace std;
int main(){
	cout<<numeric_limits <unsigned int > ::max()<<endl;
	cout<<numeric_limits <unsigned long long >::max();
	//printf("4294967295\n18446744073709551615");
	return 0;  
}
/*
4294967295
18446744073709551615*/
