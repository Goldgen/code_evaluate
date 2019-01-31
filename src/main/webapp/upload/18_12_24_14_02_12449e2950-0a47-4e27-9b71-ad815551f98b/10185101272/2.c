#include<stdio.h>
#include<stdlib.h>
#include<string.h>
const long long int MAX=0x7ffffffffff;
typedef struct stu{
	long long int id;
	char eml[20],name[20],num[20];
	struct stu *font,*next;
}stu;

stu* _add(){
	stu *p;
	char str[10];
	p=malloc(sizeof(stu));
	p->id=-1;
	scanf("%s",p->name);
	scanf("%lld",&(p->id));
	if(p->id < 0){
		scanf("%s",str);
		p->id=MAX;
	}
	scanf("%s %s",p->eml,p->num);
    p->font=NULL;
    p->next=NULL;
	return p;
}//添加元素并返回指针
stu* _find(const long long int id,const stu* head){
	stu *p;
	p=head;
	while(p!=NULL&&(p->id)!=id){
		p=p->next;
	}
	return p;
}//查询元素位置并返回指针
stu* _addf(const stu* head,stu** tail){
	stu *p,*pt;
	p=_add();
	pt=_find(p->id,head);
	if(pt!=NULL&&p->id!=MAX){
		printf("Already Exists\n");
		free(p);
		p=*tail;
	}
	else{
		printf("Added\n");
		p->font=*tail;
		p->next=NULL;
		if(*tail)(*tail)->next=p;
	}
	return p;
}//添加操作
stu* _deletef(const stu*head,stu**tail){
	long long int id;
	scanf("%lld",&id);
	stu *p,*pt;
	pt=head;
	p=_find(id,head);
	if(p==NULL)
		printf("Not Found\n");
	else{
		printf("Deleted\n");
		if(p->font==NULL&&p->next==NULL) pt=NULL,*tail=NULL;
		else{
            if(p->font==NULL) pt=p->next,p->next->font=NULL;
            else if(p->next==NULL) *tail=p->font,p->font->next=NULL;
            else p->font->next=p->next,p->next->font=p->font;
		}
		free(p);
	}
	return pt;
}//删除操作
stu* _updatef(const stu*head,stu **tail){
	stu *p,*pt,*x;
	p=_add();
	x=head;

	pt=_find(p->id,head);
	if(pt==NULL){
		printf("Not Found\n");
		free(p);
	}
	else{
		printf("Updated\n");
		if(pt->font)pt->font->next=p,p->font=pt->font;
		else x=p,p->font=NULL;
		if(pt->next)pt->next->font=p,p->next=pt->next;
		else p->next=NULL,*tail=p;
		free(pt);
	}
	return x;
}//更新操作
void _clean(const stu*head){
	stu *p,*pt;
	p=head;
	while(p!=NULL){
		pt=p->next;
		free(p);
		p=pt;
	}
}//释放内存
void _swap(stu *a,stu *b){
    char name[20],eml[20],num[20];
    long long int id;
    strcpy(name,a->name);
    strcpy(eml,a->eml);
    strcpy(num,a->num);
    id=a->id;

    strcpy(a->name,b->name);
    strcpy(a->eml,b->eml);
    strcpy(a->num,b->num);
    a->id=b->id;

    strcpy(b->name,name);
    strcpy(b->eml,eml);
    strcpy(b->num,num);
    b->id=id;
}//交换元素值
stu* _sortf(const stu* head,const stu* tail){
	stu *ed,*p,*pt;
	ed=tail;
	pt=head;
	while(ed!=pt){
        p=pt;
        while(p!=ed){
           if(p->id > p->next->id){
                _swap(p,p->next);
           }
          p=p->next;
        }
       ed=ed->font;

	}
	printf("Sorted\n");
	return pt;
}//排序操作，返回头指针
void _findf(const stu *head){
	stu *p;
	long long int id;
	scanf("%lld",&id);
	p=_find(id,head);
	if(p) printf("%s %lld %s %s\n",p->name,p->id,p->eml,p->num);
	else printf("Not Found\n");
}//查找操作
void _printf(const stu*head){
	stu *p;
	p=head;
	if(head==NULL) printf("Empty\n");
	else{
		printf("    NAME  STUDENT_ID           EMAIL   TELEPHONE\n");
		while(p){
			printf("%8s",p->name);
			if(p->id==MAX) printf("        NULL");
			else printf("%12lld",p->id);
			printf("%16s%12s\n",p->eml,p->num);
			p=p->next;
		}
	}
}//输出操作
int main(){
	stu *head=NULL,*tail=NULL;
	char cmd[10];
	while(~scanf("%s",cmd)){
		switch (cmd[0]){
			case 'A':
				tail=_addf(head,&tail);
				if(head==NULL) head=tail;
				break;
			case 'D':
				head=_deletef(head,&tail);
				break;
			case 'U':
				head=_updatef(head,&tail);
				break;
			case 'S':
				head=_sortf(head,tail);
				break;
			case 'F':
				_findf(head);
				break;
			case 'P':
				_printf(head);
				break;
            default :break;
		}
	}
	_clean(head);
	return 0;
}

