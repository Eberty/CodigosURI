#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, l, t;
	string str;
	
	cin >> n;
	while (n--){
		cin >> l;
		t = 0;
		for (int j=0; j<l; j++){
			cin >> str;
			for (int i=0; i<str.size(); i++){
				t += (str[i]-'A') + j + i;
			}
		}
		cout << t << endl;
	}
	
	return 0;
}
