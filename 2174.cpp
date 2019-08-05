#include <bits/stdc++.h>

using namespace std;

int main() {
	map <string, int> vet;
	int n;
	string str;
	
	cin >> n;
	while (n--){
		cin >> str;
		vet[str]++;
	}
	cout << "Falta(m) " << 151-vet.size() << " pomekon(s)." << endl;
	
	return 0;
}
