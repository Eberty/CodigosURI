#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	string s;
	cin >> t;
	while (t--) {
		int res = 1;
		cin >> s;
		for (size_t i=0; i<s.size(); i++){
			char aux = tolower(s[i]);
			if (aux == 'a' || aux == 'e' || aux == 'i' || aux == 'o' || aux == 's')
				res *= 3;
			else
				res *= 2;
		}
		cout << res << endl;
	}
	return 0;
}
