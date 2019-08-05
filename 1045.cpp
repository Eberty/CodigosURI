#include <iostream>

using namespace std;

int main() {
	double a, b, c, aux;
	cin >> a >> b >> c;
	
	//troca
	if (c>a){
		aux = c;
		c = a;
		a = aux;
	}
	
	if(b>a){
		aux = b;
		b = a;
		a = aux;
	}
	
	if(c>b){
		aux = c;
		c = b;
		b = aux;
	}
	
	if (a >= b+c){
		cout << "NAO FORMA TRIANGULO\n";
	}else{
		if (a*a == b*b + c*c)
			cout << "TRIANGULO RETANGULO\n";
		if (a*a > b*b + c*c)
			cout << "TRIANGULO OBTUSANGULO\n";
		if (a*a < b*b + c*c)
			cout << "TRIANGULO ACUTANGULO\n";
		if (a==b && b==c)
			cout << "TRIANGULO EQUILATERO\n";
		else if (a==b || b==c || c==a)
			cout << "TRIANGULO ISOSCELES\n";
	}
    return 0;
}
