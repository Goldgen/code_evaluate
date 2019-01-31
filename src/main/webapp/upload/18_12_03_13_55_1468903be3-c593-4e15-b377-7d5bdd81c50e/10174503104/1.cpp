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
int main(){
    def['a']=2,def['b']=2,def['c']=2;
    def['d']=3,def['e']=3,def['f']=3;
    def['g']=def['h']=def['i']=4;
    def['j']=def['k']=def['l']=5;
    def['m']=def['n']=def['o']=6;
    def['p']=def['q']=def['r']=def['s']=7;
    def['t']=def['u']=def['v']=8;
    def['w']=def['x']=def['y']=def['z']=9;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        cout<<def[str[i]];
    }
    return 0;
}
