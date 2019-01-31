 #include <stdio.h>
 int main()
 {
 	int a=10;
	int b=20;
 	double jiea=1;
 	double jieb=1;
 	while(a!=0){
 		jiea*=a;
 		a--;
	 }
	while(b!=0){
 		jieb*=b;
 		b--;
	 }
	 printf("%.0f\n %.0f\n",jiea,jieb);
	 return 0;
  }