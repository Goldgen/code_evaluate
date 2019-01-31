#include <bits/stdc++.h>
using namespace std;
const long long inf=1e15;
struct contact
{
	char name[10],mail[20],tel[20];
	long long id;
}S[1005];
int N=0;
long long myatoi(char s[]){
	long long r=0;
	for(int i=0;i<strlen(s);i++)
		r=r*10+s[i]-'0';
	return r;
}
int main(){
	char order[15];
	while(scanf("%s",order)!=EOF){
		contact t;
		bool fnd=0;
		long long id;
		if(strcmp(order,"ADD")==0){
			char tid[20];
			scanf("%s %s %s %s",t.name,tid,t.mail,t.tel);
			t.id=tid[0]=='N'?inf:myatoi(tid);
			bool dup=0;
			for(int i=0;i<N;i++)
				if(S[i].id==t.id&&t.id!=inf)
					dup=1;
			if(dup)
				printf("Already Exists\n");
			else{
				S[N++]=t;
				printf("Added\n");
			}
		}
		else if(strcmp(order,"DELETE")==0){
			scanf("%lld",&id);
			bool del=0;
			for(int i=0;i<N;i++)
				if(S[i].id==id){
					for(int j=i;j<N-1;j++)
						S[j]=S[j+1];
					N--;
					del=1;
				}
			if(!del)
				printf("Not Found\n");
			else
				printf("Deleted\n");
		}
		else if(strcmp(order,"FIND")==0){
			scanf("%lld",&id);
			for(int i=0;i<N;i++)
				if(S[i].id==id){
					fnd=1;
					printf("%s %lld %s %s\n",S[i].name,S[i].id,S[i].mail,S[i].tel);
				}
			if(!fnd)
				printf("Not Found\n");
		}
		else if(strcmp(order,"PRINT")==0){
			if(!N) {printf("Empty\n"); continue;}
			printf("%8s %11s %15s %11s\n","NAME","STUDENT_ID","EMAIL","TELEPHONE");
			for(int i=0;i<N;i++)
				if(S[i].id!=inf)
					printf("%8s %11lld %15s %11s\n",S[i].name,S[i].id,S[i].mail,S[i].tel);
				else
					printf("%8s %11s %15s %11s\n",S[i].name,"NULL",S[i].mail,S[i].tel);
		}
		else if(strcmp(order,"UPDATE")==0){
			scanf("%s %lld %s %s",t.name,&t.id,t.mail,t.tel);
			for(int i=0;i<N;i++)
				if(S[i].id==t.id){
					S[i]=t;
					fnd=1;
				}
			if(!fnd)	printf("Not Found\n");
			else	printf("Updated\n");
		}
		else{//SORT
			for(int i=0;i<N-1;i++)
				for(int j=0;j<N-1;j++)
					if(S[j].id>S[j+1].id)
						swap(S[j],S[j+1]);
			printf("Sorted\n");
		}
	}
	return 0;
}
