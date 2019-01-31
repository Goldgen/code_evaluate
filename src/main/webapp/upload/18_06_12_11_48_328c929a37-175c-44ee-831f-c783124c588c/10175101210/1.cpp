#include <iomanip>

#include <iostream>

#include <vector>

using namespace std;



#define MAX 100

class MatrixUDG {

	private:

        char mVexs[MAX];
        int mVexNum;
        int mEdgNum;

        int mMatrix[MAX][MAX];


    public:

		MatrixUDG();


        MatrixUDG(char vexs[], int vlen, char edges[][2], int elen);

		~MatrixUDG();



        void DFS();


        void BFS();


        void print();



	private:


        char readChar();



        int getPosition(char ch);


        int firstVertex(int v);



        int nextVertex(int v, int w);

        void DFS(int i, int *visited);



};





MatrixUDG::MatrixUDG()

{

    char c1, c2;

    int i, p1, p2;




    cout << "input vertex number: ";

    cin >> mVexNum;

    cout << "input edge number: ";

    cin >> mEdgNum;

    if ( mVexNum < 1 || mEdgNum < 1 || (mEdgNum > (mVexNum * (mVexNum-1))))

    {

        cout << "input error: invalid parameters!" << endl;

        return ;

    }





    for (i = 0; i < mVexNum; i++)

    {

        cout << "vertex(" << i << "): ";

        mVexs[i] = readChar();

    }





    for (i = 0; i < mEdgNum; i++)

    {


        cout << "edge(" << i << "): ";

        c1 = readChar();

        c2 = readChar();



        p1 = getPosition(c1);

        p2 = getPosition(c2);

        if (p1==-1 || p2==-1)

        {

            cout << "input error: invalid edge!" << endl;

            return ;

        }



        mMatrix[p1][p2] = 1;

        mMatrix[p2][p1] = 1;

    }

}





MatrixUDG::MatrixUDG(char vexs[], int vlen, char edges[][2], int elen)

{

    int i, p1, p2;




    mVexNum = vlen;

    mEdgNum = elen;


    for (i = 0; i < mVexNum; i++)

        mVexs[i] = vexs[i];





    for (i = 0; i < mEdgNum; i++)

    {

        p1 = getPosition(edges[i][0]);

        p2 = getPosition(edges[i][1]);



        mMatrix[p1][p2] = 1;

        mMatrix[p2][p1] = 1;

    }

}





MatrixUDG::~MatrixUDG()

{

}




int MatrixUDG::getPosition(char ch)

{

    int i;

    for(i=0; i<mVexNum; i++)

        if(mVexs[i]==ch)

            return i;

    return -1;

}


char MatrixUDG::readChar()

{

    char ch;



    do {

        cin >> ch;

    } while(!(ch>='0'&&ch<='9') );



    return ch;

}






int MatrixUDG::firstVertex(int v)

{

    int i;



    if (v<0 || v>(mVexNum-1))

        return -1;



    for (i = 0; i < mVexNum; i++)

        if (mMatrix[v][i] == 1)

            return i;



    return -1;

}





int MatrixUDG::nextVertex(int v, int w)

{

    int i;



    if (v<0 || v>(mVexNum-1) || w<0 || w>(mVexNum-1))

        return -1;



    for (i = w + 1; i < mVexNum; i++)

        if (mMatrix[v][i] == 1)

            return i;



    return -1;

}





void MatrixUDG::DFS(int i, int *visited)

{

    int w;



    visited[i] = 1;

    cout << mVexs[i] << " ";



    for (w = firstVertex(i); w >= 0; w = nextVertex(i, w))

    {

        if (!visited[w])

            DFS(w, visited);

    }



}




void MatrixUDG::DFS()

{

    int i;

    int visited[MAX];





    for (i = 0; i < mVexNum; i++)

        visited[i] = 0;





    for (i = 0; i < mVexNum; i++)

    {



        if (!visited[i])

            DFS(i, visited);

    }

    cout << endl;

}

void MatrixUDG::BFS()

{

    int head = 0;
    int rear = 0;
    int queue[MAX];     // 辅组队列
int visited[MAX];   // 顶点访问标记

    int i, j, k;
    for (i = 0; i < mVexNum; i++)
        visited[i] = 0;
    for (i = 0; i < mVexNum; i++)

    {

        if (!visited[i])

        {

            visited[i] = 1;

            cout << mVexs[i] << " ";

            queue[rear++] = i;  // 入队列

        }

        while (head != rear)

        {

            j = queue[head++];  // 出队列

            for (k = firstVertex(j); k >= 0; k = nextVertex(j, k)) //k是为访问的邻接顶点

            {

                if (!visited[k])

                {

                    visited[k] = 1;

                    cout << mVexs[k] << " ";

                    queue[rear++] = k;

                }

            }

        }

    }
    cout << endl;
}

void MatrixUDG::print()

{
    int i,j;
    cout << "Martix Graph:" << endl;
    for (i = 0; i < mVexNum; i++)
    {
        for (j = 0; j < mVexNum; j++)
        cout << mMatrix[i][j] << " ";
        cout << endl;
    }

}
int main()

{
    int nV,nE;
    int E1,E2;
    cin >> nV >>nE;
    char vexs [nV];
    char edges[nE][2];
    for(int i=0;i<nV;i++)
        vexs[i]=i+'0';
    for(int j=0;j<nE;j++)
    {
       cin>>E1>>E2;
       edges[j][0]=E1+'0';
       edges[j][1]=E2+'0';
    }
    int vlen = sizeof(vexs)/sizeof(vexs[0]);
    int elen = sizeof(edges)/sizeof(edges[0]);
    MatrixUDG* pG;
    pG = new MatrixUDG(vexs, vlen, edges, elen);
    pG->DFS();
    pG->BFS();
    return 0;

}