#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
typedef pair<int, int> ii; // In this chapter, we will frequently use these
typedef vector<ii> vii; // three data type shortcuts. They may look cryptic
typedef vector<int> vi; // but shortcuts are useful in competitive programming

#define DFS_WHITE -1
#define DFS_BLACK 1
#define h 2010

int AdjList[h][h];
vi S, visited, dfs_num, dfs_low; // additional global variables
int numSCC, dfsNumberCounter;
int conj[h];

void tarjanSCC(int u, int n) {
	dfs_low[u] = dfs_num[u] = dfsNumberCounter++; // dfs_low[u] <= dfs_num[u]
	S.push_back(u); // stores u in a vector based on order of visitation
	visited[u] = 1;
//cout << "oi1" << endl;
	for (int j = 1; j <= n; j++) {
		int v = AdjList[u][j];
		if(v == 1){
			if (dfs_num[j] == DFS_WHITE)
				tarjanSCC(j, n);

			if (visited[j])
				dfs_low[u] = min(dfs_low[u], dfs_low[j]);
		}
	}
//cout << "oi2" << endl;
	if (dfs_low[u] == dfs_num[u]) {
		//printf("SCC %d:", ++numSCC);
		numSCC++;

		while (1) {
			int v = S.back(); S.pop_back(); visited[v] = 0;
			//printf(" %d", v);

			if (u == v) 
				break;
//cout << "oi3" << endl;
		}
	}
}

int main() {
	int n, m, v, w, tipo;

	scanf("%d %d", &n, &m);

	while(n){
		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				AdjList[i][j] = 0;		
			}
		}

		for (int j = 1; j <= m; j++) {
			scanf("%d %d %d", &v, &w, &tipo);
			AdjList[v][w] = 1;
			if(tipo == 2)
				AdjList[w][v] = 1;
		}

		dfs_low.assign(n + 1, 0);
		dfs_num.assign(n + 1, DFS_WHITE);
		visited.assign(n + 1, 0);
		dfsNumberCounter = numSCC = 0;

		for (int i = 1; i <= n; i++){
			if (dfs_num[i] == DFS_WHITE)
				tarjanSCC(i, n);
		}

		if(numSCC == 1)
			cout << 1 << endl;
		else
			cout << 0 << endl;

		scanf("%d %d", &n, &m);
	}

	return 0;
}
