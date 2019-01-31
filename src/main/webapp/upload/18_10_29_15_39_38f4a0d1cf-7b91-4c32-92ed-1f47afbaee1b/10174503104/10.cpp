#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <limits>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<1<<n;i++){
        printf("{");
        vector <int> ans;
        for(int j=0;j<n;j++){
            bool f=i&(1<<j);
			if(f){
                ans.push_back(j);
            }
		}
        for(int j=0;j<ans.size();j++) {
			bool f=j != ans.size() - 1;
            if (f)
                printf("%d,", ans[j]);
            else
                printf("%d", ans[j]);
        }
        printf("}");
        if(i!=(1<<n)-1)
            printf("\n");
    }
    return 0;
}

