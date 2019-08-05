#include <iostream>
#include <cmath>

using namespace std;

int main() {
	unsigned int t, i, n, ano=2015;
	
	cin >> n;
	for (i=0; i<n; i++){
		cin >> t;
		if (t >= ano)
			cout << t-ano+1 << " A.C." << endl;
		else
			cout << ano-t << " D.C." << endl;
	}
	
	return 0;
}
