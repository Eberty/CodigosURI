#include <iostream>
#include <sstream>

using namespace std;

int main() {
	unsigned long long int v;
	stringstream ss;

	cin >> v;
	ss << hex << v;
	string str = ss.str();
	
	for (unsigned int i=0; i<str.length(); i++)
		cout << (char) toupper(str[i]);
	cout << endl;
	return 0;
}
