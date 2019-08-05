#include<bits/stdc++.h>

using namespace std;

int main(){
	int m, n, doce, sum;
	int ant1, ant2, aux;
	int ant11, ant22;
	vector<int> vet;

	scanf("%d %d ", &m, &n);
	while(m){
		vet.clear();

		for(int i = 0; i < m; i++){
			if(n == 2){
				scanf("%d %d", &ant2, &ant1);
				vet.push_back(max(ant1, ant2));
			}else if(n == 1){
				scanf("%d", &ant1);
				vet.push_back(ant1);
			}else{
				scanf("%d %d", &ant2, &ant1);
				ant11 = ant1; ant22 = ant2;
				ant1 = ant2 = max(ant1, ant2);
				for(int j = 2; j < n; j++){
					scanf("%d", &doce);
					aux = ant1;
					ant1 = max(doce + ant22, ant11);
					ant2 = aux;

					ant11 = ant1; ant22 = ant2;
				}
				vet.push_back(ant1);
			}
		}


		if(m == 2){
			printf("%d\n", max(vet[1], vet[0]));
		}else if(m == 1)
			printf("%d\n", vet[0]);
		else{
			ant2 = vet[0]; ant1 = vet[1];
			ant11 = ant1; ant22 = ant2;
			ant1 = ant2 = max(ant1, ant2);
			for(int j = 2; j < m; j++){
				doce = vet[j];
				aux = ant1;
				ant1 = max(doce + ant22, ant11);
				ant2 = aux;

				ant11 = ant1; ant22 = ant2;
			}


			printf("%d\n", ant1);
		}


		scanf("%d %d ", &m, &n);
	}

	return 0;
}
