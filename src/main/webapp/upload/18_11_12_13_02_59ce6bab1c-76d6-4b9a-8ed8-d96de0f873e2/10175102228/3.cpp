#include <iostream>
#include<math.h>
using namespace std;
int  isPrime( int num )

{
        if(num %6!= 1&&num %6!= 5)

            {
            return 0 ;
            }

            else {
            int tmp =sqrt( num);

           for(int i= 5;i <=tmp; i+=6 )

            if(num %i== 0||num %(i+ 2)==0 )return 0 ;
             }
                 return 1 ;

}
int main()
{  int n;
    cin>> n;
    if(n>0&&n<=3)
    {  cout << "It is a prime number." << endl;
    }
    else if(n==4)
        {cout<<"It's not a prime number."<<endl;
		}
    else if(n==5)
        {  cout <<"It is a prime number." << endl;
     }
     else if(n>=6)
     {  if(isPrime(n)==0)
       {cout<<"It's not a prime number."<<endl;
        }
       else
            {  cout <<"It is a prime number." << endl;
          
            }
     }
 return 0;

}

