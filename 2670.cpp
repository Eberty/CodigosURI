#include<bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c;
	int tot1, tot2, tot3, ganha;

	tot1 = tot2 = tot3 = ganha = 0;

	cin >> a >> b >> c;

	tot1 = b + (c * 2);
	tot1 *= 2;
	tot2 = a + c;
	tot2 *= 2;
	tot3 = (a * 2) + b;
	tot3 *= 2;

	ganha = tot1;

	if(ganha >= tot2)
		ganha = tot2;
	if(ganha >= tot3)
		ganha = tot3;

	cout << ganha << endl;

	return 0;
}
