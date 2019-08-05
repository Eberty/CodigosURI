#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, i, j, aux;
	string a, b;
	
	cin >> n;
	while (n--){
		aux = 0;
		cin >> a >> b;
		
		for (i=a.size()-1, j=b.size()-1; i>=0 && j>=0; i--, j--){
			if(a[i] == b[j]){
				aux++;
			}
		}
		
		if(aux == b.size())
			printf("encaixa\n");
		else
			printf("nao encaixa\n");
	}
	
	return 0;
}
