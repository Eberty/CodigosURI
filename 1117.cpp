#include <iostream>

using namespace std;

int main() {
	int i =0;
	float soma=0, nota;
	
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
	
	return 0;
}
