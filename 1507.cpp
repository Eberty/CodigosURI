#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n,q;
	string s, r;

	cin >> n;
	cin.ignore();

	for (int i=0; i<n; i++){
		getline(cin, s);
		cin >> q;
		cin.ignore();
		for (int j=0; j<q; j++){
			getline(cin, r);
			queue <char> fila;

			for(int k=0; k<r.length(); k++)
				fila.push(r[k]);

			int k = 0;
			while (!fila.empty() && k!=s.length() ){
				if (fila.front() == s[k])
					fila.pop();
				k++;
			}
			if (fila.empty())
				cout << "Yes" << endl;
			else
				cout << "No" <<endl;
		}
	}
	
	return 0;
}
