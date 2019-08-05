#include <iostream>

using namespace std;

int main() {
	int i =0, op;
	float soma=0, nota;
	do{
		i=0;
		soma=0;
		while(i!=2){
			cin >> nota;
			if (nota>=0 && nota <=10){
				soma+=nota;
				i++;
			}else
				cout << "nota invalida" << endl;
		}
		cout.precision(2);
		cout << fixed;
		cout << "media = " << soma/2.0 << endl;
		do{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> op;
		} while(op != 1 && op != 2);
	} while (op==1);
	
	return 0;
}
