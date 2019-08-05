#include <bits/stdc++.h>

using namespace std;


void eraseAllSubStr(string & mainStr, const string & toErase) {
	size_t pos = string::npos;
	while ((pos  = mainStr.find(toErase) )!= string::npos)
		mainStr.erase(pos, toErase.length());
}

int main() {
	unsigned long long int n, m;
	string str;
	
	while (cin >> n >> m && n){
		str = to_string(n+m);
		eraseAllSubStr(str, "0");
		cout << str << endl;
	}
	
	return 0;
}
