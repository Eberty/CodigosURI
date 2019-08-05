#include <iostream>

using namespace std;

int main() {
	int x, z, soma=0, i=0;
	
	cin >> x;
	do{
		cin >> z;
	} while (z<=x);
	
	while(soma < z){
		soma += (x + i);
		i++;
	}
	cout << i << endl;
	
	return 0;
}
