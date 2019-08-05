#include<bits/stdc++.h>

using namespace std;

pair<int, int> vet[11];
int p, s, n, t[3], d[2], anda, jog, aux;

int main(){
	scanf("%d %d ", &p, &s);
	while(p != 0){
		jog = 0;
		aux = -1;
		for(int i = 0; i < 11; i++)
			vet[i] = make_pair(0, 0);

		for(int i = 0; i < 3; i++)
			scanf("%d ", &t[i]);

		scanf("%d ", &n);
		for(int i = 0; i < n; i++){
			if(vet[jog].second == 1){
				vet[jog].second = 0;
				i--;
			}else{
				scanf("%d %d ", &d[0], &d[1]);
				anda = d[0] + d[1];

				vet[jog].first += anda;
				if(vet[jog].first == t[0] || vet[jog].first == t[1] || vet[jog].first == t[2])
					vet[jog].second = 1;

				if(vet[jog].first > s && aux == -1)
					aux = jog;
			}
			jog = (jog + 1) % p;
		}

		printf("%d\n", aux + 1);

		scanf("%d %d ", &p, &s);
	}

	return 0;
}
