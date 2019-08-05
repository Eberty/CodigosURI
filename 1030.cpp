#include <bits/stdc++.h>

using namespace std;

int josephus(int n,int k) {
	if(n==1)
		return 1;
	return ((josephus(n-1, k) + k-1) % n) + 1;
}

int main() {
	int caso,n,k,i;
	while(cin >> caso){
		for(i=1; i <= caso; i++){
			scanf("%d %d",&n,&k);
			int tmp = josephus(n,k);
			printf("Case %d: %d\n", i, tmp);
		}
	}
	return 0;
}
