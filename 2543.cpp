#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, id, i, j, tot;
	
	while (cin >> n >> id){
		tot = 0;
		for (int k=0; k<n; k++){
			cin >> i >> j;
			if (j==0 && i==id)
				tot++;
		}
		cout << tot << endl;
	}
	
	return 0;
}
