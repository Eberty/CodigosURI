#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, d, p, tot;
	bool ok;
	string data;
	
	while(cin >> n >> d){
		ok = false;
		for(int i=0; i<d; i++){
			cin >> data;
			tot = 0;
			for (int j=0; j<n; j++){
				cin >> p;
				if(p)
					tot++;
			}
			if (tot == n && !ok){
				cout << data << endl;
				ok = true;
			}
		}
		if (!ok)
			cout << "Pizza antes de FdI" << endl;
	}
	
	return 0;
}
