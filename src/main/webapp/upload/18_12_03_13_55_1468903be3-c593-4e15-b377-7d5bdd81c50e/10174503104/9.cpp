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
    int y;
    string str,tar;
    getline(cin,str);
    cin>>tar;
    int cnt=0,pos=str.find(tar,0);
    if(pos==string::npos){
        y=-1;
    }
    else{
        y=pos;
        cnt++;
        pos=pos+1;
        while(1){
            pos=str.find(tar,pos);
            if(pos==string::npos)
                break;
            cnt++;
            pos+=1;
        }
    }
    printf("%s: %d time(s), first at %d\n",tar.c_str(),cnt,y);
    return 0;
}
