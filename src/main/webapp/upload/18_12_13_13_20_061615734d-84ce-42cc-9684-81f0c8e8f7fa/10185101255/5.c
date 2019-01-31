#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    char month[12][10] = {
                            "January",
                            "February",
                            "March",
                            "April",
                            "May",
                            "June",
                            "July",
                            "August",
                            "September",
                            "October",
                            "November",
                            "December"
                         };
    printf("%s", month[num-1]);
    
    
    
    return  0;
}
