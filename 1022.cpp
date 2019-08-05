#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	return b == 0 ? abs(a) : abs(gcd(b, a % b));
}

int main() {
	int N1, N2, D1, D2, n, mdc;
	string barra, op;
	
	cin >> n;
	while(n--){
		cin >> N1 >> barra >> D1;
		cin >> op;
		cin >> N2 >> barra >> D2;
		
		if (op == "+") {
			mdc = gcd((N1*D2 + N2*D1),(D1*D2));
			cout << (N1*D2 + N2*D1) << "/" << (D1*D2) << " = " << (N1*D2 + N2*D1)/mdc << "/" << (D1*D2)/mdc << endl;
		} else if (op == "-") {
			mdc = gcd((N1*D2 - N2*D1),(D1*D2));
			cout << (N1*D2 - N2*D1) << "/" << (D1*D2) << " = " << (N1*D2 - N2*D1)/mdc << "/" << (D1*D2)/mdc << endl;
		} else if (op == "*") {
			mdc = gcd((N1*N2),(D1*D2));
			cout << (N1*N2) << "/" << (D1*D2) << " = " << (N1*N2)/mdc << "/" << (D1*D2)/mdc << endl;
		} else if (op == "/") {
			mdc = gcd((N1*D2),(N2*D1));
			cout << (N1*D2) << "/" << (N2*D1) << " = " << (N1*D2)/mdc << "/" << (N2*D1)/mdc << endl;
		}
	}
	
	return 0;
}
