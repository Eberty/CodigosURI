#include <iostream>

using namespace std;

int main() {
	int n, soma=0, i=0;
	
	cin >> n;
	while (n>=0){
		i++;
		soma+=n;
		cin >> n;
	}
	
	cout.precision(2);
	cout << fixed;
	if (i!=0)
		cout << soma/(i*1.0) << endl;
	else
		cout << 0 << endl;
	
	return 0;
}
