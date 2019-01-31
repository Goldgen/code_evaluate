typedef struct bedge {
    int vertex;
    struct bedge* pre;
    struct bedge* next;
}BEdge;

template <class T>
class Queue {
private:
    T *arr;
    int front;
    int rear;
    int size;
    int length;
public:
    Queue();
    ~Queue();
    
    void Push(T value);
    T Pop();
    int Size();
    int Length();
    bool Empty();
    bool Full();
};


class BFS {
private:
    BEdge *front;
    BEdge *rear;
    
public:
    BFS();
    ~BFS();
    
    void Test_M();
    void Test_L();
    
    void createGraph_M(int (*edge)[VERTEXNUM], int start, int end);
    void displayGraph_M(int (*edge)[VERTEXNUM]);
    void BFT_M(int (*edge)[VERTEXNUM], int *vertexStatusArr);
    void BFTCore_M(int (*edge)[VERTEXNUM], int i, int *vertexStatusArr);
    
    void createGraph_L(BEdge** edge, int start, int end);
    void displayGraph_L(BEdge** edge);
    void delGraph_L(BEdge** edge);
    void BFT_L(BEdge** edge, int* vertextStatusArr);
    void BFTCore_L(BEdge** edge, int i, int* vertexStatusArr);
};
template <class T>
Queue<T>::Queue() {
    size = 10;
    arr = new T[size];
    front = rear = length = 0;
}

template <class T>
Queue<T>::~Queue() {
    delete [] arr;
}

template <class T>
void Queue<T>::Push(T value) {
    // 大于原数组长度，创建新数组，赋值给新数组
    if (length == size) {
        int nsize = size * 2;
        int * narr = new T(nsize);
        int i = 0;
        for (; i < length; i++) {
            narr[(front + i) % nsize] = arr[(front + i) % size];
        }
        rear = (front + i) % nsize;
        arr = narr;
        size = nsize;
    }
    arr[rear] = value;
    rear = (rear + 1) % size;
    ++length;
}

template <class T>
T Queue<T>::Pop() {
    T temp = arr[front];
    front = (front + 1) % size; // 原来的内存块没有做到真正的删除
    --length;
    return temp;
}

template <class T>
int Queue<T>::Size() {
    return size;
}

template <class T>
int Queue<T>::Length() {
    return length;
}

template <class T>
bool Queue<T>::Empty() {
    return length == 0;
}

template <class T>
bool Queue<T>::Full() {
    return length == size;
}


BFS::BFS() {
    
    
}

BFS::~BFS() {
    
    
}

void BFS::createGraph_M(int (*edge)[VERTEXNUM], int start, int end) {
    edge[start][end] = 1;
}

void BFS::displayGraph_M(int (*edge)[VERTEXNUM]) {
    for (int i = 0; i < VERTEXNUM; i++) {
        for (int j = 0; j < VERTEXNUM; j++) {
            std::cout << edge[i][j];
        }
        std::cout << std::endl;
    }
}

void BFS::BFT_M(int (*edge)[VERTEXNUM], int *vertexStatusArr) {
    for (int i = 0; i < VERTEXNUM; i++) {
        BFTCore_M(edge, i, vertexStatusArr);
    }
    std::cout << std::endl;
}

void BFS::BFTCore_M(int (*edge)[VERTEXNUM], int i, int *vertexStatusArr) {
    Queue<int> queue;
    queue.Push(i);
    
    while (!queue.Empty()) {
        int t = queue.Pop();
        if (vertexStatusArr[t] == 0) {
            std::cout << t << "->";
            vertexStatusArr[t] = 1;
            for (int i = 0; i < VERTEXNUM; i++) {
                if (edge[t][i] == 1) {
                    queue.Push(i);
                }
            }
        }
    }
}

void BFS::Test_M() {
    std::cout << "--------------邻接矩阵表示-----------------" << std::endl;
    
    //动态创建存放边的二维数组
    int (*edge)[VERTEXNUM] = (int (*)[VERTEXNUM])malloc(sizeof(int) * VERTEXNUM * VERTEXNUM);
    
    for (int i = 0; i < VERTEXNUM; i++) {
        for (int j = 0; j < VERTEXNUM; j++) {
            edge[i][j] = 0;
        }
    }
    
    // 存放顶点的遍历状态；0:未遍历，1:已遍历
    int *vertexStatusArr = (int*)malloc(sizeof(int)*VERTEXNUM*VERTEXNUM);
    for (int i = 0; i < VERTEXNUM; i++) {
        vertexStatusArr[i] = 0;
    }
    
    std::cout << "after init.." << std::endl;
    displayGraph_M(edge);
    
    //创建图
    createGraph_M(edge, 0, 3);
    createGraph_M(edge, 0, 4);
    createGraph_M(edge, 3, 1);
    createGraph_M(edge, 3, 2);
    createGraph_M(edge, 4, 1);
    
    std::cout << "after create.." << std::endl;
    displayGraph_M(edge);
    
    // 遍历
    std::cout << "traversal.." << std::endl;
    BFT_M(edge, vertexStatusArr);
    
    free(edge);
    
}

void BFS::createGraph_L(BEdge** edge, int start, int end) {
    BEdge* nedge = (BEdge*)malloc(sizeof(BEdge));
    nedge->vertex = end;
    nedge->next = nullptr;
    edge = edge + start;
    while (*edge != nullptr) {
        edge = &((*edge)->next);
    }
    *edge = nedge;
}

void BFS::displayGraph_L(BEdge** edge) {
    BEdge* nedge;
    int edgeCount = 0;
    for (int i = 0; i < VERTEXNUM; i++) {
        nedge = *(edge + i);
        std::cout << i << ":";
        while (nedge != nullptr) {
            std::cout << nedge->vertex << ",";
            nedge = nedge->next;
            edgeCount++;
        }
        std::cout << std::endl;
    }
    std::cout <<"edge count is " << edgeCount << std::endl;
}

void BFS::delGraph_L(BEdge** edge) {
    BEdge *p, *del;
    for (int i = 0; i < VERTEXNUM; i++) {
        p = *(edge + i);
        while (p != nullptr) {
            del = p;
            p = p->next;
            free(del);
        }
        edge[i] = nullptr;
    }
    free(edge);
}

void BFS::BFT_L(BEdge** edge, int* vertextStatusArr) {
    for (int i = 0; i < VERTEXNUM; i++) {
        BFTCore_L(edge, i, vertextStatusArr);
    }
    std::cout << std::endl;
}

void BFS::BFTCore_L(BEdge** edge, int i, int* vertexStatusArr) {
    Queue<int> queue;
    queue.Push(i);
    
    while (!queue.Empty()) {
        int t = queue.Pop();
        if (vertexStatusArr[t] == 0) {
            std::cout << t << "->";
            vertexStatusArr[t] = 1;
            
            BEdge* p = *(edge + t);
            while (p != nullptr) {
                queue.Push(p->vertex);
                p = p->next;
            }
        }
    }

}

void BFS::Test_L() {
    std::cout << "--------------邻接表表示-----------------" << std::endl;
    
    // 动态创建存放边的指针数组
    BEdge **edge = (BEdge**)malloc(sizeof(BEdge*)*VERTEXNUM);
    for (int i = 0; i < VERTEXNUM; i++) {
        edge[i] = nullptr;
    }
    
    // 存放顶点的遍历状态：0：未遍历，1:已遍历
    int *vertexStatusArr = (int*)malloc(sizeof(int)*VERTEXNUM);
    for (int i = 0; i < VERTEXNUM; i++) {
        vertexStatusArr[i] = 0;
    }
    
    std::cout << "after init.." << std::endl;
    displayGraph_L(edge);
    
    //创建图
    createGraph_L(edge, 0, 3);
    createGraph_L(edge, 0, 4);
    createGraph_L(edge, 3, 1);
    createGraph_L(edge, 3, 2);
    createGraph_L(edge, 4, 1);
    
    std::cout << "after create.." << std::endl;
    displayGraph_L(edge);
    
    // 深度优先遍历
    BFT_L(edge, vertexStatusArr);
    
    // 释放邻接表占用的内存
    delGraph_L(edge);
    edge = nullptr;
    free(vertexStatusArr);
    vertexStatusArr = nullptr;
}