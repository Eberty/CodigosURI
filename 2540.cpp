#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, tot, x;
	
	while (cin >> n){
		tot=0;
		for (int i=0; i<n; i++){
			cin >> x;
			if (x > 0)
				tot++;
		}
		if ((tot / (n * 1.0)) >= 2/3.0)
			cout << "impeachment" << endl;
		else
			cout << "acusacao arquivada" << endl;
	}

	return 0;
}
