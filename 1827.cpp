#include <iostream>
#include <iomanip>

using namespace std;

void geraMatriz (int a[][102], int m){
    int i, j, pos1=m/3;
    int pos2 = m-pos1;
    
    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
			a[i][j] = 0;				
        }
		a[i][i] = 2;
		a[i][m-1-i] = 3;
    }
    
    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
			if (i>=pos1 && i<pos2)
				if (j>=pos1 && j<pos2)
					a[i][j] = 1;
        }
    }
    
    a[m/2][m/2] = 4;
}

void printaMatriz (int a[][102], int m){
    int i, j;
    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
			cout << a[i][j];
        }
		cout << endl; 
    }
    cout << endl;
}

int main() {
	int m, a[102][102];

	while (cin >> m){	
		geraMatriz(a, m);
		printaMatriz(a, m);
	}
	
	return 0;
}
