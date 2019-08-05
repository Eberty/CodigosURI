#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string a;
	
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a;
		//cout << "t " << a.size() << endl;
		if (a.size() == 3){
			if ((a[0]=='O' && a[1]=='B') || (a[0]=='U' && a[1]=='R'))
				a[2] = 'I';
		}
		if (i != n-1)
			cout << a << " ";
		else
			cout << a << endl;
	}
	
	 
	return 0;
}
