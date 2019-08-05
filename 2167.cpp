#include <iostream>

using namespace std;

int main() {
	int n, atu, ant, queda=0;
	cin >> n;
	cin >> atu;
	for (int i=2; i<=n && queda==0; i++){
		ant = atu;
		cin >> atu;
		if (atu < ant)
			queda=i;
	}
	cout << queda << endl;
	return 0;
}
