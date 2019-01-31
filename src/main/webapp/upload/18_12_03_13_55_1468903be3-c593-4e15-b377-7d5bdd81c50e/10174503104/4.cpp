#include <bits/stdc++.h>
using namespace std;
int mat[55][55],ans[55][55];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for (int j = 0; j < m; j++)
            ans[j][i]=mat[i][j];
    }
    for(int i=0;i<m;i++) {
        for (int j = 0; j < n; j++) {
            printf("%d",ans[i][j]);
            if(j==n-1)
                printf("\n");
            else
                printf(" ");
        }
    }
    return 0;
}
