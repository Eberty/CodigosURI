#include <iostream>

using namespace std;

int main() {
	unsigned int p, j1, j2, r, a;
	cin >> p >> j1 >> j2 >> r >> a;
	
	
	if (r){
		if (a)
			cout << "Jogador 2 ganha!" << endl;
		else
			cout << "Jogador 1 ganha!" << endl;
	} else if (a){
		cout << "Jogador 1 ganha!" << endl;
	} else{
		if ((j1+j2)&1){ //impar
			if (p==1)
				cout << "Jogador 2 ganha!" << endl;
			else
				cout << "Jogador 1 ganha!" << endl;
		}else{ //par
			if (p==1)
				cout << "Jogador 1 ganha!" << endl;
			else
				cout << "Jogador 2 ganha!" << endl;		
		}
	}
	
	
	return 0;
}
