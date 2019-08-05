#include <iostream>

using namespace std;

int main() {
	int dia, mes, falta;
	
	while (cin >> mes >> dia){
		falta = 0;
		switch (mes){
			case 1: falta+=31; mes++;
			case 2: falta+=29; mes++;
			case 3: falta+=31; mes++;
			case 4: falta+=30; mes++;
			case 5: falta+=31; mes++;
			case 6: falta+=30; mes++;
			case 7: falta+=31; mes++;
			case 8: falta+=31; mes++;
			case 9: falta+=30; mes++;
			case 10: falta+=31; mes++;
			case 11: falta+=30; mes++;
			case 12: falta+=(25-dia);
		}
		if (falta<0)
			cout << "Ja passou!" << endl;
		else if (falta==0)
			cout << "E natal!" << endl;
		else if (falta == 1)
			cout << "E vespera de natal!" << endl;
		else
			cout << "Faltam " << falta << " dias para o natal!" << endl;
	}
	
	
	return 0;
}
