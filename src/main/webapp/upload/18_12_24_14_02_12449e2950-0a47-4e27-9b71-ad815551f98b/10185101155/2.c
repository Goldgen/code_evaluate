#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct
{
    char name[9];
    long long studentID;
    char emailname[16];
    char phonenumber[12];
}student;
student *search(long long stuID,student *b)
{
    for(int i=0;i<100;b++,i++)
    {
        if(stuID==(*b).studentID)
                return b;
    }
    return NULL;
}
bool add(student *studentINPUT,student ourstudent[])
{
    static int i=0;
    if(search((*studentINPUT).studentID,ourstudent)!=NULL&&(*studentINPUT).studentID<10000000000000)
        return false;
    else
    {
     ourstudent[i] = *studentINPUT;
     i++;
    }
    return true;
}
bool Delete(long long a,student ourstudent[])
{
    student *del;
    if(search(a,ourstudent)!=NULL)
    {
        del = search(a,ourstudent);
        strcpy((*del).name,"0");
         (*del).studentID = -2;
         strcpy((*del).emailname,"0");
         strcpy((*del).phonenumber,"0");
         return true;
    }
    return false;
}
bool update(student *kfc,student ourdtudent[])
{
    student *haha;
    if(search((*kfc).studentID,ourdtudent)!=NULL)
    {
        haha = search((*kfc).studentID,ourdtudent);
        *haha = *kfc;
        return true;
    }
    return false;
}
void sortya(student ourstudent[])
{
    student temp;
    for(int x=0;x<100;x++)
        for(int y=0;y<x;y++)
          if(ourstudent[x].studentID<ourstudent[y].studentID)
		  { if(ourstudent[x].studentID!=-2&&ourstudent[y].studentID!=-2)
           {
            temp = ourstudent[x];
            ourstudent[x] = ourstudent[y];
            ourstudent[y] = temp;
           }
		  }
}
bool check_strcut(student ourstudent[])//检查数组元素是否存在
{
    for(int i=0;i<100;i++)
    {
        if(ourstudent[i].studentID!=-2)
            return true;
    }
    return false;
}
int main()
{
     student mystudent[100];//用来存储所有的学生信息
     for(int i =0;i<100;i++)
     {
         strcpy(mystudent[i].name,"0");
         mystudent[i].studentID = -2;
         strcpy(mystudent[i].emailname,"0");
         strcpy(mystudent[i].phonenumber,"0");
     }
     student *pos,*des;
     pos = mystudent;
     char command_system[10];//系统输入命令
     student current_student;
     des = &current_student;
     char contempor[12];//用来临时读入学号
	long long t = 10000000000000;
     while(scanf("%s",command_system)!=EOF)
     {
         if(strcmp(command_system,"ADD")==0)
         {
             scanf("%s %s %s %s",current_student.name,contempor,current_student.emailname,current_student.phonenumber);
             if(strcmp(contempor,"NULL")!=0)
                current_student.studentID = atoll(contempor);
             else
             {
                    current_student.studentID = t;
                    t++;
             }
              if(add(des,pos)==true)
                printf("Added\n");
              else
                printf("Already Exists\n");
         }
         else if(strcmp(command_system,"FIND")==0)
         {
             long long x;//x为需查找学号
             student *foundyou;
             scanf("%s",contempor);
                x = atoll(contempor);
            if(search(x,mystudent)!=NULL)
            {
                foundyou = search(x,mystudent);
                printf("%s %lld %s %s\n",(*foundyou).name,(*foundyou).studentID,(*foundyou).emailname,(*foundyou).phonenumber);
            }
            else
                printf("Not Found\n");
         }
                else if(strcmp(command_system,"DELETE")==0)
         {
             long long x;//x为需查找学号
             scanf("%s",contempor);
                x = atoll(contempor);
            if(search(x,mystudent)!=NULL)
            {
                Delete(x,mystudent);
                printf("Deleted\n");
            }
            else
                printf("Not Found\n");
           }
           else if(strcmp(command_system,"UPDATE")==0)
           {
               scanf("%s %s %s %s",current_student.name,contempor,current_student.emailname,current_student.phonenumber);
                current_student.studentID = atoll(contempor);
                if(search(current_student.studentID,mystudent)!=NULL)
            {
                update(des,mystudent);
                printf("Updated\n");
            }
            else
                printf("Not Found\n");
           }
           else if(strcmp(command_system,"SORT")==0)
           {
                sortya(mystudent);
                printf("Sorted\n");
           }
           else if(strcmp(command_system,"PRINT")==0)
           {
               if(check_strcut(mystudent)==false)
                printf("Empty\n");
               else
               {
                   printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
                   for(int i=0;i<100;i++)
                   {
                       if(mystudent[i].studentID!=-2&&mystudent[i].studentID<10000000000000)
                            printf("%8s %11lld %15s %11s\n",mystudent[i].name,mystudent[i].studentID,mystudent[i].emailname,mystudent[i].phonenumber);
                       else if(mystudent[i].studentID>=10000000000000)
                            printf("%8s        NULL %15s %11s\n",mystudent[i].name,mystudent[i].emailname,mystudent[i].phonenumber);
                   }
               }
           }
     }
    return 0;
}