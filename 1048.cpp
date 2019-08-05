#include <iostream>

using namespace std;

int main() {
	float sal, novo;
	int p;
	
	cin >> sal;
	cout.precision(2);
	cout << fixed;

	if(sal<=400){
		novo = sal*1.15;
		p = 15;
	}else if (sal<=800){
		novo = sal*1.12;
		p = 12;
	}else if (sal<=1200){
		novo = sal*1.1;
		p = 10;
	}else if (sal<=2000){
		novo = sal*1.07;
		p = 7;
	}else{
		novo = sal*1.04;
		p = 4;
	}
	cout << "Novo salario: " << novo << endl;
	cout << "Reajuste ganho: " << novo-sal << endl;
	cout << "Em percentual: " << p << " %" << endl;
	
    return 0;
}
