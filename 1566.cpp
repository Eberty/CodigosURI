#include <bits/stdc++.h>

using namespace std;

int main() {
	int nc, n;
	
	scanf("%d", &nc);
	while (nc--){
		scanf("%d", &n);
		vector<int> vet(n);
		
		for (int i=0; i<n; i++)
			scanf("%d", &vet[i]);
			
		sort(vet.begin(), vet.end());
		
		for (int i=0; i<n-1; i++)
			printf("%d ", vet[i]);
		printf("%d\n", vet[n-1]);
	}
	
	return 0;
}
