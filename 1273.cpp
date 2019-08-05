#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned int n, maior;
	vector<string> vet;
	string str;
	bool primeiro = true;
	
	while (cin >> n && n){
		maior = 0;
		vet.clear();
		if(!primeiro)
			cout << endl;
		for (unsigned int i=0; i<n; i++){
			cin >> str;
			vet.push_back(str);
			if (str.size() > maior)
				maior = str.size();
		}
		for (unsigned int i=0; i<n; i++){
			for (unsigned int j=0; j< maior -vet[i].size(); j++)
				cout << " ";
			cout << vet[i] << endl;
		}
		primeiro = false;
	}
	
	return 0;
}
