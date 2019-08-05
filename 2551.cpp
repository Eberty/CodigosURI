#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t, d;
	double vm, rec;
	
	while (cin >> n){
		rec = 0.0;
		for (int i=1; i<=n; i++){
			cin >> t >> d;	
			vm = d / (double)t;
			if(vm > rec){
				cout << i << endl;
				rec = vm;
			}
		}
	}
	
	return 0;
}
