#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, l, cm, cl, a, marcos[101][101], leo[101][101];
	
	while (cin >> n){
		cin >> m >> l;
		
		for(int i=0;i<m; i++){
			for (int j=0;j<n; j++){
				cin >> marcos[i][j];
			}
		}
		
		for(int i=0;i<l; i++){
			for (int j=0;j<n; j++){
				cin >> leo[i][j];
			}
		}
		
		cin >> cm >> cl >> a;
		if(leo[cl-1][a-1] > marcos[cm-1][a-1])
			cout << "Leonardo" << endl;
		else if (leo[cl-1][a-1] < marcos[cm-1][a-1])
			cout << "Marcos" << endl;
		else
			cout << "Empate" << endl;
	}
	
	return 0;
}
