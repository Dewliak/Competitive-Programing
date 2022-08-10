#include <bits/stdc++.h>

// DSU implementation
// Disjoint-set union



using namespace std;

int n;
int parent[100001];
int rank[100001]



int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void make_set(int v) {
    parent[v] = v;
    rank[v] = 0;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (rank[a] < rank[b])
            swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b])
            rank[a]++;
    }
}


int main()
{

    //initialize
    for(int i = 0; i < MAXN; i++){
		make_set(i);
	}


	cin >> n;

	for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        union_set(a,b);
	}



    return 0;
}
