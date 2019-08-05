#include <iostream>

using namespace std;

int main() {
	int n, i, j, soma;
	cin >> n;
	int m[n+1][n+1];
	
	
	for (i=0; i<n+1; i++)
		for (j=0; j<n+1; j++)
			cin >> m[i][j];
	
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			soma=0;
			
			if (m[i][j]==1)
				soma++;
			if (m[i+1][j]==1)
				soma++;
			if (m[i][j+1]==1)
				soma++;
			if (m[i+1][j+1]==1)
				soma++;
			
			if (soma>=2)
				cout << "S";
			else
				cout << "U";
		}
		cout << endl;
	}
	
	return 0;
}
