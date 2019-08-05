#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b;
	char l;

	cin >> n;
	while(n--){
		cin >> a >> l >> b;

		if(a != b){
			if(l >= 'a' && l <= 'z')
				cout << b + a << endl;
			else
				cout << b - a << endl;
		}else{
			cout << a * b << endl;
		}
	}

	return 0;
}
