#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, tot, hash[10];

	while(scanf("%d %d", &n, &m) != EOF){
		tot = 0;

		for(int i = n; i <= m; i++){
			for(int j = 0; j < 10; j++)
				hash[j] = 0;

			int aux = i;
			while(aux > 0){
				if(hash[aux % 10] == 1){
					tot--;
					break;
				}
				hash[aux % 10] = 1;
				aux /= 10;
			}

			tot++;
		}

		printf("%d\n", tot);
	}

	return 0;
}
