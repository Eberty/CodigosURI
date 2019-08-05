#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, l, v, s, aux;
	vector<int> vet;
	
	scanf("%d", &n);
	while(n--){
		s = 0;
		scanf("%d", &l);
		for (int i=0; i<l; i++){
			scanf("%d", &v);
			vet.push_back(v);
		}
		
		for (int i=0; i<l; i++){
			for (int j=i; j<l; j++){
				if (vet[i] > vet[j]){
					aux = vet[i];
					vet[i] = vet[j];
					vet[j] = aux;
					s++;
				}
			}
		}
		
		printf("Optimal train swapping takes %d swaps.\n", s);
		vet.clear();
	}
	
	return 0;
}
