#include <bits/stdc++.h>

using namespace std;


int main (){
	int n, a, b, c, d, e;
	char x;
	cin >> n;
	while(n){
		for (int i=0; i<n; i++){
			cin >> a >> b >> c >> d >> e;
			x = 'x';
			if (a <= 127) 
				x = 'A';
			
			if (b <= 127)
				if (x != 'x')
					x = '*';
				else
					x = 'B';

			if (c <= 127)
				if (x != 'x')
					x = '*';
				else
					x = 'C';

			if (d <= 127)
				if (x != 'x')
					x = '*';
				else
					x = 'D';

			if (e <= 127)
				if (x != 'x')
					x = '*';
				else
					x = 'E';
			
			if (x == 'x')
				x = '*';
			
			cout << x << endl;
		}
		cin >> n;
	}
	
	return 0;
}
