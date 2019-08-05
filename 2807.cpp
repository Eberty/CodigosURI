#include <bits/stdc++.h>

using namespace std;

int main() {
	int vet[41], n;
	vet[0] = vet[1] = 1;
	for (int i=2; i<41; i++)
		vet[i] = vet[i-1] + vet[i-2];
	
	cin >> n;
	cout << vet[n-1];
	for(int i=n-2; i>=0; i--)
		cout << " " << vet[i];
	cout << endl;
	
	return 0;
}
