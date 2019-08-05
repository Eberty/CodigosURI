#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, v, s1, s2;
	vector<int> vet;
	
	cin >> n;
	while (n){
		cin >> v;
		vet.push_back(v);
		s1 = 0;
		for (int i=1; i<n; i++){
			cin >> v;
			vet.push_back(v);
			if (v > vet[s1])
				s1 = i;
		}
		
		if(s1 == 0)
			s2 = 1;
		else 
			s2 = 0;
			
		for (int i=0; i<n; i++){
			if (vet[i] > vet[s2] && i != s1){
				s2 = i;
			}
		}
		
		cout << s2+1 << endl;
		vet.clear();
		cin >> n;
	}
	
	return 0;
}
