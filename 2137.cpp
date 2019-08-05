#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> v;
	int n, a;
	
	while(cin >> n){
		for (int i=0; i<n; i++){
			cin >> a;
			v.push_back(a);
		}
		
		
		sort(v.begin(), v.end());
		for (int i=0; i<n; i++)
			printf("%04d\n", v[i]);
			//cout << v[i] << endl;
		v.clear();
	}
	
	
	return 0;
}
