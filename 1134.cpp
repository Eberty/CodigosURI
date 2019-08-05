#include <iostream>

using namespace std;

int main() {
	int a, g, d, op;
	a = g = d = 0;
	
	do{
		cin >> op;
		if (op==1)
			a++;
		else if (op==2)
			g++;
		else if (op==3)
			d++;
		
	} while (op != 4);
	
	cout << "MUITO OBRIGADO" << endl << "Alcool: " << a << endl;
	cout << "Gasolina: " << g << endl << "Diesel: " << d << endl;
	
	return 0;
}
