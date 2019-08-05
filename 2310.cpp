#include <iostream>

using namespace std;

int main() {
	int n, s, b, a, s1, b1, a1, st=0, bt=0, at=0, tots=0, totb=0, tota=0;
	string nome;
	
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> nome;
		cin >> s >> b >> a >> s1 >> b1 >> a1;
		tots+= s;
		totb+= b;
		tota+= a;
		st+= s1;
		bt+= b1;
		at+= a1;
	}
	cout.precision(2);
	cout << fixed;
	cout << "Pontos de Saque: " << 100*(st*1.0/tots) << " %." << endl;
	cout << "Pontos de Bloqueio: " << 100*(bt*1.0/totb) << " %." << endl;
	cout << "Pontos de Ataque: " << 100*(at*1.0/tota) << " %." << endl;
	
	return 0;
}
