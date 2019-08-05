#include <bits/stdc++.h>
#define menor(a,b) a<b ? a : b

using namespace std;

int main() {
	int n, m;
	char l;
	
	while (cin >> n){
		int qtd = 0;
		int v1[66] = { 0 }, v2[66] = { 0 };
		
		for (int i=0; i<n; i++){
			cin >> m >> l;
			if (l == 'D'){
				v1[m]++;
			} else {
				v2[m]++;
			}
		}
		
		for (int i=29; i<62; i++){
			qtd += menor(v1[i], v2[i]);
		}
		printf("%d\n", qtd);
	}
	
	return 0;
}
