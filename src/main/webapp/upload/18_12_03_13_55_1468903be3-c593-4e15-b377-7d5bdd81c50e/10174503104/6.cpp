/*#include <bits/stdc++.h>
using namespace std;
string dic[15];
int main() {
    int n;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s,'\n');
        dic[i]=s;
    }
    sort(dic,dic+n,greater <string>());
    for(int i=0;i<n;i++)
        if(i!=n)
        cout<<dic[i]<<endl;
        else
            cout<<dic[i];
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
map <char,int> def;
/* PreCondition:
     s is a string consisting of 0~9,A-F or a-f
	 with at most 8 characters
   PostCondition:
     return a decimal number equivalent to s
   Examples: "100"==>256 ; "a"==> 10 ; "0"==> 0
*/
long long hex2int(char s[]){
    long long ans=0,len=strlen(s),mul=1;
    for(int i=len-1;i>=0;i--){
        if(s[i]>='a'&&s[i]<='f')
            ans+=mul*(s[i]-'a'+10);
        else if(s[i]>='A'&&s[i]<='F')
            ans+=mul*(s[i]-'A'+10);
        else
            ans+=mul*(s[i]-'0');
        mul*=16;
    }
    return ans;


}
int main(){
    char in[20];
    cin>>in;
    cout<<hex2int(in)<<endl;
    return 0;
}
