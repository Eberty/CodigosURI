#include <iostream>

using namespace std;

int main() {
	int n, qtd, cobaias, coelhos, ratos, sapos;
	char tipo;
	cobaias = coelhos = ratos = sapos = 0;
	cin >> n;
	
	for (int i=0; i<n; i++){
		cin >> qtd >> tipo;
		cobaias += qtd;
		
		if (tipo == 'C')
			coelhos += qtd;
		else if (tipo == 'R')
			ratos += qtd;
		else if (tipo == 'S')
			sapos += qtd;
		
	}

	cout.precision(2);
	cout << fixed;
	cout << "Total: " << cobaias << " cobaias" << endl;
	cout << "Total de coelhos: " << coelhos << endl;
	cout << "Total de ratos: " << ratos << endl;
	cout << "Total de sapos: " << sapos << endl;
	cout << "Percentual de coelhos: " << (coelhos/(cobaias*1.0))*100 << " %" << endl;
	cout << "Percentual de ratos: " << (ratos/(cobaias*1.0))*100 << " %" << endl;
	cout << "Percentual de sapos: " << (sapos/(cobaias*1.0))*100 << " %" << endl;
	
	return 0;
}
