#include <iostream>

using namespace std;


void ok(unsigned int n){
	unsigned int i, j;
	cout << 0;
	for (i=0; i<=n; i++){
		for (j=0; j<i; j++)
			cout << " " << i;
	}
	cout << endl;
}

int main() {
	unsigned int caso=0, num, i, s=0;

	while (cin >> num){
		caso++;
		
		s=1; //i=0
		for (i=1; i<=num; i++){
			s += i;
		}
		
		if (s==1)
			cout << "Caso " << caso << ": " << s << " numero" << endl;
		else
			cout << "Caso " << caso << ": " << s << " numeros" << endl;
			
		ok(num);
		cout << endl;
	}
	
	return 0;
}
