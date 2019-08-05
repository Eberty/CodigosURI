#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, n, pta, ptb;
	
	cin >> n;
	while (n){
		pta = ptb = 0;
		
		for (int i=0; i<n; i++){
			cin >> a >> b;
			if (a>b)
				pta++;
			else if(b>a)
				ptb++;
		}
		cout << pta << " " << ptb << endl;
		cin >> n;
	}
	
	return 0;
}
