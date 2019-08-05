#include <iostream>

using namespace std;

int main() {
	int ini, fim;
	cin >> ini >> fim;
	
	if (ini < fim)
		cout << "O JOGO DUROU " << fim-ini << " HORA(S)" << endl;
	else
		cout << "O JOGO DUROU " << 24-ini+fim << " HORA(S)" << endl;
	
    return 0;
}
