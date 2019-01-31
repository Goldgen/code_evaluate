#include <stdio.h>
#include <string.h>

double give_price(char tree) {
	if (tree == 'P') return 0.89;
	if (tree == 'F') return 1.09;
	if (tree == 'C') return 2.26;
	if (tree == 'M') return 4.50;
	if (tree == 'O') return 3.10;
}

char* give_type(char tree) {
	if (tree == 'P') return "Pine";
	if (tree == 'F') return "Fire";
	if (tree == 'C') return "Cedar";
	if (tree == 'M') return "Maple";
	if (tree == 'O') return "Oak";
}
int main() {
	char tree = 0;
	double ans = 0;
	double a, b, c, d; 
	
	while (tree!='T') {
		scanf("%c", &tree);
		//printf("%c", tree);
		if (tree == 'T') break;
		else if(tree >= 'A' && tree <= 'Z'){
			scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
			//tmpTotal = ((double)((int)(a * b * c * d * give_price(tree) / 12.00 * 100)) / 100.00);
		    printf("%.lf %.lf*%.lf*%.lf %s, Cost: $%.02lf\n", a, b, c, d, give_type(tree), a * b * c * d * give_price(tree) / 12.00);
			ans = ans + a * b * c * d * give_price(tree) / 12.00;
			//printf("%lf", ans);
		}
	}
	printf("Total cost: $%.02lf", ans);
	return 0;
}