#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t, v[60];
	string pulos;
	int tiros;
	cin >> n;
	for (int i=0; i<n; i++){
		tiros=0;
		cin >> t;
		for (int j=0; j<t; j++){
			cin >> v[j];
		}
		cin >> pulos;
		cin.ignore();
		
		
		for(int j=0; j<pulos.length(); j++){
			if (pulos[j] == 'J' && v[j]>2)
				tiros++;
			else if (pulos[j] == 'S' && v[j] <= 2)
				tiros++;
		}
		cout << tiros << endl;
		
	}
	
	return 0;
}
