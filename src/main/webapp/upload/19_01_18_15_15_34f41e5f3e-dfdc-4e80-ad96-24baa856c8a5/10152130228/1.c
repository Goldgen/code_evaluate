#include <stdio.h>
#include <stdlib.h>

/*（循环）（百钱买百鸡）雄鸡7元1只，母鸡5元1只，小鸡1元3只。
花100元钱，买100只鸡，如果雄鸡、母鸡和小鸡都必须有，
则雄鸡、母鸡和小鸡各买几只？数字之间用空格隔开。*/
int main()
{
    for(int i=1; i<=100/7; i++){//make
        for(int j=1; j<=(100-7*i)/5; j++){//female
            for(int k=3; k<=(100-7*i-5*j)*3; k++){//kid
                if(k%3==0 && k/3+j*5+i*7==100 && k+j+i==100)
                        printf("%d %d %d", i, j, k);    
            }
        }
    }
    return 0;
}
