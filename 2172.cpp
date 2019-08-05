#include <iostream>

using namespace std;

int main() {
	unsigned long long int x, m;
	cin >> x >> m;
	while (x!=0 && m!=0){
		cout << fixed << x*m << endl;
		cin >> x >> m;
	}
	return 0;
}
