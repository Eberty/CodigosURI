#include <bits/stdc++.h>

using namespace std;

int main() {
	int r, b, c, n, x, y;
	
	cin >> n;
	while (n--){
		cin >> x >> y;
		r = ((3*x)*(3*x)) + (y*y);
		b = (2*(x*x)) + ((5*y)*(5*y));
		c = (-100*x) + (y*y*y);
		if (c > r && c > b)
			printf("Carlos ganhou\n");
		else if (b > r && b> c)
			printf("Beto ganhou\n");
		else 
			printf("Rafael ganhou\n");
	}
	return 0;
}
