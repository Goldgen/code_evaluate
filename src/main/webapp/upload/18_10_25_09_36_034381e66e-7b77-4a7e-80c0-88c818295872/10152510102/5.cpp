#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n%4==0)
    {
        if(n%100==0&&n%400!=0)
            cout<<"不是闰年 ";
        else
            cout<<"闰年 ";
    }
    else
    {
        cout<<"不是闰年 ";
    }
    if(m>=3&&m<=5)
        cout<<"春季 ";
    if(m>=6&&m<=8)
        cout<<"夏季 ";
    if(m>=9&&m<=11)
        cout<<"秋季 ";
    if(m==12||m<=2)
        cout<<"冬季 ";
    switch(m)
    {
        case 1:case 3:case 5:case 7:
        case 8:case 10:case 12:
        {
            cout<<"31";
            break;
        }
        case 4:case 6:case 9:case 11:
            {
                cout<<30;
                break;
            }
        default:
            {
                if((n%4==0&&n%100!=0)||n%400==0)
                    cout<<29;
                else
                    cout<<28;
                break;
            }
    }
	return 0;
}
