#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, v, aux;
	bool foi;

	cin >> n >> v;
	while(n){
		foi = false;

		for(int k = v; k > 0; k--){
			aux = 0;
			for(int i = k; i > 0; i--){
				for(int j = 0; j < i; j++){
					aux += i;
					if(aux == n)
						foi = true;
				}
			}
		}

		if(!foi)
			cout << "impossivel" << endl;
		else
			cout << "possivel" << endl;

		cin >> n >> v;
	}

	return 0;
}
