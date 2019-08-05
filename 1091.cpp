#include <bits/stdc++.h>

using namespace std;


int main (){
	int k, n, m, x, y;
	
	cin >> k;
	while(k){
		cin >> n >> m;
		
		for (int i=0; i<k; i++){
			cin >> x >> y;
			
			if (x>n && y>m)
				cout << "NE"; 
			else if (x<n && y>m)
				cout << "NO";
			else if (x<n && y<m)
				cout << "SO";
			else if (x>n && y<m)
				cout << "SE";
			else
				cout << "divisa";
			cout << endl;
		}
		
		cin >> k;
	}
	
	return 0;
}
