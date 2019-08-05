#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, i, j;
	string a, b;
	bool igual;
	
	cin >> n;
	while (n--){
		igual = true;
		cin >> a >> b;
		for (i=a.size()-1, j=b.size()-1; i>=0 && j>=0 && igual; i--, j--){
			if (a[i] != b[j])
				igual = false;
		}
		if (igual && j==-1)
			cout << "encaixa" << endl;
		else
			cout << "nao encaixa" << endl;
	}
	return 0;
}
