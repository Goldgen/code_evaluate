#include<stdio.h>

int main()
{
    double data[11][5];
    double n = 1.9;
    for (unsigned int i = 0; i < 11; i++) {
        n += 0.1;
        for (unsigned int j = 0; j < 5; j++) {
            switch (j) {
                case 0:
                    data[i][j] = n;
                    break;
                case 1:
                    data[i][j] = 1.0 / n;
                    break;
                case 2:
                    data[i][j] = n * n;
                    break;
                case 3:
                    data[i][j] = n * n * n;
                    break;
                case 4:
                    data[i][j] = n * n * n * n;
                    break;
             
                default:
                    break;
            }
          
        }
    }
    
    for (unsigned int i = 0; i < 11; i++) {
        for (unsigned int j = 0; j < 5; j++) {
            printf("%.4lf", data[i][j]);
            if (j < 4) printf(" ");
        }
        if (i < 10)
        printf("\n");
    }
    return 0;
}
