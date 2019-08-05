#include <iostream>

using namespace std;

int main() {
	string s;
	int c;
	cout.precision(2);
	cout << fixed;
	cin >> c;
	for (int i=0; i<c; i++){
		cin >> s;
		cout << s.size()/100.0 << endl;
	}
	return 0;
}
