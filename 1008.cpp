#include <iostream>

using namespace std;

int main(){
	int n, qtdh;
	double v;
	
	cin >> n >> qtdh >> v;
	cout << "NUMBER = " << n << endl;
	cout.precision(2);
	cout << "SALARY = U$ " << fixed << qtdh*v << endl;
	
    return 0;
}
