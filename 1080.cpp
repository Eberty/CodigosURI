#include <iostream>

using namespace std;

int main() {
	int x, maior=-1, pos;
	
	for (int i=1; i<=100; i++){
		cin >> x;
		if (x > maior){
			maior = x;
			pos = i;
		}
	}
	
	cout << maior << endl << pos << endl;
	
	return 0;
}
