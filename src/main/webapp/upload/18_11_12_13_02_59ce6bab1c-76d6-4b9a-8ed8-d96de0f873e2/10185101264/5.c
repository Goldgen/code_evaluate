#include <stdio.h>
#include <math.h>
int main(){

	double n, a, b, c, sum = 0;
	char name;

	while(scanf("%c", &name) && name != 'T'){

	    scanf("%lf %lf %lf %lf\n", &n, &a, &b, &c);
		double V = (a * b * c * n) / 12;
		printf("%.0lf %.0lf*%.0lf*%.0lf ", n, a, b, c);

		if(name == 'P'){

			printf("Pine, Cost: $%.2lf\n", 0.89 * V);
			sum += 0.89 * V;
		}else if(name == 'F'){

			printf("Fire, Cost: $%.2lf\n", 1.09 * V);
			sum += 1.09 * V;
		}else if(name == 'C'){

			printf("Cedar, Cost: $%.2lf\n", 2.26 * V);
			sum += 2.26 * V;
		}else if(name == 'M'){

			printf("Maple, Cost: $%.2lf\n", 4.50 * V);
			sum += 4.50 * V;
		}else if(name == 'O'){

			printf("Oak, Cost: $%.2lf\n", 3.10 * V);
			sum += 3.10 * V;
		}
	}
	printf("Total cost: $%.2lf", sum);
}