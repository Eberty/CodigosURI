#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int t, i, vencedor;
	string resp[3]={"Bazinga!", "Raj trapaceou!", "De novo!"}, sheldon, raj;
	
	cin >> t;
	for (i=1; i<=t; i++){
		cin >> sheldon >> raj;
		//empate
		if (sheldon.compare(raj)==0)
			vencedor = 2;
			
		//tesoura corta o papel
		else if (sheldon.compare("tesoura")==0 && raj.compare("papel")==0)
			vencedor = 0;
		else if (sheldon.compare("papel")==0 && raj.compare("tesoura")==0)
			vencedor = 1;
			
		//papel embrulha a pedra
		else if (sheldon.compare("papel")==0 && raj.compare("pedra")==0)
			vencedor = 0;
		else if (sheldon.compare("pedra")==0 && raj.compare("papel")==0)
			vencedor = 1;
			
		//pedra esmaga o lagarto
		else if (sheldon.compare("pedra")==0 && raj.compare("lagarto")==0)
			vencedor = 0;
		else if (sheldon.compare("lagarto")==0 && raj.compare("pedra")==0)
			vencedor = 1;
			
		//lagarto envenena Spock
		else if (sheldon.compare("lagarto")==0 && raj.compare("Spock")==0)
			vencedor = 0;
		else if (sheldon.compare("Spock")==0 && raj.compare("lagarto")==0)
			vencedor = 1;
			
		//Spock destrói a tesoura
		else if (sheldon.compare("Spock")==0 && raj.compare("tesoura")==0)
			vencedor = 0;
		else if (sheldon.compare("tesoura")==0 && raj.compare("Spock")==0)
			vencedor = 1;
			
		//tesoura decapita o lagarto
		else if (sheldon.compare("tesoura")==0 && raj.compare("lagarto")==0)
			vencedor = 0;
		else if (sheldon.compare("lagarto")==0 && raj.compare("tesoura")==0)
			vencedor = 1;
			
		//lagarto come o papel
		else if (sheldon.compare("lagarto")==0 && raj.compare("papel")==0)
			vencedor = 0;
		else if (sheldon.compare("papel")==0 && raj.compare("lagarto")==0)
			vencedor = 1;
			
		//papel contesta Spock
		else if (sheldon.compare("papel")==0 && raj.compare("Spock")==0)
			vencedor = 0;
		else if (sheldon.compare("Spock")==0 && raj.compare("papel")==0)
			vencedor = 1;
			
		//Spock vaporiza a pedra
		else if (sheldon.compare("Spock")==0 && raj.compare("pedra")==0)
			vencedor = 0;
		else if (sheldon.compare("pedra")==0 && raj.compare("Spock")==0)
			vencedor = 1;
			
		//pedra quebra a tesoura
		else if (sheldon.compare("pedra")==0 && raj.compare("tesoura")==0)
			vencedor = 0;
		else if (sheldon.compare("tesoura")==0 && raj.compare("pedra")==0)
			vencedor = 1;
			
		cout << "Caso #" << i << ": " << resp[vencedor] << endl;
	}
	
	return 0;
}
