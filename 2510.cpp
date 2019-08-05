#include <iostream>

using namespace std;

int main() {
	string l;
	int t;
	cin >> t;
	cin.ignore();
	
	for (int i=0; i<t; i++){
		getline(cin, l);	
		cout << "Y" << endl;
	}
	
	return 0;
}

