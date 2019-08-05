#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, qt, s, res, aux;
	vector<int> vet;
	
	cin >> n;
	while (n--){
		cin >> qt >> s;
		res = 0;
		vet.clear();
		for (int i=0; i<qt; i++){
			cin >> aux;
			vet.push_back(aux);
			if (abs(vet[i]-s) < abs(vet[res]-s))
				res = i;
		}
		cout << res+1 << endl;
	}
	
	return 0;
}
