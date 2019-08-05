#include <iostream>

using namespace std;

void geraMatriz (int a[][70], int m){
    int i, j;

    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
			a[i][j] = 3;
        }
        a[i][i] = 1;
        a[i][m-1-i] = 2;
    }
}

void printaMatriz (int a[][70], int m){
    int i, j;
    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
			cout << a[i][j];
        }
		cout << endl;
    }
}

int main() {
	int m, a[70][70];
	
	while (cin >> m){	
		geraMatriz(a, m);
		printaMatriz(a, m);
	}
	
	return 0;
}
