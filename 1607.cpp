#include <bits/stdc++.h>

using namespace std;

int main() {
	string a, b;
	int n, res;
	
	cin >> n;
	while (n--){
		cin >> a >> b;
		res =0;
		for(unsigned int i=0; i<a.size(); i++){
			if (a[i] <= b[i])
				res += b[i] - a[i];
			else
				res += ('z' - a[i]) + (b[i] - 'a') + 1;
		}
		
		cout << res << endl;
	}
	
	return 0;
}
