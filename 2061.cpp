#include <iostream>

using namespace std;

int main() {
	int m, n;
	string atvd;
	
	cin >> n >> m;
	for (int i=0; i<m; i++){
		cin >> atvd;
		if (atvd.compare("fechou")==0)
			n++;
		else
			n--;
	}
	
	cout << n << endl;
	return 0;
}
