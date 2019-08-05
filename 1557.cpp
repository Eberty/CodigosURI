#include <iostream>
#include <iomanip>

using namespace std;

void geraMatriz (int a[][15], int m){
    int i, j, k, vezes=1;

    for (i = 0; i < m; i++){
		k = vezes;
        for (j = 0; j < m; j++){
			a[i][j] = k;
			k *= 2;
        }
        vezes *= 2;
    }
}

int tamanho(int valor){
	int contaDigitos = 0;
	do {
		contaDigitos = contaDigitos + 1;
		valor = valor / 10;
	} while (valor != 0);
	return contaDigitos;
}

void printaMatriz (int a[][15], int m){
    int i, j;
    for (i = 0; i < m; i++){
        for (j = 0; j < m-1; j++){
			cout << setw(tamanho(a[m-1][m-1])) << a[i][j] << " ";
        }
       cout << setw(tamanho(a[m-1][m-1])) << a[i][j] << endl; //j == m
    }
    cout << endl;
}

int main() {
	int m, a[15][15];
	
	cin >> m;
	while (m > 0){	
		geraMatriz(a, m);
		printaMatriz(a, m);
		cin >> m;
	}
	
	return 0;
}
