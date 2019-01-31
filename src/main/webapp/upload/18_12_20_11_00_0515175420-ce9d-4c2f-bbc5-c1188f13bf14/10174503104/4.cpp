#include <bits/stdc++.h>
using namespace std;
void f(){
	char ch;
	ch=getchar();
	if(ch=='?') return ;
	f();
	putchar(ch);
}
int main() {
    f(); 
    return 0;
}