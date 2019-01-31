#include <iostream>
#include <queue>
#include <string>
using namespace std;
enum Error_code{underflow,overflow,rangeerror,success};
const int key_size=5;
const int max_chars=28;
template <class List_entry>
struct Node{
    List_entry entry;
    Node<List_entry> *next;
    Node();
    Node(List_entry item,Node *link_next=NULL);
};
template <class List_entry>
Node<List_entry>::Node()
{
    next=NULL;
}
template <class List_entry>
Node<List_entry>::Node(List_entry item,Node *link_next)
{
    entry=item;
    next=link_next;
}
template <class List_entry>
class List{
public:
    List();
    int size() const;
    bool empty() const;
    Error_code insert(int position,const List_entry &x);
    Error_code remove(int position,List_entry &x);
    Error_code retrieve(int position,List_entry &x) const;
    void traverse(void(*visit)(List_entry &));
    void insertion_sort();
private:
    int count;
    mutable int current_position;
    mutable Node<List_entry> *current;
    Node<List_entry> *head;
    void set_position(int position) const;
};
template <class List_entry>
List<List_entry>::List()
{
    count=0;
    head=NULL;
    current_position=0;
    current=NULL;
}
template <class List_entry>
void List<List_entry>::insertion_sort()
{
    Node<List_entry> *first_unsorted,*last_sorted,*current,*trailing;
    if(head){
        last_sorted=head;
        while(last_sorted->next!=NULL){
            first_unsorted=last_sorted->next;
            if(first_unsorted->entry<head->entry){
                last_sorted->next=first_unsorted->next;
                first_unsorted->next=head;
                head=first_unsorted;
            }
            else{
                trailing=head;
                current=trailing->next;
                while(first_unsorted->entry>current->entry){
                    trailing=current;
                    current=trailing->next;
                }
                if(first_unsorted==current)
                    last_sorted=first_unsorted;
                else{
                    last_sorted->next=first_unsorted->next;
                    first_unsorted->next=current;
                    trailing->next=first_unsorted;
                }
            }
        }
    }
}
template <class List_entry>
Error_code List<List_entry>::retrieve(int position,List_entry &x) const
{
    if(position<0 ||position>=count)
        return rangeerror;
    set_position(position);
    x=current->entry;
    return success;
}
template <class List_entry>
void List<List_entry>::set_position(int position) const
{
    if(position<current_position){
        current_position=0;
        current=head;
    }
    for(;current_position<position;current_position++)
        current=current->next;
}
template <class List_entry>
Error_code List<List_entry>::insert(int position,const List_entry &x)
{
    Node<List_entry> *previous=NULL,*following=NULL,*new_Node=NULL;
    if(position<0 ||position>count)
        return rangeerror;
    if(position>0){
        set_position(position-1);
        previous=current;
        following=previous->next;
    }
    else
        following=head;
    new_Node=new Node<List_entry>(x,following);
    if(new_Node==NULL)
        return overflow;
    if(position>0){
        previous->next=new_Node;
        set_position(position);
    }
    else{
        head=new_Node;
        current_position=0;
        current=head;
    }
    count++;
    return success;
}
template <class List_entry>
Error_code List<List_entry>::remove(int position,List_entry &x)
{
    Node<List_entry> *previous,*following;
    if(position<0 ||position>=count)
        return rangeerror;
    if(position>0){
        set_position(position-1);
        previous=current;
        following=previous->next;
        previous->next=following->next;
    }
    else{
        following=head;
        head=head->next;
        current_position=0;
        current=head;
    }
    x=following->entry;
    delete following;
    count--;
    return success;
}
template <class List_entry>
int List<List_entry>::size() const
{
    return count;
}
template <class List_entry>
bool List<List_entry>::empty() const
{
    if(count<=0)
        return true;
    return false;
}
template <class List_entry>
void List<List_entry>::traverse(void(*visit)(List_entry &))
{
    Node<List_entry> *p=head;
    while(p){
        (*visit)(p->entry);
        p=p->next;
    }
}
template <class List_entry>
void print1(List_entry &x)
{
    cout<<x<<endl;
}

typedef int Vertex;
const int max_size=30;
template<int max_size>
class Diagraph{
public:
    Diagraph();
    void read_from_keybord();  //initialization
    void depth_first(void(*visit)(Vertex&)) const;
    void breadth_first(void(*visit)(Vertex&)) const;
private:
    int count;
    List<Vertex> neighbors[max_size];
    void traverse(Vertex &v,bool visited[],void(*visit)(Vertex&)) const;
};
template<int max_size>
Diagraph<max_size>::Diagraph()
{
    count=0;
}
template<int max_size>
void Diagraph<max_size>::read_from_keybord()
{
    int n,m;
    Vertex v1,v2;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>v1>>v2;
        neighbors[v1].insert(neighbors[v1].size(),v2);
        neighbors[v2].insert(neighbors[v2].size(),v1);
    }
    count=n;
    for(int i=0;i<n;i++)
        neighbors[i].insertion_sort();
}
template<int max_size>
void Diagraph<max_size>::depth_first(void(*visit)(Vertex&)) const
{
    bool visited[max_size];
    for(int i=0;i<count;i++)
        visited[i]=false;
    for(int i=0;i<count;i++)
        if(!visited[i])
            traverse(i,visited,visit);
}
template<int max_size>
void Diagraph<max_size>::traverse(Vertex &v,bool visited[],void(*visit)(Vertex&)) const
{
    Vertex w;
    visited[v]=true;
    (*visit)(v);
    for(int i=0;i<neighbors[v].size();i++){
        neighbors[v].retrieve(i,w);
        if(!visited[w])
            traverse(w,visited,visit);
    }
}
template<int max_size>
void Diagraph<max_size>::breadth_first(void(*visit)(Vertex&)) const
{
    queue<Vertex> q;
    bool visited[max_size];
    Vertex w,x;
    for(int i=0;i<count;i++)
        visited[i]=false;
    for(int i=0;i<count;i++)
        if(!visited[i]){
            q.push(i);
            while(!q.empty()){
                w=q.front();
                if(!visited[w]){
                    visited[w]=true;
                    (*visit)(w);
                    for(int i=0;i<neighbors[w].size();i++){
                        neighbors[w].retrieve(i,x);
                        q.push(x);
                    }
                }
                q.pop();
            }
        }
}
void print2(Vertex &v)
{
    cout<<v<<" ";
}
int main()
{
    Diagraph<max_size> mydia;
    mydia.read_from_keybord();
    mydia.depth_first(print2);
    cout<<endl;
    mydia.breadth_first(print2);
    return 0;
}
