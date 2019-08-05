#include <bits/stdc++.h>

using namespace std;

int main() {
	vector <int> vet;
	int n, m, t, tot;
	
	while (cin >> n >> m && n){
		tot = 0;
		
		for (int i=0; i<m; i++){
			cin >> t;
			vet.push_back(t);
		}
		
		sort(vet.begin(), vet.end());
		
		for (int i=1; i<m; i++){
			if(vet[i] == vet[i-1]){
				tot++;
				while(vet[i] == vet[i-1] && i<m)
					i++;
			}
		}
		
		cout << tot << endl;
		vet.clear();
	}
	
	return 0;
}
