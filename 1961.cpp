#include <iostream>

using namespace std;

int main() {
	int p, n, ultima, prox;
	char game='w';
	cin >> p >> n;
	cin >> ultima;
	for (int i=2; i <= n; i++){
		cin >> prox;
		if (prox > ultima+p || prox < ultima-p)
			game='l';
		ultima = prox;
	}
	
	if (game == 'w')
		cout << "YOU WIN" << endl;
	else
		cout << "GAME OVER" << endl;
	
	return 0;
}
