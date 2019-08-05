#include <bits/stdc++.h>

using namespace std;

int mdc (int x, int y){
    int resto, a, b;
    a = max(x,y);
    b = min(x,y);
    do {
        resto = a % b;
        a = b;
        b = resto;
    } while (resto != 0);
    return a;
}

int main() {
	int n, x, y;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> x >> y;
		printf("%d\n", mdc(x, y));
	}
	return 0;
}
