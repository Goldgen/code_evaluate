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
int main(){
    string str,ans;
    int maxlen=0;
    while(cin>>str){
        if(str.size()>maxlen){
            maxlen=str.size();
            ans=str;
        }
    }
    cout<<ans<<endl;
    return 0;
}
