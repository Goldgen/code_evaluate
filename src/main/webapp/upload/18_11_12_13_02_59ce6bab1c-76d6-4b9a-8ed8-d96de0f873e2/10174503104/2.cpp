#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <vector>
using namespace std;
int main() {

    int st,ed;
    cin>>st>>ed;
    bool ok=0;
    vector <char> ans;
    for(int i=st;i<=ed;i++) {
        if (isgraph((char)i)) {
            ok=1;
            ans.push_back(i);
        }
    }
    if(ok==0)
        cout<<"NONE";
    else{
        for(int i=0;i<ans.size();i++){
            if(ans[i]<=99)
             printf("%d      %c",ans[i],(char)ans[i]);
            else
                printf("%d     %c",ans[i],(char)ans[i]);
            if(i!=ans.size()-1)
                cout<<endl;
        }
    }
    return 0;
}
