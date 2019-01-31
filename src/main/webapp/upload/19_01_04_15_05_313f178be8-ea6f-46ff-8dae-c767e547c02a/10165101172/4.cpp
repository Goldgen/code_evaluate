#include <iostream>
#include <string>

//之前提交的是错的。。。补一发正确的：

using namespace std;

struct heihei {
    char c;
    int num = 0;
};

int is_in(heihei a[105],int n,char c){
    for (int j = 0;j < n;j++){
        if (a[j].c == c)
            return j;
    }
    return -1;
}

int main(void)
{
    string a;
    heihei the[105];
    int n = 0;
    getline(cin,a);
    for (int i = 0;i < a.length();i++){
        if (a[i] != ' ' && a[i] != ' ' && a[i] != '\t'){
            if (is_in(the,n,a[i]) == -1){
                the[n].c = a[i];
                the[n].num++;
                n++;
            }
            else
                the[is_in(the,n,a[i])].num++;
        }
    }
    for (int j = 0; j < n;j++){
        cout<<the[j].c<<" "<<the[j].num<<";"<<" ";
    }
    cout<<endl;
    return 0;
}
