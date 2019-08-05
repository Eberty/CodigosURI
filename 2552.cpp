#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, tot;
	
	while (cin >> n >> m){
		int mat[n][m];
		
		for(int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin >> mat[i][j];
			}
		}
		
		for(int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				tot = 0;
				if (mat[i][j]){
					cout << 9;
				} else {
					if (i!=0 && mat[i-1][j])
						tot++;
					if (j!=0 && mat[i][j-1])
						tot++;
					if (i!=n-1 && mat[i+1][j])
						tot++;
					if (j!=m-1 && mat[i][j+1])
						tot++;
					cout << tot;
				}
			}
			cout << endl;
		}
	}
	
	return 0;
}
