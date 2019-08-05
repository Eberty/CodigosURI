#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, dif1, dif2, resp = 1;
	
	cin >> n;
	vector<int> vet(n);
	for (int i=0; i<n; i++)
		cin >> vet[i];
	
	if (n == 1)
		cout << resp << endl;
	else{
		dif1 = vet[0] - vet[1];
		for (int i=2; i<n; i++){
			dif2 = vet[i-1] - vet[i];
			if (dif2 != dif1){
				resp++;
				dif1 = dif2;
			}
		}
		cout << resp << endl;
	}
	
	return 0;
}
