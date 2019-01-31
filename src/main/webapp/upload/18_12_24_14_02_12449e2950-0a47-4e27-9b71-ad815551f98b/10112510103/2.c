 /*
 * 102: 模拟通讯录管理程序
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define AUTO_ID_START 1e12

const int ERROR = -1;

// 用户记录
typedef struct {
    long long id;
    char name[9];
    char email[16];
    char phone[12];
} Record;

// 通讯录
typedef struct {
    Record* records;
    int size;
    int capacity;
} DB;

DB recordsDB = { NULL, 0, 0 };

// 初始化通讯录
void init_DB(int capacity) {
    recordsDB.records = (Record*)malloc(sizeof(Record) * capacity);
    recordsDB.size = 0;
    recordsDB.capacity = capacity;
}

// 内存清理
void destroy_DB() {
    free(recordsDB.records);

    recordsDB.records=NULL;
}

// 查找用户
int findIndex(long long id) {
    if(id >= AUTO_ID_START){
        return ERROR;
    }
    int i = 0;
    for (; i < recordsDB.size; i++) {
        if (recordsDB.records[i].id == id)
            return i;
    }
    return ERROR;
}

// 查找用户
Record* findRecord(long long id) {
    int index = findIndex(id);
    return index == ERROR ? NULL : &recordsDB.records[index];
}

// 添加用户
int add(Record r) {
    // already exists
    if (findIndex(r.id) >= 0)
        return ERROR;

    if (recordsDB.size >= recordsDB.capacity) {
        recordsDB.records = 
            (Record*)realloc(recordsDB.records, sizeof(Record) * (recordsDB.capacity + 10));
        recordsDB.capacity += 10;
    }

    int n = recordsDB.size;
    memcpy(&recordsDB.records[n], &r, sizeof(Record));

    return recordsDB.size++;
}

// 删除用户
int del(long long id) {
    int i,index = -1;
    if ((index = findIndex(id)) >= 0) {
        for (i = index + 1; i < recordsDB.size; i++) {
            memcpy(&recordsDB.records[i-1], &recordsDB.records[i], sizeof(Record));
        }
        return recordsDB.size--;
    }
    return ERROR;
}


static long long record_cmp(const Record* r1, const Record* r2) {
    return r1->id - r2->id;
}

// 按学号排序
void sort() {
    int i, j;
    Record t;

    for (i = 0; i < recordsDB.size - 1; i++) {
        int min_pos = i;
        for (j = i + 1; j < recordsDB.size; j++) {
            if (record_cmp(&recordsDB.records[min_pos], &recordsDB.records[j]) > 0)
                min_pos = j;
        }

        memcpy(&t, &recordsDB.records[min_pos], sizeof(Record));
        memcpy(&recordsDB.records[min_pos], &recordsDB.records[i], sizeof(Record));
        memcpy(&recordsDB.records[i], &t, sizeof(Record));
    }
}

// 打印
void print() {
    int i;
    if (recordsDB.size == 0) {
        puts("Empty");
    } else {
        puts("    NAME  STUDENT_ID           EMAIL   TELEPHONE");
        for ( i = 0; i < recordsDB.size; i++) {
            Record *record = &recordsDB.records[i];
            if(record->id < AUTO_ID_START) {
                printf("%8s %11lld %15s %11s\n",
                    record->name, record->id, record->email, record->phone);
            } else {
                printf("%8s %11s %15s %11s\n",record->name, "NULL", record->email, record->phone);
            }
        }
    }

}

void inputRecord(Record* record) {
    static long long autoId = AUTO_ID_START;
    char s[12];
    scanf("%s",record->name);
    record->id = ++autoId;
    scanf("%s",s);
    sscanf(s, "%lld",&record->id);
    scanf("%s",record->email);
    scanf("%s",record->phone);
}

void handleAdd() {
    Record record;
    inputRecord(&record);
    int result = add(record);
    puts(result == ERROR ? "Already Exists" : "Added");
}

void handleDelete() {
    long long id;
    scanf("%lld",&id);
    int result = del(id);
    puts(result == ERROR ? "Not Found" : "Deleted");
}

void handleUpdate() {
    Record record;
    inputRecord(&record);
    Record* oldRecord = findRecord(record.id);
    if(oldRecord == NULL) {
        puts("Not Found");
    } else {
        memcpy(oldRecord, &record, sizeof(Record));
        puts("Updated");
    }
}

void handleSort() {
    sort();
    puts("Sorted");
}

void handleFind() {
    long long id;
    scanf("%lld",&id);
    Record *record = findRecord(id);
    if(record == NULL) {
        puts("Not Found");
    } else if(record->id < AUTO_ID_START) {
        printf("%s %lld %s %s\n", record->name, record->id, record->email, record->phone);
    } else {
        printf("%s NULL %s %s\n", record->name, record->email, record->phone);
    }
}

void handlePrint() {
    print();
}


int main(void) {
    init_DB(4);
    char cmd[7];
    while(scanf("%s",cmd) != EOF) {
        if(strcmp(cmd, "ADD") == 0) {
            handleAdd();
        } else if(strcmp(cmd, "DELETE") == 0) {
            handleDelete();
        } else if(strcmp(cmd, "UPDATE") == 0) {
            handleUpdate();
        } else if(strcmp(cmd, "SORT") == 0) {
            handleSort();
        } else if(strcmp(cmd, "FIND") == 0) {
            handleFind();
        } else if(strcmp(cmd, "PRINT") == 0) {
            handlePrint();
        }
    }
    return 0;
}
