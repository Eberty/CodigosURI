#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, r, x, y;
	cin >> n;
	while (n){
		x = y = 0;
		for (int i=0; i<n; i++){
			cin >> r;
			if (r)
				y++;
			else
				x++;
		}
		
		cout << "Mary won " << x << " times and John won " << y << " times" << endl;
		cin >> n;
	}
	
	return 0;
}
