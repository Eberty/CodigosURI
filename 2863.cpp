#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	double n, menor;
	
	while(cin >> t){
		cin >> menor;
		for (int i=1; i<t; i++){
			cin >> n;
			if (n<menor)
				menor = n;
		}
		
		cout << menor << endl;
	}
	return 0;
}
