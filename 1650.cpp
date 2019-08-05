#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m, c;

	scanf("%d %d %d", &n, &m, &c);
	while(n){
		cout << (((n - 7) * (m - 7) + c) / 2) << endl;
		scanf("%d %d %d", &n, &m, &c);
	}

	return 0;
}
