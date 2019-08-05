#include <iostream>

using namespace std;

void sort(int *v){
	int i, j, menor, aux;
	
	for (i=0; i<3; i++){
		menor = i;
		for (j=i; j<3; j++){
			if (v[j] < v[menor])
				menor = j;
		}
		aux = v[i];
		v[i] = v[menor];
		v[menor] = aux;
	}
	
}


int main() {
	int in[3], out[3];
	
	for (int i=0; i<3; i++){
		cin >> in[i];
		out[i] = in[i];
	}
	
	sort(out);
	
	for (int i=0; i<3; i++)
		cout << out[i] << endl;
	
	cout << endl;
	
	for (int i=0; i<3; i++)
		cout << in[i] << endl;
	
    return 0;
}
