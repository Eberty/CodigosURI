#include <bits/stdc++.h>

using namespace std;

int main() {
	char d;
	string n;
	
	cin >> d >> n;
	while (d != '0' && n != "0"){
		for (size_t i=0; i<n.size(); i++){
			if (n[i] == d){
				n.erase(n.begin()+i);
				i--;
			}
		}
		
		while(n[0] == '0'){
			n.erase(n.begin());
		}
		if (n.size() == 0)
			n = "0";
		cout << n << endl;
			
		cin >> d >> n;
	}
	return 0;
}
