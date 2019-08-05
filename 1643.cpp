#include <bits/stdc++.h>

using namespace std;

int main() {
	int fib[25], t, x, res;
	
	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 2;
	for(int i=3; i<25; i++)
		fib[i] = fib[i-1] + fib[i-2];

	scanf("%d", &t);
	while(t--) {
		scanf("%d", &x);

		vector<int> pos;
		for(int i=24; i>=1; i--) {
			if(x - fib[i] >= 0) {
				pos.push_back(i-1);
				x -= fib[i];
			}
		}
		
		res=0;
		for(size_t i=0; i<pos.size(); i++)
			res += fib[ pos[i] ];

		printf("%d\n", res);
	}
	return 0;
}
