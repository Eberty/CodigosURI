#include <iostream>

using namespace std;

int main() {
	string s;
	int par=0;
	cin >> s;
	for (unsigned int i=0; i<s.size(); i++){
		if (s[i]=='1')
			par++;
	}
		
	if (par&1)
		cout << s << '1' << endl;
	else
		cout << s << '0' << endl;
	return 0;
}
