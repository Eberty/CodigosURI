#include <iostream>

using namespace std;

int main() {
	int n, menor;
	cin >> n;
	int v[n];
	
	for (int i=0; i<n; i++)
		cin >> v[i];
	
	menor = 0;
	for (int i=1; i<n; i++)
		if (v[i] < v[menor])
			menor = i;
		
		
	cout << "Menor valor: " << v[menor] << endl;
	cout << "Posicao: " << menor << endl;
	
	return 0;
}
