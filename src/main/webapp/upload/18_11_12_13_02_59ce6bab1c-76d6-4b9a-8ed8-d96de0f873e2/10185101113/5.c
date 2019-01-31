#include <stdio.h>
double calculate(int,int,int,int);
int main()
{   double pine=0.89,fire=1.09,cedar=2.26,maple=4.50,oak=3.10;
    char ch;
    int p1=0,p2,p3,p4;
    int f1=0,f2,f3,f4;
    int c1=0,c2,c3,c4;
    int m1=0,m2,m3,m4;
    int o1=0,o2,o3,o4;
    double p5=0.0,f5=0.0,c5=0.0,m5=0.0,o5=0.0,totle=0.0;
    while((ch=getchar())!='T')
    {
         if (ch=='P')
        {
            scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
            p5=calculate(p1,p2,p3,p4);
            printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",p1,p2,p3,p4,p5*pine);
            totle +=p5*pine;

        }
         if (ch=='C')
        {
            scanf("%d %d %d %d",&c1,&c2,&c3,&c4);
            c5=calculate(c1,c2,c3,c4);
            printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",c1,c2,c3,c4,c5*cedar);
            totle +=c5*cedar;

        }
         if (ch=='O')
        {
            scanf("%d %d %d %d",&o1,&o2,&o3,&o4);
            o5=calculate(o1,o2,o3,o4);
            printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",o1,o2,o3,o4,o5*oak);
            totle +=o5*oak;
        }
         if (ch=='F')
        {
            scanf("%d %d %d %d",&f1,&f2,&f3,&f4);
            f5=calculate(f1,f2,f3,f4);
            printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",f1,f2,f3,f4,f5*fire);
            totle +=f5*fire;
        }
         if (ch=='M')
        {
           scanf("%d %d %d %d",&m1,&m2,&m3,&m4);
            m5=calculate(m1,m2,m3,m4);
            printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",m1,m2,m3,m4,m5*maple);
            totle +=m5*maple;
        }


    }

    printf("Total cost: $%.2lf",totle);
    return 0;
}
double calculate(int a,int b,int c,int d){
    double foot=144.0;
    return a*b*c*d*12/foot;
}