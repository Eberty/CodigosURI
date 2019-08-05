#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, r, g, b, resp;
	string str;
	
	cin >> t;
	for (int i=1; i<=t; i++){
		cin >> str >> r >> g >> b;
		
		if (str == "eye"){
			resp = (0.3*r) + (0.59*g) + (0.11*b);
		}else if (str == "mean"){
			resp = (r+g+b)/3;
		}else if (str == "max"){
			resp = max(r,g);
			resp = max(resp, b);
		}else{
			resp = min(r,g);
			resp = min(resp, b);
		}
		
		cout << "Caso #" << i << ": " << resp << endl;
	}
	
	return 0;
}
