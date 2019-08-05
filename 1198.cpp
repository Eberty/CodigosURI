#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long int h, op;
	while (scanf("%llu %llu", &h, &op) != EOF){
		printf("%llu\n", op>h ? op-h: h-op);
	}
	return 0;
}
