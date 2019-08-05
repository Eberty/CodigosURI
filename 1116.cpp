#include <iostream>

using namespace std;

int main() {
	int n, x, y;
	
	cin >>  n;
	cout. precision(1);
	cout << fixed;
	for (int i=0; i<n; i++){
		cin >> x >> y;
		if (y!=0)
			cout << x/(y*1.0) << endl;
		else
			cout << "divisao impossivel" << endl;
	}
	return 0;
}
