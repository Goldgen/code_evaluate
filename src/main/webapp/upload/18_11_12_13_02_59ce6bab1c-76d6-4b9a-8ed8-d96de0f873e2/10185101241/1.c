#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	for(int y=1;y<=x;y++)
	{
		for(int z=1;z<=y;z++) 
		{
			if(z!=y&&z*y>=10) printf(" %d * %d = %d",z,y,z*y);
			else if(z!=y&&z*y<10) printf(" %d * %d =  %d",z,y,z*y);
			else if(z==y&&y!=x&&z*y<10) printf(" %d * %d =  %d\n",z,y,z*y);
			else if(z==y&&y!=x&&z*y>=10) printf(" %d * %d = %d\n",z,y,z*y);
			else if(z*y>=10) printf(" %d * %d = %d",z,y,z*y);
			else printf(" %d * %d =  %d",z,y,z*y);
		}
	}
	return 0;
}