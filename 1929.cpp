#include <iostream>

using namespace std;


void ordena(int *v){
	int menor, aux;
	for (int i=0; i<4; i++){
		menor = i;
		for (int j=i+1; j<4; j++){
			if(v[j] < v[menor])
				menor = j;
		}
		aux = v[menor];
		v[menor] = v[i];
		v[i] = aux;
	}
}

int main() {
	int v[4];
	
	cin >> v[0] >> v[1] >> v[2] >> v[3];
	ordena(v);
	if (v[2] < v[1]+v[0] || v[3] < v[2]+v[1])
		cout << "S" << endl;
	else
		cout << "N" << endl;
	return 0;
}
