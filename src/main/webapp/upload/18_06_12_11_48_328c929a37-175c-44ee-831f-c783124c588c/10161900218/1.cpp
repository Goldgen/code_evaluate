#include <stdlib.h>
enum Error_code
{
	success,overflow,underflow,rangeError,duplicateError,notPresent,fail
};
template<class Node_entry>
struct Node
{
	Node_entry entry;
	Node *next;
	Node();
	Node(Node_entry item,Node *add_on=NULL);
};

template<class List_entry>
class List
{
public:
	List();
	~List();
	List(const List &copy);
	void operator = (const List &copy);
	int size() const;
	bool full() const;
	bool empty() const;
	void clear();
	void traverse(void (*visit)(List_entry &));
	Error_code retrieve(int position, List_entry &x) const;
	Error_code replace(int position, const List_entry &x);
	Error_code remove(int position, List_entry &x);
	Error_code insert(int position, const List_entry &x);
protected:
	int count;
	mutable int current_position;
	mutable Node<List_entry> *current;
	Node<List_entry> *head;
	void set_position(int position) const;
};

//specialization for Node
template<class Node_entry>
Node<Node_entry>::Node()
{
	next=NULL;
}

template<class Node_entry>
Node<Node_entry>::Node(Node_entry item, Node *add_on)
{
	entry=item;
	next=add_on;
}

//specialization for List
template<class List_entry>
List<List_entry>::List()
{
    count=0;
    current_position=0;
    current=NULL;
    head=NULL;
}

template<class List_entry>
List<List_entry>::~List()
{
    Node<List_entry> *p;
	while(head)
	{
		p=head;
		head=head->next;
		delete p;
	}
}

template<class List_entry>
List<List_entry>::List(const List &copy)
{
    count=copy.count;
	Node<List_entry> *p=head,*q=copy.head;
	if(q==NULL)
		head=NULL;
	else
	{
		head=p=new Node<List_entry>(q->entry);
	}
	while(q->next)
	{
		q=q->next;
		p->next=new Node<List_entry>(q->entry);
		p=p->next;
	}
}

template<class List_entry>
void List<List_entry>::operator = (const List &copy)
{
    if(this==&copy)
        return;
    Node<List_entry> *p,*pOld=copy.head;
    while(head)
    {
        p=head;
        head=head->next;
        delete p;
    }
    count=copy.count;
    if(!pOld)
    {
        head=NULL;
        return;
    }
    head=p=new Node<List_entry>(pOld->entry);
    while(pOld->next)
    {
        pOld=pOld->next;
        p->next=new Node<List_entry>(pOld->entry);
        p=p->next;
    }
}

template<class List_entry>
int List<List_entry>::size() const
{
    return count;
}

template<class List_entry>
bool List<List_entry>::full() const
{
    Node<List_entry> *p=new Node<List_entry>;
	if (!p)
	{
		return true;
	}
	delete p;
	return false;
}

template<class List_entry>
bool List<List_entry>::empty() const
{
    return count==0;
}

template<class List_entry>
void List<List_entry>::clear()
{
    Node<List_entry> *p=NULL;
	while(head)
	{
		p=head;
		head=head->next;
		delete p;
	}
	count=0;
	current=NULL;
	current_position=0;
}

template<class List_entry>
void List<List_entry>::traverse(void (*visit)(List_entry &))
{
    Node<List_entry> *p=head;
	while(p)
	{
		visit(p->entry);
		p=p->next;
	}
}

template<class List_entry>
Error_code List<List_entry>::retrieve(int position, List_entry &x) const
{
    if(position<0 || position>=count)
    {
        return rangeError;
    }
    set_position(position);
    x=current->entry;
    return success;
}

template<class List_entry>
Error_code List<List_entry>::replace(int position, const List_entry &x)
{
    if(position<0 || position>=count)
    {
        return rangeError;
    }
    set_position(position);
    current->entry=x;
    return success;
}

template<class List_entry>
Error_code List<List_entry>::remove(int position, List_entry &x)
{
    if(position<0 || position>=count)
    {
        return rangeError;
    }
    if(position==0)
    {
        set_position(0);
        head=head->next;
        delete current;
        current=head;
    }
    else
    {
        set_position(position-1);
        Node<List_entry> *p=current->next;
        current->next=p->next;
        delete p;
    }
    count--;
    if(count==0)
    {
        current=NULL;
        current_position=0;
        head=NULL;
    }
    return success;
}

template<class List_entry>
Error_code List<List_entry>::insert(int position, const List_entry &x)
{
    if(position<0 || position>count)
    {
        return rangeError;
    }
    if(count==0)
    {
        head=current=new Node<List_entry>(x);
        current_position=0;
    }
    else
    {
        if(position==0)
        {
            set_position(0);
            head=new Node<List_entry>(x,current);
            current=head;
        }
        else
        {
            set_position(position-1);
            current->next=new Node<List_entry>(x,current->next);
        }
    }
    count++;
    return success;
}

template<class List_entry>
void List<List_entry>::set_position(int position) const
{
    if(position<current_position)
    {
        current_position=0;
        current=head;
    }
    for(;current_position!=position;current_position++)
    {
        current=current->next;
    }
}
const int maxqueue=50;

template<class Queue_entry>
class Queue
{
public:
    Queue();
    bool empty() const;
    Error_code append(const Queue_entry &x);
    Error_code serve();
    Error_code retrieve(Queue_entry &x) const;
private:
    int front,rear;
    Queue_entry entry[maxqueue];
};

//specialization
template<class Queue_entry>
Queue<Queue_entry>::Queue()
{
    front=0;
    rear=-1;
}

template<class Queue_entry>
bool Queue<Queue_entry>::empty() const
{
    return rear<front;
}

template<class Queue_entry>
Error_code Queue<Queue_entry>::append(const Queue_entry &x)
{
    if(rear==maxqueue-1)
    {
        return overflow;
    }
    entry[++rear]=x;
    return success;
}

template<class Queue_entry>
Error_code Queue<Queue_entry>::serve()
{
    if(rear<front)
    {
        return underflow;
    }
    front++;
    return success;
}

template<class Queue_entry>
Error_code Queue<Queue_entry>::retrieve(Queue_entry &x) const
{
    if(rear<front)
    {
        return underflow;
    }
    x=entry[front];
    return success;
}

#include <iostream>
using namespace std;

typedef int Vertex;
const int max_size=50;

class Digraph
{
public:
    Digraph();
    void depth_first(void (*visit)(Vertex &)) const;
    void breadth_first(void (*visit)(Vertex &)) const;
    void readFromKeyboard();
private:
    int count;
    List<Vertex> neighbors[max_size];
    void traverse(Vertex &v,bool visited[],void (*visit)(Vertex &)) const;
};

void print(Vertex &v)
{
    cout<<v<<" ";
}

int main()
{
    Digraph graph;
    graph.readFromKeyboard();
    graph.depth_first(print);
    cout<<"\n";
    graph.breadth_first(print);
    return 0;
}

Digraph::Digraph()
{
	count=0;
}

void Digraph::depth_first(void (*visit)(Vertex &)) const
{
	bool visited[max_size]={0};
	Vertex i;
	for(i=0;i<count;i++)
	{
		if (!visited[i])
		{
			traverse(i,visited,visit);
		}
	}
}

void Digraph::breadth_first(void (*visit)(Vertex &)) const
{
    Queue<Vertex> temp;
    bool visited[max_size]={0};
    Vertex v,w;
    int i,j;
    for(i=0;i<count;i++)
    
        if(!visited[i])
        {
            temp.append(i);
            while(!temp.empty())
            {
                temp.retrieve(v);
                if(!visited[v])
                {
                    visited[v]=true;
                    visit(v);
                    for(j=0;j<neighbors[v].size();j++)
                    {
                        neighbors[v].retrieve(j,w);
                        temp.append(w);
                    }
                }
                temp.serve();
            }
        }
    
}

void Digraph::readFromKeyboard()
{
	int i,n,m,position;
	Vertex v1,v2,temp;
	cin>>n>>m;
	count=n;
	for(i=0;i<m;i++)
	{
		cin>>v1>>v2;
		position=0;
		while(position<neighbors[v1].size())
		{
			neighbors[v1].retrieve(position,temp);
			if (v2<=temp)
			{
				break;
			}
			position++;
		}
		neighbors[v1].insert(position,v2);
		position=0;
		while(position<neighbors[v2].size())
		{
			neighbors[v2].retrieve(position,temp);
			if (v1<=temp)
			{
				break;
			}
			position++;
		}
		neighbors[v2].insert(position,v1);
	}
}

void Digraph::traverse(Vertex &v,bool visited[],void (*visit)(Vertex &)) const
{
	visited[v]=true;
	visit(v);
	Vertex w;
	int index;
	for(index=0;index<neighbors[v].size();index++)
	{
		neighbors[v].retrieve(index,w);
		if (!visited[w])
		{
			traverse(w,visited,visit);
		}
	}
}