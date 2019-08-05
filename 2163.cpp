#include <iostream>

using namespace std;

int ** alocamatriz(int n, int m){
	int **mat;
	
	mat = (int **)malloc(n*sizeof(int*));
	for (int i=0; i<n; i++)
		mat[i] = (int *)malloc(m*sizeof(int));
	
	return mat;
}

int main() {
	int **mat, m, n, x=0, y=0;
	cin >> n >> m;
	mat = alocamatriz(n, m);
	
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin >> mat[i][j];
	
	for (int i=1; i<n-1; i++)	{
		for (int j=1; j<m-1; j++){
			if (mat[i][j] == 42){
				if (mat[i-1][j-1]==7 && mat[i-1][j]==7 && mat[i-1][j+1]==7 && mat[i][j-1]==7 && mat[i][j+1]==7 && mat[i+1][j-1]==7 && mat[i+1][j]==7 && mat[i+1][j+1]==7){
					x=i;
					y=j;
				}
			}
		}
	}
	if (x!=0)
		cout << x+1 << " " << y+1 << endl;
	else
		cout << x << " " << y << endl;
	return 0;
}
