#include <stdio.h>
#include <math.h>
#include <string.h>

char str[10];

double solve(char type,double sume){
    switch (type) {
        case 'P':
            sume *= 0.89;
            strcpy(str,"Pine");
            break;
        case 'F':
            sume *= 1.09;
            strcpy(str,"Fire");
            break;
        case 'C':
            sume *= 2.26;
            strcpy(str,"Cedar");
            break;
        case 'M':
            sume *= 4.50;
            strcpy(str,"Maple");
            break;
        case 'O':
            sume *= 3.10;
            strcpy(str,"Oak");
            break;
		default:
			break;
    }
    return sume;
}

int main(void){
    double sume = 0,sum = 0;
    int num,wide,thick,length;
    char type;
    while (scanf("%c",&type) && type != 'T'){
        sume = 0;
        scanf("%d %d %d %d",&num,&wide,&thick,&length);
        sume += num*wide*thick*length;
        sume /= 12;
        printf("%d %d*%d*%d %s, Cost: $%.2lf\n",num,wide,thick,length,str,solve(type,sume));
        sum += solve(type,sume);
        getchar();
    }
    printf("Total cost: $%.2lf\n",sum);
    return 0;
}
