#include <iostream>

using namespace std;

int main() {
	int v[5], par, impar, pos, neg;
	par = impar = pos = neg = 0;
	
	for (int i=0; i<5; i++){
		cin >> v[i];
		
		if (v[i]%2 == 0)
			par++;
		else
			impar++;
			
		if (v[i] != 0){
			if (v[i] > 0)
				pos++;
			else
				neg++;
		}
			
	}
	
	cout << par << " valor(es) par(es)" << endl;
	cout << impar << " valor(es) impar(es)" << endl;
	cout << pos << " valor(es) positivo(s)" << endl;
	cout << neg << " valor(es) negativo(s)" << endl;
	
    return 0;
}

