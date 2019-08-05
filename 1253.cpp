#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, x;
	string str;


	cin >> n;
	
	for (int i=0; i<n; i++){
		cin >> str >> x;
		int size = str.size();
		for (int j=0; j<size; j++){
			str[j] = str[j] - x;
			if (str[j] < 'A')
				str[j] += 26;
		}
		cout << str << endl;
	}

	return 0;
}
