#include <bits/stdc++.h>

using namespace std;

int main() {
	map <string,bool> aux;
	string str;
	
	while(cin >> str)
		aux[str] = true;
	
	cout << aux.size() << endl;
	
	return 0;
}
