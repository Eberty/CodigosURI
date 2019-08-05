#include<bits/stdc++.h>

#define INF 100000000

using namespace std;

int main(){
	int c, n, bola;
	pair<int, int> branca, aux;
	vector<float> bolas;

	scanf("%d", &c);
	while(c--){
		scanf("%d", &n);

		bolas.assign(n+1, INF);

		scanf("%d %d", &branca.first, &branca.second);
		for(int i = 1; i <= n; i++){
			scanf("%d %d", &aux.first, &aux.second);

			bolas[i] = sqrt( ((aux.first - branca.first) * (aux.first - branca.first)) + ((aux.second - branca.second) * (aux.second - branca.second)) );

			if(i == 1)
				bola = 1;
			else if(bolas[i] < bolas[bola])
				bola = i;
		}

		printf("%d\n", bola);
	}

	return 0;
}
