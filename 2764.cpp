#include <bits/stdc++.h>

using namespace std;

int main() {
	string d, m, a;
	
	getline(cin, d, '/');
	getline(cin, m, '/');
	getline(cin, a);
	
	cout << m << "/" << d << "/" << a << endl;
	cout << a << "/" << m << "/" << d << endl;
	cout << d << "-" << m << "-" << a << endl;
	
	return 0;
}
