#include <bits/stdc++.h>

using namespace std;

int main() {
	for (int i=0; i<39; i++)
		printf("-");
	printf("\n");
	
	for (int j=0; j<5; j++){
		printf("|");
		for (int i=1; i<38; i++)
			printf(" ");
		printf("|\n");
	}
	
	for (int i=0; i<39; i++)
		printf("-");
	printf("\n");
	
	return 0;
}
