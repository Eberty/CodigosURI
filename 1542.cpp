#include <bits/stdc++.h>

using namespace std;

int main() {
	int q, d, p, x;
	
	while(cin >> q && q){
		cin >> d >> p;
		x = p * d * q / (p - q);
		if (x == 1)
			cout << "1 pagina" << endl;
		else
			cout << x << " paginas" << endl;
	}
	
	return 0;
}
