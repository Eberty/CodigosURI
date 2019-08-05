#include <bits/stdc++.h>

using namespace std;

int main() {
	string nome;
	int qtd = 0, tot = 0, num;
	double res;
	
	while (getline(cin, nome)){
		cin >> num;
		qtd++;
		tot += num;
		cin.ignore();
	}
	res = (double) tot / (double)qtd;
	printf("%.1f\n", res);
	return 0;
}
