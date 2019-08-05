#include <iostream>

using namespace std;

int main() {
	int i, x, y, soma=0, aux;
	cin >> x >> y;
	
	if (x>y){
		aux = x;
		x = y;
		y = aux;
	}
			
	for (i=x+1; i<y; i++)
		if (i&1)
			soma+=i;
	
	cout << soma << endl;
	
    return 0;
}
