#include <bits/stdc++.h>

using namespace std;

int main() {
	int l, d, k, p, qtd=0;
	cin >> l >> d >> k >> p;
	for (int i=d; i<=l; i+=d)
		qtd++;
	cout << (l*k) + (qtd*p) << endl;
	return 0;
}
