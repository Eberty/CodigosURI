#include<bits/stdc++.h>

#define h 25

using namespace std;

int main(){
	int n, grid[h], cheg[h], res, aux;

	while(scanf("%d ", &n) != EOF){
		res = 0;

		for(int i = 0; i < n; i++)
			scanf("%d ", &grid[i]);
		for(int i = 0; i < n; i++)
			scanf("%d ", &cheg[i]);

		for(int i = n-1; i >= 0; i--){
			int j;
			for(j = 0; grid[j] != cheg[i]; j++);

			for(int k = j; k < i; k++){
				aux = grid[k];
				grid[k] = grid[k+1];
				grid[k+1] = aux;
				res++;
			}
		}

		printf("%d\n", res);
	}

	return 0;
}
