#include <bits/stdc++.h>

using namespace std;

int main() {
	int x[5], y[5], aux = 0;
	
	for (int i=0; i<5; i++)
		scanf("%d", &x[i]);
	for (int i=0; i<5; i++)
		scanf("%d", &y[i]);
	for (int i=0; i<5; i++)
		aux+=(!(x[i]==y[i]));
		
	if(aux == 5)
		printf("Y\n");
	else
		printf("N\n");
	return 0;
}
