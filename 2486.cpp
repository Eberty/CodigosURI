#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n, c;
	string alimento;
	
	
	cin >> t;
	while (t){
		c = 0;
		for (int i=0; i<t; i++){
			cin >> n;
			cin.ignore();
			getline(cin, alimento);
			if (alimento.compare("suco de laranja") == 0)
				c += n*120;
			else if (alimento.compare("morango fresco") == 0)
				c += n*85;
			else if (alimento.compare("mamao") == 0)
				c += n*85;
			else if (alimento.compare("goiaba vermelha") == 0)
				c += n*70;
			else if (alimento.compare("manga") == 0)
				c += n*56;
			else if (alimento.compare("laranja") == 0)
				c += n*50;
			else if (alimento.compare("brocolis") == 0)
				c += n*34;
		}
		
		if (c > 130)
			cout << "Menos " << c-130 << " mg" << endl;
		else if (c < 110)
			cout << "Mais " << 110-c << " mg" << endl;
		else
			cout << c << " mg" << endl;
		cin >> t;
	}
	
	
	return 0;
}
