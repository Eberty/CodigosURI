#include <iostream>

using namespace std;

int main() {
	int n, ant=0, atu=1, prox;
	cin >> n;
	
	for(int i=1; i<n; i++){
		cout << ant << " ";
		prox = atu;
		atu += ant;
		ant = prox;
	}
	cout << ant << endl;
	
	return 0;
}
