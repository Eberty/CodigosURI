#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k, aux;
	vector<int> v;

	cin >> n >> k;

	for(int i = 0; i < n; i++){
		cin >> aux;
		v.push_back(aux);
	}

	sort(v.begin(), v.end(), greater<int>());

	while(v[k] == v[k-1]){
		k++;
	}

	cout << k << endl;

	return 0;
}
