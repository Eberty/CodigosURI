#include <iostream>

using namespace std;

int main() {
	int t, n;
	
	cin >> t;
	while (t>0){
		for (int i=0; i<t; i++){
			cin >> n;
			if (n&1)
				cout << ((n-1)*2)+1 << endl;
			else
				cout << ((n-2)*2)+2 << endl;
		}
		cin >> t;
	}
	
	
	return 0;
}
