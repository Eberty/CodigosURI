#include <iostream>

using namespace std;

int main() {
	int cod, qtd;
	cin >> cod >> qtd;
	cout.precision(2);
	cout << fixed << "Total: R$ ";
	switch (cod){
		case 1:
			cout << qtd*4.00;
			break;
		case 2:
			cout << qtd*4.50;
			break;
		case 3:
			cout << qtd*5.00;
			break;
		case 4:
			cout << qtd*2.00;
			break;
		case 5:
			cout << qtd*1.50;
			break;
	}
	cout << endl;
    return 0;
}
