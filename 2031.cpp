#include <iostream>

using namespace std;

int main() {
	string s1, s2;
	int n;
	
	cin >> n;
	
	for (int i=0; i<n; i++){
		cin >> s1;
		cin >> s2;
		
		if (s1.compare("ataque")==0 && s2.compare("ataque")==0) {
			cout << "Aniquilacao mutua" << endl;
			
		} else if (s1.compare("pedra")==0 && s2.compare("pedra")==0) {
			cout << "Sem ganhador" << endl;
			
		} else if (s1.compare("papel")==0 && s2.compare("papel")==0) {
			cout << "Ambos venceram" << endl;
			
		} else if (s1.compare("ataque")==0){
			cout << "Jogador 1 venceu" << endl;
			
		} else if (s2.compare("ataque")==0){
			cout << "Jogador 2 venceu" << endl;
			
		} else if ((s1.compare("pedra")==0 && s2.compare("papel")==0) || (s2.compare("pedra")==0 && s1.compare("papel")==0)) {
			if (s1.compare("pedra")==0)
				cout << "Jogador 1 venceu" << endl;
			else
				cout << "Jogador 2 venceu" << endl;
		}
	}
	
	return 0;
}
