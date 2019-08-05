#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int qtd, h, m, o;
	cin >> qtd;

	for (int i=0; i<qtd; i++){
		cin >> h >> m >> o;
		printf("%02d:%02d", h ,m);
		if (o)
			cout << " - A porta abriu!" << endl;
		else
			cout << " - A porta fechou!" << endl;
	}
	return 0;
}
