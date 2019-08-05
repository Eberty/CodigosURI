#include <iostream>

using namespace std;

int main() {
	unsigned int i, n, num, dois, tres, quatro, cinco;
	dois = tres = quatro = cinco = 0;
	cin >> n;
	for (i=0; i<n; i++){
		cin >> num;
		if (num%2==0)
			dois++;
		if (num%3==0)
			tres++;
		if (num%4==0)
			quatro++;
		if (num%5==0)
			cinco++;	
	}
	cout << dois << " Multiplo(s) de 2" << endl;
	cout << tres << " Multiplo(s) de 3" << endl;
	cout << quatro << " Multiplo(s) de 4" << endl;
	cout << cinco << " Multiplo(s) de 5" << endl;
	return 0;
}
