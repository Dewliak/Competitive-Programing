#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,n) for(int i=0;i<n;++i)
#define sz size


typedef pair<int,pair<int,int>> pipii;

int MAXN{100001};

int n;
vector<int> graph[100001];
vector<bool> visited(100001,false);


void DFS(int source){

    visited[source] = true;

    for(auto node:graph[source]){
        if(visited[node]){
            DFS(node);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int source;

    cin >> n;

    cin >> source;

    FOR(i,n){
        int a,b;
        cin >> a >> b;

        graph[a].PB(b);
        graph[b].PB(a);

    }

    DFS(source);

    return 0;
}
