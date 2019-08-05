#include <bits/stdc++.h>

using namespace std;


int main() {
	unsigned long long int n, p, k, aux, i;
	
	cin >> n;
	for (k=0; k<n; k++){
		cin >> p;
		aux = false;
		
		if (p%2 == 0 || p <= 1){
			aux = true;
		}else{
			for (i=3; i*i<=p; i+=2){
				if (p%i == 0){
					aux = true;
					break;
				}
			}
		}

		if (!aux || p == 2)
			printf("Prime\n");
		else
			printf("Not Prime\n");
	}
	
	return 0;
}
