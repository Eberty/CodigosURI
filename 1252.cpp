#include<bits/stdc++.h> 

#define pad 100000

using namespace std;
int m, n, aux, menor;
vector<vector<int> > numsP, numsI;

int main(){

	cin >> n >> m;
	while(n){
		numsP.assign(m+pad, vector<int>());
		numsI.assign(m+pad, vector<int>());
		menor = 10000000;

		for (int i = 0 ; i < n; i++){
			cin >> aux;

			if(aux % 2 == 0){
				numsP[(aux % m) + pad].push_back(aux);
			}else{
				numsI[(aux % m) + pad].push_back(aux);
			}

			menor = min(menor, (aux % m));
		}

		cout << n << " " << m << endl;

		for(int i = menor+pad; i < m+pad; i++){

			sort(numsP[i].begin(), numsP[i].end());
			sort(numsI[i].begin(), numsI[i].end(), greater<int>());

			for(auto &j : numsI[i])
				cout << j << endl;

			for(auto &j : numsP[i])
				cout << j << endl;

			numsP[i].clear();
			numsI[i].clear();
		}

		cin >> n >> m;
	}

cout << "0 0" << endl;

return 0;
}


//ordena pelo modulo 
//caso de empate prioridade numero impar 
// ambos impar ou par pegar o maior 
