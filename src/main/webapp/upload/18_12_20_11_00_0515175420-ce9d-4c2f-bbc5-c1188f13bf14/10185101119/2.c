#include <stdio.h>
#include <string.h>
void f(char str[]){
	char word[100][100]={0};
	int notword[100]={0},wordnum=0;
	for (int i=0,j=0;str[i]!='\0';i++){
        if(str[i]>=65&&str[i]<=90){
        	word[wordnum][j]=str[i];
        	j++;
		}
		else if(str[i]!=' '){
			word[wordnum][j]=str[i];
			notword[wordnum]=1;
			j++;
		}
		else{
			wordnum++;
			j=0;
		}
	}
	for (int i=wordnum;i>=0;i--){
		if(!notword[i]){
		for(int j=0;j<i;j++){
			if(!notword[j]){
			for(int k=0;;k++){
				if(word[j][k]>word[i][k]){
					char temp[200]={0};
				    strcpy(temp,word[j]);
			 	    strcpy(word[j],word[i]);
				    strcpy(word[i],temp);
				    break;
				}
				else if(word[j][k]==word[i][k]){
					continue;
			    }
				else 
				    break;
				}
		   }
		}
	    }
	}
	for (int i=0;i<wordnum;i++){
		printf("%s ",word[i]);
	}
	printf("%s\n",word[wordnum]);
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	for (int i=0;i<t;i++){
		char s[250]={0};
		gets(s);
		printf("case #%d:\n",i);
		f(s);
	}
	return 0;
}