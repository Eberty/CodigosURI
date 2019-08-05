#include <bits/stdc++.h>

using namespace std;

int main() {
	int v[12], n, t;
	
	scanf("%d", &t);
	for (int i=0; i<t; i++){
		scanf("%d ", &n);
		for (int j=0; j<n; j++)
			scanf("%d ", &v[j]);
		printf("Case %d: %d\n", i+1, v[n/2]);
	}
	return 0;
}
