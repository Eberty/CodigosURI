#include <iostream>

using namespace std;

int main() {
	int x, y, i, j;
	char mapa[100][100]={}, v[100][100]={}, c;
	
	cin >> x >> y;
	for (i=0; i<y; i++){
		for (j=0; j<x; j++)
			cin >> mapa[i][j];
	}
	
	i = j = 0;
	c = mapa[0][0];
	while (c!='*' && v[i][j]!=1 && i>=0 && i<y && j>=0 && j<x){
		if (mapa[i][j] != '.')
			c = mapa[i][j];
		v[i][j] = 1;
		if (c == '>')
			j++;
		else if (c == '<')
			j--;
		else if (c == '^')
			i--;
		else if (c == 'v')
			i++;
	}
	
	if (c=='*')
		cout << "*" << endl;
	else
		cout << "!" << endl;
	
	return 0;
}
