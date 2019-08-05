#include<bits/stdc++.h>

using namespace std;

long long foo(long long n, long long k, long long x){
	if(n - (k * x) < 1)
		return 1;

	return (n - (k * x)) * foo(n, k, x + 1);
}

int main(){
	long long t, n, k;
	string aux;

	cin >> t;
	while(t--){
		k = 0;
		cin >> aux;

		for(int i = 0; aux[i] != '\0'; i++)
			if(aux[i] == '!')
				k++;
		
		cout << foo(atoi(aux.c_str()), k, 0) << endl;
	}

	return 0;
}
