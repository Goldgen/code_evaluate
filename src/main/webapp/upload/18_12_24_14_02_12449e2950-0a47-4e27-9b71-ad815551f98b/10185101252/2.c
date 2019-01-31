#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Contact{
    char name[10];
    long long stuID;
    char email[20];
    char tel[15];
} Peo;
Peo **database;
int len = 0;

Peo *ADD(){
    char stuIDStr[20];
    Peo *peo = (Peo*)malloc(sizeof(Peo));

    scanf("%s", peo->name);
    scanf("%s", stuIDStr);
    scanf("%s", peo->email);
    scanf("%s", peo->tel);
    if(0 == strcmp(stuIDStr, "NULL"))
        peo->stuID = 10000000000000LL;
    else
        sscanf(stuIDStr, "%lld", &peo->stuID);

    if(peo->stuID != 10000000000000LL){
        for(int i = 0; i < len; i++)
            if(database[i]->stuID == peo->stuID){
                printf("Already Exists\n");
                free(peo);
                return NULL;
            }
    }

    database[len++] = peo;

    printf("Added\n");
    return peo;
}

void DELETE(){
    long long stuID;
    scanf("%lld", &stuID);
    int isTrue = 0;
    for(int i = 0; i < len; i++){
        if(database[i]->stuID == stuID){
            free(database[i]);
            for(int j = i; j < len-1; j++)
                database[j] = database[j+1];
            len--;
            isTrue = 1;
            break;
        }
    }

    if(1 == isTrue)
        printf("Deleted\n");
    else
        printf("Not Found\n");

}

Peo *UPDATE(){

    int isTrue = 0;

    Peo *peo = (Peo *)malloc(sizeof(Peo));
    scanf("%s", peo->name);
    scanf("%lld", &peo->stuID);
    scanf("%s", peo->email);
    scanf("%s", peo->tel);

    for(int i = 0; i < len; i++)
        if(database[i]->stuID == peo->stuID){
            free(database[i]);
            database[i] = peo;
            isTrue = 1;
        }
    if(isTrue)
        printf("Updated\n");
    else
        printf("Not Found\n");

    return peo;
}

void SORT(){

    for(int i = 0; i < len; i++)
        for(int j = 0; j < len - i - 1; j++)
            if(database[j]->stuID > database[j+1]->stuID){
                database[j] = (Peo*)((int)database[j]^(int)database[j+1]);
                database[j+1] = (Peo*)((int)database[j]^(int)database[j+1]);
                database[j] = (Peo*)((int)database[j]^(int)database[j+1]);
            }
    printf("Sorted\n");
}

Peo* FIND(){

    Peo* peo = NULL;
    long long stuID;
    scanf("%lld", &stuID);
    for(int i = 0; i < len; i++)
        if(stuID == database[i]->stuID){
            peo = database[i];
            break;
        }
    if(peo)
        printf("%s %lld %s %s\n",
               peo->name, peo->stuID, peo->email, peo->tel);
    else
        printf("Not Found\n");
    return peo;
}

void PRINT(){
    if(0 == len)
        printf("Empty");
    else{
        printf("%8s %11s %15s %11s\n",
            "NAME", "STUDENT_ID", "EMAIL", "TELEPHONE");
    }
    for(int i = 0; i < len; i++){
        if(10000000000000LL == database[i]->stuID)
            printf("%8s %11s %15s %11s\n",
                    database[i]->name, "NULL", database[i]->email, database[i]->tel);
        else
            printf("%8s %11lld %15s %11s\n",
                    database[i]->name, database[i]->stuID, database[i]->email, database[i]->tel);
    }

}

int main(void){

    database = (Peo **)malloc(sizeof(Peo *) * 100005);
    memset(database, 0, sizeof(Peo *) * 100005);

    char command[10];
    while(1 == scanf("%s", command)){
        if(0 == strcmp(command, "ADD")){
            ADD();
        }else if(0 == strcmp(command, "DELETE")){
            DELETE();
        }else if(0 == strcmp(command, "UPDATE")){
            UPDATE();
        }else if(0 == strcmp(command, "SORT")){
            SORT();
        }else if(0 == strcmp(command, "FIND")){
            FIND();
        }else if(0 == strcmp(command, "PRINT")){
            PRINT();
        }
    }


    return 0;
}
