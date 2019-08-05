#include <bits/stdc++.h>

using namespace std;

typedef struct {
	int x, y, z;
	char resp;
} t_exp;

int main() {
	int t, e;
	string n;
	char r;
	
	while (cin >> t){
		vector<t_exp> exp(t);
		vector<string> nomes;
		for (int i=0; i<t; i++){
			cin >> exp[i].x >> exp[i].y >> exp[i].resp >> exp[i].z;
			if (exp[i].x + exp[i].y == exp[i].z)
				exp[i].resp = '+';
			else if (exp[i].x - exp[i].y == exp[i].z)
				exp[i].resp = '-';
			else if (exp[i].x * exp[i].y == exp[i].z)
				exp[i].resp = '*';
			else
				exp[i].resp = 'I';
		}
		
		for (int i=0; i<t; i++){
			cin >> n >> e >> r;
			if (exp[--e].resp != r){
				nomes.push_back(n);
			}
		}
		
		if (nomes.size() == (size_t)t)
			cout << "None Shall Pass!" << endl;
		else if (nomes.size() == 0)
			cout << "You Shall All Pass!" << endl;
		else{
			sort(nomes.begin(), nomes.end());
			size_t i;
			for (i=0; i<nomes.size()-1; i++){
				cout << nomes[i] << " ";
			}
			cout << nomes[i] << endl;
		}
		
	}
	
	return 0;
}
