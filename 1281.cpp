#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, p, qtd, i;
	string str;
	double preco, total;
	pair <string, double> prod;
	vector <pair <string, double>> vetor;
	
	cin >> n;
	while(n--){
		cin >> m;
		for (i=0; i<m; i++){
			cin >> str >> preco;
			prod = make_pair(str, preco);
			vetor.push_back(prod);
		}
		cin >> p;
		total = 0;
		for (int j=0; j<p; j++){
			cin >> str >> qtd;
			for (i=0; i<vetor.size(); i++){
				if (vetor[i].first == str)
					break;
			}
			total += (vetor[i].second * qtd);
		}
		printf("R$ %.2f\n", total);
		vetor.clear();
	}
	
	return 0;
}
