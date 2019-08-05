#include <iostream>

using namespace std;

int main() {
	int hi, mi, hf, mf, vi, vf, aux;
	cin >> hi >> mi >> hf >> mf;
	
	vi = hi*60 + mi;
	vf = hf*60 + mf;
	if (vi < vf)
		cout << "O JOGO DUROU " << (vf-vi)/60 <<" HORA(S) E " << (vf-vi)%60 << " MINUTO(S)" << endl;
	else{
		aux = ((24*60)-vi) + vf;
		cout << "O JOGO DUROU " << aux/60 <<" HORA(S) E " << aux%60 << " MINUTO(S)" << endl;
	}
    return 0;
}
