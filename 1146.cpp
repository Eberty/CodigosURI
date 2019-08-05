#include <iostream>

using namespace std;

int main() {
	int x, i;
	cin >> x;
	
	while (x!=0){
		for (i=1; i<x; i++)
			cout << i << " ";
		cout << i << endl;
		cin >> x;
	}
	
	return 0;
}
