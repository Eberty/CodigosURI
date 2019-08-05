#include <iostream>

using namespace std;

int main() {
	float m[12][12], soma=0;
	int i, j, linha;
	char t;
	
	cout.precision(1);
	cout << fixed;
	cin >> linha;
	cin.ignore();
	cin >> t;
	
	for (i=0; i<12; i++)
		for (j=0; j<12; j++)
			cin >> m[i][j];
			
	for (j=0; j<12; j++)
		soma += m[linha][j];
		
	if (t=='S')
		cout << soma/1.0 << endl;
	else
		cout << soma/12.0 << endl;
	
	return 0;
}
