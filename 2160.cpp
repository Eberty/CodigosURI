#include <iostream>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	if (s.size() <= 80)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
