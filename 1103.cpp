#include <bits/stdc++.h>

using namespace std;

int main() {
	int h1, m1, h2, m2;
	int inicio, fim;
	
	cin >> h1 >> m1 >> h2 >> m2;
	while (h1 || m1 || h2 || m2){
		if(h1 == 0)
			inicio = 24*60 + m1;
		else
			inicio = h1*60 + m1;
		
		if (h2 == 0)
			fim = 24*60 + m2;
		else
			fim = h2*60 + m2;

		if(fim > inicio)
			printf("%d\n", fim-inicio);
		else
			printf("%d\n", 24*60 - (inicio-fim));
			
		cin >> h1 >> m1 >> h2 >> m2;
	}
	
	return 0;
}
