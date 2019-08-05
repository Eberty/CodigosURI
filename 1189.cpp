#include <iostream>

using namespace std;

int main() {
	double m[12][12], soma=0;
	int i, j, v=11;
	char o;
	
	cout.precision(1);
	cout << fixed;
	cin >> o;
	
	for (i=0; i<12; i++)
		for (j=0; j<12; j++)
			cin >> m[i][j];
			
	for (i=0; i<12; i++, v--)
		for (j=0; j<i && j<v; j++)
			soma += m[i][j];
		
	if (o == 'S')
		cout << soma/1.0 << endl;
	else
		cout << soma/30.0 << endl;
	
	return 0;
}
