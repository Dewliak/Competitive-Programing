#include <bits/stdc++.h>

using namespace std;

vector<int> graph[100001];

void BFS(int start){

    bool used [100001];

    queue<int> nodeQueue;

    nodeQueue.push(start);
    used[start] = true;

    while(!nodeQueue.empty()){
        int node{nodeQueue.front()};

        nodeQueue.pop();

        for(auto i: graph[node]){
            if(!used[i]){
                nodeQueue.push(i);
            }
        }
    }


}

int main()
{
    int N;
    cin >> N;
    for(int i =0; i < N; i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    BFS(0);

    return 0;
}
