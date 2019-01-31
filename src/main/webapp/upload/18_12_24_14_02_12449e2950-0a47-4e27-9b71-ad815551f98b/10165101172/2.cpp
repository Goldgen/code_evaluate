#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <climits>
#include <iomanip>

using namespace std;

struct student {
    string name;
    long long student_id = LLONG_MAX;
    string email;
    string phone_number;
};

student* the_student = new student[1000];
int sign = 0;

int whether_exist(student* a,int n,long long num){
    for (int i = 0 ;i < n;i++)
        if (a[i].student_id == num)
            return i;
    return INT_MAX;
}

void add(){
    char* if_NULL = new char[12];
    cin>>the_student[sign].name>>if_NULL>>the_student[sign].email>>the_student[sign].phone_number;
    the_student[sign].student_id = LLONG_MAX;
    if (strcmp(if_NULL,"NULL") != 0){
        sscanf(if_NULL,"%lld",&the_student[sign].student_id);
        if (whether_exist(the_student, sign,the_student[sign].student_id) != INT_MAX){
            cout<<"Already Exists"<<endl;
            the_student[sign].student_id = LLONG_MAX;
            delete [] if_NULL;
            return;
        }
    }
    sign++;
    cout<<"Added"<<endl;
    delete [] if_NULL;
}

void erase(){
    long long delete_id;
    cin>>delete_id;
    if (whether_exist(the_student, sign, delete_id) != INT_MAX){
        for (int j = whether_exist(the_student, sign, delete_id);j < sign - 1;j++)
            the_student[j] = the_student[j+1];
        sign--;
        cout<<"Deleted";
    }
    else
        cout<<"Not Found";
    cout<<endl;
}

void update(){
    char* if_NULL = new char[12];
    long long update_id;
    cin>>the_student[sign].name>>if_NULL>>the_student[sign].email>>the_student[sign].phone_number;
    if (strcmp(if_NULL,"NULL") != 0)
        sscanf(if_NULL,"%lld",&the_student[sign].student_id);
    if ((update_id = whether_exist(the_student, sign, the_student[sign].student_id)) != INT_MAX){
        the_student[update_id] = the_student[sign];
        cout<<"Updated";
    }
    else
        cout<<"Not Found";
    cout<<endl;
}

void find(){
    long long search_id;
    cin>>search_id;
    if (whether_exist(the_student, sign, search_id) != INT_MAX){
        int the_sign = whether_exist(the_student, sign, search_id);
        cout<<the_student[the_sign].name<<" "<<the_student[the_sign].student_id;
        cout<<" "<<the_student[the_sign].email<<" "<<the_student[the_sign].phone_number<<endl;
    }
    else
        cout<<"Not Found"<<endl;
}

void print(){
    if (sign == 0)
        cout<<"Empty";
    else {
        printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
        for (int i = 0;i < sign;i++){
            cout<<setw(8)<<the_student[i].name<<" ";
            if (the_student[i].student_id == LLONG_MAX)
                cout<<setw(11)<<"NULL"<<" ";
            else
                cout<<setw(11)<<the_student[i].student_id<<" ";
            cout<<setw(15)<<the_student[i].email<<" ";
            cout<<setw(11)<<the_student[i].phone_number;
            cout<<endl;
        }
    }
}

bool cmp(student a,student b){
    return a.student_id < b.student_id;
}

int main(void){
    char instruction[7];
    while (scanf("%s",instruction) != EOF){
        if (strcmp(instruction,"ADD") == 0)
            add();
        else if (strcmp(instruction,"DELETE") == 0)
            erase();
        else if (strcmp(instruction,"UPDATE") == 0)
            update();
        else if (strcmp(instruction,"SORT") == 0){
            std::stable_sort(the_student,the_student+sign,cmp);
            cout<<"Sorted"<<endl;
        }
        else if (strcmp(instruction,"FIND") == 0)
            find();
        else if (strcmp(instruction,"PRINT") == 0)
            print();
        else
            break;
    }
    delete [] the_student;
    return 0;
}
