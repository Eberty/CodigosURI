#include <bits/stdc++.h>

using namespace std;

int main() {
	list<int> vet;
	int n, r, aux;
	
	while (cin >> n >> r){
		vet.clear();
		for(int i=0; i<r; i++){
			cin >> aux;
			vet.push_back(aux);
		}
		if (n == r){
			cout << "*" << endl;
		} else {
			vet.sort();
			for (int i=0; i<n; i++){
				if (vet.front() != i+1){
					cout << i+1 << " ";
				} else {
					vet.pop_front();
				}
			}
			cout << endl;
		}
	}
	
	return 0;
}
