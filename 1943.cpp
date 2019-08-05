#include <bits/stdc++.h>

using namespace std;

int main() {
	int k, i=0, vet[] ={1, 3, 5, 10, 25, 50, 100};
	
	cin >> k;
	while (vet[i] < k) i++;
	cout << "Top " << vet[i] << endl;
	
	return 0;
}
