//
//  main.c
//  201810261454
//
//  Created by apple on 2018/10/26.
//  Copyright © 2018年 apple. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            if(0==i||a-1==i)
                printf("*");
            else
                if(j==0||j==i)
                    printf("*");
                else
                    printf(" ");
        }
        if(a-1!=i)
        printf("\n");
    }
    return 0;
}
