#include <bits/stdc++.h>

using namespace std;

int main() {
	string res[9] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
	long long int a, soma=-1;
	for(int i=0; i<9; i++) {
		scanf("%lld", &a);
		soma += a;
	}
	cout << res[soma % 9] << endl;
	return 0;
}
