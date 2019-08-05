#include <iostream>

using namespace std;

int main() {
	int n, m, troco, v[6] = {2, 5, 10, 20, 50, 100}, ok;
	
	cin >> n >> m;
	while (n != m){
		troco = m - n;
		ok=0;
		for (int i=0; i<6 && ok==0; i++){
			for (int j=i; j<6 && ok==0; j++){
				if (v[i]+v[j]==troco)
					ok=1;
			}
		}
		
		if (ok)
			cout << "possible" << endl;
		else
			cout << "impossible" << endl;
			
		cin >> n >> m;
	}
	
	return 0;
}
