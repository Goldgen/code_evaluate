#include <stdio.h>

int main(void)
{
    int m,n;
    scanf("%d %d",&m,&n);
    int In[m][n];
    for(int js1 = 0;js1 < m;js1++){
        for(int js2 = 0;js2 < n;js2++){
            scanf("%d",&In[js1][js2]);
        }
    }
    for(int js1 = 0;js1 < n;js1++){
        for(int js2 = 0;js2 < m;js2++){
            if(js2 == 0) printf("%d",In[js2][js1]);
            else printf(" %d",In[js2][js1]);
            if(js1 < n-1&&js2 == m-1) printf("\n");
        }
    }
    return 0;
}
