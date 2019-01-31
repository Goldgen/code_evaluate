#include <stdio.h>
#include <string.h>

typedef struct mesg mesg;
struct mesg{
	char name[9];
	unsigned long long id;
	char mail[16];
	char tel[12];
};
int main() {
    mesg *msg[100];
    char cmd[10];
    scanf("%s",cmd);
    if(cmd=="ADD")
    		{scanf("%s %llu %s %s",msg->name,&msg->id,msg->mail,msg->tel);
			           Add(msg->name,msg->id,msg->mail,msg->tel);
    		}
    if(cmd=="DELETE")
    		{scanf("%d",&msg->id);
    		           Delete(msg->id);
    		}
    if(cmd=="UPDATE")
    		{scanf("%s %llu %s %s",msg->name,&msg->id,msg->mail,msg->tel);
    		           Update(msg->name,msg->id,msg->mail,msg->tel);
    		}
    if(cmd=="SORT")
    		Sort;
    if(cmd=="FIND")
    		scanf("%llu",&msg->id);

		}

	return 0;
}