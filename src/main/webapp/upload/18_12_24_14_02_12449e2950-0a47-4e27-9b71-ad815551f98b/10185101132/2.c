/*
ADD Alice 10185101900 123456@qq.com 13912345678
ADD Alice 51185101900 123456@qq.com 13912345678
ADD Bob NULL bob@163.com 15598765432
ADD Charlie 007 Charlie@126.com 02162233333
ADD Eve 7 eve@sina.com 110
ADD Alice NULL 123456@qq.com 13912345678
DELETE 123456
DELETE 10185101900
UPDATE Alice 10185101900 654321@qq.com 13912345678
UPDATE Charlie 0007 charlie@126.com 02162233333
SORT
FIND 07
FIND 10185101900

ADD Alice 10185101900 123456@qq.com 13912345678
DELETE 10185101900
PRINT

ADD Alice NULL 123456@qq.com 13912345678
PRINT


ADD ZZZZZZZZ 01234567890 123456@qq.com 13912345678
ADD nljLabsb 11234567890 123456@qq.com 13912345678
ADD ZZZZZZZZ 21234567890 123456@qq.com 13912345678
ADD DDDDDDDD 31234567890 123456@qq.com 13912345678
UPDATE DDDDDDDAAA 31234567890 123456@qq.com 13912345678
DELETE 31234567890
DELETE 01234567890
PRINT
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contacts{
    char name[10];
    char IDNumber[14];
    char emailAdress[18];
    char phoneNumber[14];
    long long lliIDNumber;
};

typedef struct Contacts cont_t;

/**********Modules**********/
int ModAddItem(cont_t *apMyContacts[], int num);
int ModDeleteItem(cont_t *apMyContacts[], int num);
int ModUpdateItem(cont_t *apMyContacts[], int num);
int ModSortItem(cont_t *apMyContacts[], int num);
int ModFindItem(cont_t *apMyContacts[], int num);
void ModPrintItem(cont_t *apMyContacts[], int num);

/**********Function Functions**********/
int searchItem(cont_t *apMyContacts[], int num, long long keyIDNumber);
long long C2I(char str[]);
void outputCont(cont_t cntct);
void FreeAll(cont_t *apMyContacts[], int num);

/**********main**********/
int main()
{
    cont_t *apMyContacts[500];
    int numCnt = 0;

    char command[8] = {0};
    while(scanf("%s", command) != EOF){
        if(strcmp(command, "ADD") == 0){
            if(ModAddItem(apMyContacts, numCnt)){
                numCnt++;
            }
        }else if(strcmp(command, "DELETE") == 0){
            if(ModDeleteItem(apMyContacts, numCnt)){
                numCnt--;
            }
        }else if(strcmp(command, "UPDATE") == 0){
            ModUpdateItem(apMyContacts, numCnt);
        }else if(strcmp(command, "SORT") == 0){
            ModSortItem(apMyContacts, numCnt);
        }else if(strcmp(command, "FIND") == 0){
            ModFindItem(apMyContacts, numCnt);
        }else if(strcmp(command, "PRINT") == 0){
            ModPrintItem(apMyContacts, numCnt);
        }
    }

    FreeAll(apMyContacts, numCnt);

    return 0;
}

/**********Modules**********/
int ModAddItem(cont_t *apMyContacts[], int num){
    //memory allocate
    apMyContacts[num] = (cont_t*)malloc(sizeof(cont_t));

    cont_t temp;

    //input
    scanf("%s", temp.name);
    scanf("%s", temp.IDNumber);
    scanf("%s", temp.emailAdress);
    scanf("%s", temp.phoneNumber);

    if(strcmp(temp.IDNumber, "NULL")){//if IDNumber is not NULL
        temp.lliIDNumber = C2I(temp.IDNumber);

        //judge whether the id number has already existed
        int alreadyExisted = searchItem(apMyContacts, num, temp.lliIDNumber);

        //add item and output
        if(alreadyExisted == -1){

            *apMyContacts[num] = temp;
            printf("Added\n");
            return 1;
        }
        //else{
            printf("Already Exists\n");
            return 0;
        //}
    }//else{//if IDNumber is NULL//add item and output
        temp.lliIDNumber = 10e12 + num;//for the convenience of sorting NULL IDNumber
        *(apMyContacts[num]) = temp;
        printf("Added\n");
        return 1;
}

int ModDeleteItem(cont_t *apMyContacts[], int num){
    char deletedIDNumber[14] = {0};
    long long lliDeletedIDNumber = 0;
    scanf("%s", deletedIDNumber);
    lliDeletedIDNumber = C2I(deletedIDNumber);

    int indexDeletedItem = searchItem(apMyContacts, num, lliDeletedIDNumber);

    if(indexDeletedItem == -1){
        printf("Not Found\n");
        return 0;
    }
    //else{
        int i;
        for(i = indexDeletedItem; i < num - 1; i++){
            *apMyContacts[i] = *apMyContacts[i + 1];
        }
//        apMyContacts[indexDeletedItem] = apMyContacts[num - 1];
        free(apMyContacts[num - 1]);
        printf("Deleted\n");
        return 1;
    //}
}

int ModUpdateItem(cont_t *apMyContacts[], int num){
    //input
    cont_t temp;
    scanf("%s", temp.name);
    scanf("%s", temp.IDNumber);
    scanf("%s", temp.emailAdress);
    scanf("%s", temp.phoneNumber);
    temp.lliIDNumber = C2I(temp.IDNumber);

    //judge whether the updated IDNumber exists
    int indexUpdatedItem = searchItem(apMyContacts, num, temp.lliIDNumber);

    //operate and output
    if(indexUpdatedItem == -1){
        printf("Not Found\n");
        return 0;
    }
    //else{
        *apMyContacts[indexUpdatedItem] = temp;
        printf("Updated\n");
        return 1;
}

int ModSortItem(cont_t *apMyContacts[], int num){
    int i, j;
    for(i = 0; i < num; i++){
        for(j = 0; j < num - 1; j++){
            if(apMyContacts[j]->lliIDNumber > apMyContacts[j + 1]->lliIDNumber){
                cont_t *swapTemp = apMyContacts[j];
                apMyContacts[j] = apMyContacts[j + 1];
                apMyContacts[j + 1] = swapTemp;
            }
        }
    }
    printf("Sorted\n");
    return 1;
}

int ModFindItem(cont_t *apMyContacts[], int num){
    long long templliIDNumber;
    scanf("%lld", &templliIDNumber);

    int indexFound = searchItem(apMyContacts, num, templliIDNumber);
    if(indexFound == -1){
        printf("Not Found\n");
        return -1;
    }
    //else
        outputCont(*apMyContacts[indexFound]);
        return indexFound;
}

void ModPrintItem(cont_t *apMyContacts[], int num){
    if(num){
        printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");

        int i;
        for(i = 0; i < num; i++){
            printf("%8s", apMyContacts[i]->name);

            if(apMyContacts[i]->lliIDNumber >= 10e12){
                printf("%12s", "NULL");
            }else{
                printf("%12lld", apMyContacts[i]->lliIDNumber);
            }

            printf("%16s", apMyContacts[i]->emailAdress);
            printf("%12s", apMyContacts[i]->phoneNumber);

            printf("\n");
        }
    }else{
        printf("Empty\n");
    }
}



/**********Function Functions**********/
int searchItem(cont_t *apMyContacts[], int num, long long keyIDNumber){
    int i;
    for(i = 0; i < num; i++){
        if(apMyContacts[i]->lliIDNumber == keyIDNumber){
            return i;
        }
    }
    return -1;
}

long long C2I(char str[]){
    const long long diff = '0';
    long long sum = 0;

    int i;
    for(i = 0; i < (int)strlen(str); i++){
        sum += str[i] - diff;
        sum *= 10;
    }

    return sum / 10;
}

void outputCont(cont_t cntct){
    printf("%s ", cntct.name);
    printf("%lld ", cntct.lliIDNumber);
    printf("%s ", cntct.emailAdress);
    printf("%s\n", cntct.phoneNumber);
}

void FreeAll(cont_t *apMyContacts[], int num){
    int i;
    for(i = 0; i < num; i++){
        free(apMyContacts[i]);
    }
}
