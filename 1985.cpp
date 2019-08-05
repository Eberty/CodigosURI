#include <iostream>

using namespace std;

int main() {
	int c, prod, qtd;
	double soma=0;
	cin >> c;
	cout.precision(2);
	cout << fixed;
	
	for(int i=0; i<c; i++){
		cin >> prod >> qtd;
		switch (prod){
			case 1001: soma += qtd*1.5; break;
			case 1002: soma += qtd*2.5; break;
			case 1003: soma += qtd*3.5; break;
			case 1004: soma += qtd*4.5; break;
			case 1005: soma += qtd*5.5; break;
		}
	}
	
	cout << soma << endl;
	
	return 0;
}
