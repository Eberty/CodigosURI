#include <bits/stdc++.h>

using namespace std;

int main() {
	string a, b = "";
	size_t i, j;
	bool aux = true;
	
	
	cin >> a;
	for (i=0; i<a.size(); i++){
		if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
			b += a[i];
	}
	
	for (i=0, j=b.size()-1; i<j; i++, j--){
		if(b[i] != b[j]){
			aux = false;
			break;
		}
	}
	
	if (aux)
		cout << "S" << endl;
	else
		cout << "N" << endl;
		
	return 0;
}
