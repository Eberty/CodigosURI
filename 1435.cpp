#include <iostream>

using namespace std;

void geraMatriz (int a[][100], int m){
    int i, j, k;

    for (i = 0; i < m; i++){
        for (j = i; j < m-i; j++){
			for (k = i; k < m-i; k++){
				a[j][k] = i+1;
			}
        }
    }
}

void printaMatriz (int a[][100], int m){
    int i, j;
    for (i = 0; i < m; i++){
        for (j = 0; j < m-1; j++){
			printf("%3d ", a[i][j]);
        }
        printf("%3d\n", a[i][j]); //j == m
    }
    cout << endl;
}

int main() {
	int m, a[100][100];
	
	cin >> m;
	while (m > 0){	
		geraMatriz(a, m);
		printaMatriz(a, m);
		cin >> m;
	}
	
	return 0;
}
