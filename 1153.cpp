#include <iostream>

using namespace std;

int main() {
	int n, fat=1;
	cin >> n;
	for (int i=n; i>0; i--)
		fat*=i;
	cout << fat << endl;
	return 0;
}
