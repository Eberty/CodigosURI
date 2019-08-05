#include<bits/stdc++.h>

using namespace std;

int main(){
	int x[2][3], y = 0;

	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 3; j++)
			cin >> x[i][j];

	if(x[0][0] < x[1][0])
		y += x[1][0] - x[0][0];
	if(x[0][1] < x[1][1])
		y += x[1][1] - x[0][1];
	if(x[0][2] < x[1][2])
		y += x[1][2] - x[0][2];


	cout << y << endl;

	return 0;
}
