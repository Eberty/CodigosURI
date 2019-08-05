#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	int n, l;
	
	while (cin >> str){
		cin >> n;
		for (int i=0; i<n; i++){
			cin >> l;
			cout << str[l-1];
		}
		cout << endl;
	}
	
	return 0;
}
