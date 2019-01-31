#include <bits/stdc++.h>

using namespace std;

#define max_size 40

int graph[max_size][max_size], num, record[max_size];

void depth_fs();
void do_dfs(int number);
void breadth_fs();


int main()
{
    int count;
    memset(graph, 0, sizeof(graph));
    cin >> num >> count;
    while(count--){
        int first, second;
        cin >> first >> second;
        graph[first][second] = 1;
        graph[second][first] = 1;
    }
    depth_fs();
    breadth_fs();
    return 0;
}

void depth_fs()
{
    memset(record, 0, sizeof(record));
    for(int cnt = 0; cnt < num ; cnt++)
        do_dfs(cnt);
    cout << endl;
}

void do_dfs(int number)
{
    if(record[number] == 1) return;
    cout << number << " ";
    record[number] = 1;
    for(int cnt = 0; cnt < num; cnt++){
        if(graph[number][cnt] == 1) do_dfs(cnt);
    }
}

void breadth_fs()
{
    memset(record, 0, sizeof(record));
    queue<int> Queue;
    for(int count = 0; count < num; count++){
        if(record[count] == 0){
            Queue.push(count);
            record[count] = 1;
        }
        while(!Queue.empty()){
            int current = Queue.front();
            cout << current << " ";
            Queue.pop();
            for(int cnt = 0; cnt < num; cnt++){
                if(graph[current][cnt] == 1 && record[cnt] == 0){
                    Queue.push(cnt);
                    record[cnt] = 1;
                }
            }
        }
    }
    cout << endl;
}
