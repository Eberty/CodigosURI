#include <iostream>

using namespace std;

int main() {
	float m[12][12], soma=0;
	int i, j;
	char o;
	
	cout.precision(1);
	cout << fixed;
	cin >> o;
	
	for (i=0; i<12; i++)
		for (j=0; j<12; j++)
			cin >> m[i][j];
			
	for (i=0; i<12; i++)
		for (j=i+1; j<12; j++)
			soma += m[i][j];
		
	if (o == 'S')
		cout << soma/1.0 << endl;
	else
		cout << soma/66.0 << endl;
	
	return 0;
}
