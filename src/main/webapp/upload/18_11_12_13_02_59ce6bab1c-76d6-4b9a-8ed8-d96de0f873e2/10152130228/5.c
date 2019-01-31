#include <stdio.h>
#include <stdlib.h>

/*You are working for a lumber(家具) company,
and they would like a program that calculates the cost of lumber for a order.
The company sells pin, fir, cedar, maple, and oak lumber.
Lumber is priced by board feet.
One board foot equals one a square foot, one inch thick.
The price per board foot is given in the following table:
Pine  0.89
Fire  1.09
Cedar 2.26
Maple 4.50
Oak  3.10
The lumber is sold in different dimensions
(specified in inches of width and height, and feet of length)
that need to be converted to board feet.
For example.
 A 2*4*8 piece is 2 inches wide, 4 inches high, and 8 feet long,
 and is equivalent to 5.333 board feet.
 An entry from the user will be in the form of a letter and four integer numbers.
 The integers are: number of pieces, width, height, and length.
 The letter will be one of P, F, C, M, O(corresponding to the five kinds of wood) or T,
 meaning Total.
 When the letter is T, There are no integers following it on the line.
 The program should print out the price for each entry, and print the total after T is entered.
 Here is an example run:
样例输入：（输入为T时输出total cost且停止输入）
P 10 2 4 8
M 1 1 12 8
T
样例输出：（每行输出对应每行输入）
10 2*4*8 Pine, Cost: $47.47
1 1*12*8 Maple, Cost: $36.00
Total cost: $83.47
Develop the program, and use proper style and documentation in your code.
1英尺=12英寸
*/

int main()
{
    char cate;
    int piece, width, height, length;
    float sum;
    //while(1){
	while(1){
        //printf("Enter item: ");
        scanf("%c", &cate);
        if(cate=='T') break;
        else{
        scanf("%d%d%d%d", &piece, &width, &height, &length);//英尺，英尺，英寸
        //printf("%d %d*%d*%d ", piece, width, height, length);
        float board, mm;
        board = (float)width*(float)height*(float)length/(float)12;
        switch(cate){
            case 'P':
                {mm = (float)piece*board*0.89;
                printf("%d %d*%d*%d Pine, Cost: $%.2f\n", piece, width, height, length, mm);
                sum += mm;
                break;}
            case 'F':
                {mm = (float)piece*board*1.09;
                printf("%d %d*%d*%d Fire, Cost: $%.2f\n", piece, width, height, length, mm);
                sum += mm;
                break;}
            case 'C':
                {mm = (float)piece*board*2.26;
                printf("%d %d*%d*%d Cedar, Cost: $%.2f\n", piece, width, height, length, mm);
                sum += mm;
                break;}
            case 'M':
                {mm = (float)piece*board*4.50;
                printf("%d %d*%d*%d Maple, Cost: $%.2f\n", piece, width, height, length, mm);
                sum += mm;
                break;}
            case 'O':
                {mm = (float)piece*board*3.10;
                printf("%d %d*%d*%d Oak, Cost: $%.2f\n", piece, width, height, length, mm);
                sum += mm;
                break;}
        }
        }
		//printf("Enter item: ");
    }
    printf("Total cost: $%.2f", sum);
    return 0;
}
