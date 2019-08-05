#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m, a, b, x, y;
	char desenho[60][60], aux;

	scanf("%d %d", &n, &m);
	while(n != 0 && m != 0){
		scanf("%c", &aux);

		for(int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				scanf("%c", &desenho[i][j]);
			}
			scanf("%c", &aux);
		}
		scanf("%d %d", &a, &b);
		
		x = a/n;
		y = b/m;
		for(int i=0; i<a; i++){
			for (int j=0; j<b; j++){
				printf("%c", desenho[i/x][j/y]);
			}
			printf("\n");
		}
		printf("\n");
		scanf("%d %d", &n, &m);	
	}

	return 0;
}
