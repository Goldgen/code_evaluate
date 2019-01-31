#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	switch(ch)
	{
		case 'a':case 'e':
		case 'i':case 'o':
		case 'u':{cout<<"vowel";break;}
		case 'b':case 'c':
		case 'd':case 'f':
		case 'g':case 'h':
		case 'k':case 'j':
		case 'l':case 'm':
		case 'n':case 'p':
		case 'q':case 'r':
		case 's':case 't':
		case 'v':case 'w':
		case 'x':case 'y':
		case 'z':{cout<<"consonant";break;}
			default:
			{cout<<"ERROR";break;}
	}
	return 0;
}