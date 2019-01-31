//
//  main.c
//  201810261454
//
//  Created by apple on 2018/10/26.
//  Copyright © 2018年 apple. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float height=100,distance=100;
    for(int i=1;i<10;i++){
        distance+=height;
        height/=2;
    }
    printf("%.3f %.3f",distance,height/2);
    return 0;
}
