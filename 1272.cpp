#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string str;
	char last;
	
	cin >> n;
	cin.ignore();
	while (n--){
		getline(cin, str);
		last = ' ';
		for (int i=0; i<str.size(); i++){
			if (last == ' ' && str[i] != ' ')
				cout << str[i];
			last = str[i];
		}
		cout << endl;
	}
	
	return 0;
}
