#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

struct s_str {
    string a;
    int sign;
};

bool have_unletter(string a){
    int flag = 0;
    for (int i = 0;i < a.length();i++){
        if (a[i] < 65 || (a[i] > 90 && a[i] < 97) || a[i] > 122){
            flag = 1;
            break;
        }
    }
    return (flag == 1)?true:false;
}

bool cmp(string a,string b){
    return a<b;
}

int main(void){
    string str[100],str2[100];
    s_str str1[100];
    int n,j,x,y;
    cin>>n;
    getchar();
    for (int i = 0;i < n;i++){
        x = y = 0;
        for (j = 0;;j++){
            if (j != 0)
                if (cin.get() == '\n')
                    break;
            cin>>str[j];
            if (have_unletter(str[j])){
                str1[x].a = str[j];
                str1[x].sign = j;
                x++;
            }
            else {
                str2[y] = str[j];
                y++;
            }
        }
        sort(str2,str2+y,cmp);
        x = y = 0;
        cout<<"case #"<<i<<":"<<endl;
        for (int k = 0;k < j;k++){
            if (k != 0)
                cout<<" ";
            if (k == str1[x].sign){
                cout<<str1[x].a;
                x++;
            }
            else {
                cout<<str2[y];
                y++;
            }
        }
        cout<<endl;
    }
    return 0;
}