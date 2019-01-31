#include <iostream>

using namespace std;
enum Error_code{underflow, overflow, range_error1, success};
typedef int Node_entry;

struct Node {
// data members
	Node_entry entry;
	Node *next;
// constructors
	Node( );
	Node(Node_entry item, Node * add_on = NULL);
};
Node::Node( )
{
	next = NULL;
}
Node::Node(Node_entry item, Node *add_on)
{
	entry = item;
	next = add_on;
}
typedef int List_entry;
class List {
public:
	~List( );
	List( );
	List(const List &copy);
	void operator = (const List &copy);
	Node* the_head();
	int size( ) const;
	bool full( ) const;
	bool empty( ) const;
	void clear( );
	void traverse(void (*visit)(List_entry &));
	Error_code retrieve(int position, List_entry &x) const;
	Error_code replace(int position, const List_entry &x);
	Error_code remove(int position, List_entry &x);
	Error_code insert(int position, const List_entry &x);
protected:
// Data members for the linked list //implementation now follow.
	int count;
	mutable int current_position;
	mutable Node *current;
	Node *head;
// The following auxiliary function is used to //locate list positions
	Node* set_position(int position) const;
};
Node* List::the_head()
{
    return head;
}
List :: List()
{
	count = 0;
	head = NULL;
	current_position = 0;
	current = NULL;
}
Node* List :: set_position(int position) const
/* Pre: position is a valid position in the List : 0 <= position < count .
Post: The current Node pointer references the Node at position . */
{
	if (position < current_position) {
       // must start over at head of list
		current_position = 0;
		current = head;
	}

	for (; current_position != position; current_position++)
		current = current->next;
    return current;
}
Error_code List :: insert(int position, const List_entry &x)
{
	if (position < 0 || position > count)
		return range_error1;
	Node *new_node, *previous, *following;
	if (position > 0) {
		set_position(position - 1);
		previous = current;
		following = previous->next;
	}
	else following = head;
	new_node = new Node(x, following);
	if (new_node == NULL)
		return overflow;
	if (position == 0){
		head = new_node;
		//should be added
		current_position = 0;
		current = head;
	}
	else{
		previous->next = new_node;
		//should be added
		set_position(position);
	}
	count++;
	return success;
}

Error_code List :: remove(int position, List_entry &x)
{
	if (position < 0 || position >= count)
		return range_error1;
	Node *previous, *following;
	if (position > 0) {
		set_position(position - 1);
		previous = current;
		following = previous->next;
		previous->next=following->next;
	}
	else{
		following = head;
		head = head->next;
		//should be added
		current_position = 0;
		current = head;
	}
       x=following->entry;
	delete following;
    	count--;
	return success;
}

int List :: size() const
{
	return count;
}
bool List :: full() const
{
	Node *new_node;
	new_node = new Node;
	if (new_node == NULL)return true;
	else {
		delete new_node;
		return false;
	}
}
bool List :: empty() const
{
	return count==0;
}
void List :: clear()
{
	List_entry x;
	while(!empty())remove(0,x);
}
void List :: traverse(void (*visit)(List_entry &))
{
	Node *p_node=head;
	while(p_node){
		(*visit)(p_node->entry);
		p_node=p_node->next;
	}
}
Error_code List :: retrieve(int position, List_entry &x) const
{
	if (position < 0 || position >= count)
		return range_error1;
	Node *p_node;
	set_position(position);
	x=current->entry;
	return success;
}
Error_code List :: replace(int position, const List_entry &x)
{
	if (position < 0 || position >= count)
		return range_error1;
	Node *p_node;
	p_node=set_position(position);
	p_node->entry=x;
	return success;
}
List :: List(const List &copy)
{
	count = 0;
	head = NULL;
	Node *q = copy.head;
	int i=0;
	while(q){
		insert(i,q->entry);
		q=q->next;
		i++;
	}
}
void List :: operator = (const List &copy)
{
	List_entry x;
	if(this==&copy) return;
	while(!empty())remove(0,x);
	Node *q = copy.head;
	int i=0;
	while(q){
		insert(i,q->entry);
		q=q->next;
		i++;
	}
}
List :: ~List( )
{
	List_entry x;
	while(!empty())remove(0,x);
}
void update(List_entry &x){
	x*=2;
}
void print(List_entry &x){
	cout<<x<<" ";
}

const int maxqueue = 1000;
template<class Queue_entry>
class Queue{
public:
    Queue();
    bool empty()const;
    Error_code append(const Queue_entry &x);
    Error_code serve();
    Error_code retrieve(Queue_entry &x)const;
    bool full()const;
    int size()const;
    void clear();
    Error_code serve_and_retrieve(Queue_entry &x);
private:
    int count;
    int front, rear;
    Queue_entry entry[maxqueue];
};

template<class Queue_entry>
Queue<Queue_entry>::Queue(){
    count=0;
    front=0;
    rear=-1;
}
template<class Queue_entry>
bool Queue<Queue_entry>::empty()const{
    return count==0;
}
template<class Queue_entry>
Error_code Queue<Queue_entry>::append(const Queue_entry &x){
    if(count>=maxqueue) return overflow;
    count++;
    rear++;
    entry[rear]=x;
    return success;
}
template<class Queue_entry>
Error_code Queue<Queue_entry>::serve(){
    if(count<=0) return underflow;
    count--;
    front++;
    return success;
}
template<class Queue_entry>
Error_code Queue<Queue_entry>::retrieve(Queue_entry &x) const{
    if(count<=0) return underflow;
    x=entry[front];
    return success;
}
template<class Queue_entry>
bool Queue<Queue_entry>::full()const{
    return count==maxqueue;
}
template<class Queue_entry>
int Queue<Queue_entry>::size()const{
    return count;
}
template<class Queue_entry>
void Queue<Queue_entry>::clear(){
    count=0;
    front=0;
    rear=-1;
}
template<class Queue_entry>
Error_code Queue<Queue_entry>::serve_and_retrieve(Queue_entry &x){
    if(count<=0) return underflow;
    count--;
    x=entry[front];
    front++;
    return success;
}


typedef int Vertex;
template <int max_size>
class Digraph {
private:
	int count; // number of vertices, at most max_size
	List neighbors[max_size];
public:
    void Diagraph();
    void depth_first(void (*visit)(Vertex &)) ;
    void breadth_first(void (*visit)(Vertex &)) ;
    void traverse(Vertex& v, bool visited[], void (*visit)(Vertex &)) ;
    void readFromKeyboard();
};
template <int max_size>
void Digraph<max_size>::Diagraph(){
    count=0;
    int i = 0;
    for(;i<max_size;i++)
        neighbors[i].clear();
}
template <int max_size>
void Digraph<max_size> :: readFromKeyboard(){
    int edges;
    cin>>count>>edges;
    for(int i = 0;i<edges;i++)
    {
        int a, b;
        cin>>a>>b;
        neighbors[a].insert(1,b);
    }
}
template <int max_size>
void Digraph<max_size> :: depth_first(void (*visit)(Vertex &))
/* Post: The function *visit has been performed at each vertex of the Digraph in depth-first order.
Uses: Method traverse to produce the recursive depth-first order. */
{
	bool visited[max_size];
	Vertex v;
	for (v=0;v<count;v++)  visited[v] = false;
	for (v=0;v<count;v++)  if (!visited[v]) traverse(v, visited, visit);
}
template <int max_size>
void Digraph<max_size> :: traverse(Vertex &v, bool visited[],void (*visit)(Vertex &))
/* Pre: v is a vertex of the Digraph.
Post: The depth-first traversal, using function *visit, has been completed for v and
for all vertices that can be reached from v.
Uses: traverse recursively. */
{
	Vertex w;
	visited[v] = true;
	(*visit)(v);
    Node* p = neighbors[v].the_head();
	for (;p!=NULL;p=p->next){
        w = p->entry;
		if (!visited[w]) traverse(w, visited, visit);
	}
}
template <int max_size>
void Digraph<max_size> :: breadth_first(void (*visit)(Vertex &))
/* Post: The function *visit has been performed at each vertex of the Digraph in
breadth-first order.
Uses: Methods of class Queue. */
{
	Queue<Vertex> q;
	bool visited[max_size];
	Vertex v, w, x;
	for (v=0;v<count;v++) visited[v] = false;
	for (v=0;v<count;v++)
		if (!visited[v]) {
			q.append(v);
			while (!q.empty( )){
				q.retrieve(w);
				if (!visited[w]) {
					visited[w] = true;
					(*visit)(w);
					Node* p1;
					p1 = neighbors[w].the_head();
					for (;p1!=NULL;p1=p1->next) q.append(x);
				}
				q.serve( );
			}
		}
}
int main()
{
    Digraph<1000> graph;
    graph.readFromKeyboard();
    graph.depth_first(print);
    cout<<endl;
    graph.breadth_first(print);

    return 0;
}

