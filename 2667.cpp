#include<bits/stdc++.h>

using namespace std;

int main(){
	int tot = 0;
	string s;

	getline(cin, s);

	for(int i = 0; i < s.size(); i++){
		tot += (s[i] - '0');
	}

	int res = tot % 3;
	cout << res << endl;

	return 0;
}
