#include <bits/stdc++.h>

// Kruskal implementation

using namespace std;

int MAXN{100001};

int n;
int parent[100001];
int ranks[100001];
typedef pair<int,pair<int,int>> pipii;


int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void make_set(int v) {
    parent[v] = v;
    ranks[v] = 0;
}

bool union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (ranks[a] < ranks[b]){
            swap(a, b);
        }
        parent[b] = a;
        if (ranks[a] == ranks[b]){
            ranks[a]++;
        }
        return true;
    }
    return false;
}


int main()
{
    //initialize the DSU
    for(int i = 0; i < MAXN; i++){
		parent[i]=i;
		ranks[i]=0;
	}

    cin >> n;
    priority_queue<pipii,vector<pipii>,greater<pipii>> pq;

    for(int i =0; i < n; i++){
        int honnan,hova,suly;
        cin >> honnan >> hova >> suly;
        pq.push(make_pair(suly,make_pair(honnan,hova)));
    }



    while(!pq.empty()){
        pipii edge = pq.top();
        pq.pop();
        if( find_set(edge.second.first) != find_set(edge.second.second)){
            cout << "here" << endl;
            cout << edge.first << " edge: " << edge.second.first << " " << edge.second.second << endl;
            union_sets(edge.second.first,edge.second.second);
        }
        else{
            cout << "bad" << endl;
        }

    }

    return 0;
}
