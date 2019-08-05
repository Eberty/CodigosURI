#include<bits/stdc++.h>

using namespace std;

int mdc(int x, int y, int z){
	int m, maior, menor, resto;

	maior = max(x, y);
	menor = min(x, y);

	resto = maior % menor;
	while(resto != 0){
		maior = menor;
		menor = resto;
		resto = maior % menor;
	}

	m = menor;
	maior = max(m, z);
	menor = min(m, z);
	resto = maior % menor;
	while(resto != 0){
		maior = menor;
		menor = resto;
		resto = maior % menor;
	}

	return menor;
}

int main(){
	int x, y, z;

	while(scanf("%d %d %d", &x, &y, &z) != EOF){
		printf("tripla");

		if(x*x == (y*y) + (z*z) || y*y == (x*x) + (z*z) || z*z == (y*y) + (x*x)){
			printf(" pitagorica");

			if(mdc(x, y, z) == 1){
				printf(" primitiva");
			}
		}
		printf("\n");
	}

	return 0;
}
