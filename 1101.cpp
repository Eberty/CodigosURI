#include <iostream>

using namespace std;

int main() {
	int  n, m;
	
	do{
		cin >> m >> n;
		if (m>0 && n>0){
			int aux, soma = 0;
			if (m>n){
				aux = m;
				m = n;
				n = aux;
			}
			for (int i=m; i<=n; i++){
				cout << i <<" ";
				soma+=i;
			}
			cout << "Sum=" << soma << endl;
		}
	} while (m>0 && n>0);
	
	return 0;
}
