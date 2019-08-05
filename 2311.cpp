#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n;
	float gd, notas[7], soma;
	string nome;
	cout.precision(2);
	scanf ("%d", &n);
	
	for (int i=0; i<n; i++){
		cin >> nome;
		scanf ("%f", &gd);
		for (int j=0; j< 7; j++)
			scanf ("%f", &notas[j]);
		sort(notas, notas+7);
		soma = 0;
		for (int j=1; j< 6; j++)
			soma += notas[j];
		cout << nome << " " << fixed << soma*gd << endl;
	}


	return 0;
}
