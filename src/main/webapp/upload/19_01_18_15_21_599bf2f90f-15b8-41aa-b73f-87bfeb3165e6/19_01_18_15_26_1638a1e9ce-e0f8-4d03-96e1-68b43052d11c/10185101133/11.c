    #include<stdio.h>
int main()
{
    char a;
	scanf("%c",&a);
    if(a<=122 && a>=97){
        if(a==97||a==101||a==105||a==111||a==117)
            printf("vowel");
        else
            printf("consonant");
    }
    else{
        printf("ERROR");
	}
	return 0;
}