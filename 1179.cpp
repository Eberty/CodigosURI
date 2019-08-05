#include <iostream>

using namespace std;

void imprimevetor(int *, int *);

int main() {
	int  x, par[5], impar[5], vp=0, vi=0;
	
	for (int i=0; i<15; i++){
		cin >> x;
		
		if (x%2==0){
			par[vp] = x;
			vp++;
		} else {
			impar[vi] = x;
			vi++;
		}
		
		if(vi==5)
			imprimevetor(impar, &vi);
		if(vp==5)
			imprimevetor(par, &vp);
	}

	imprimevetor(impar, &vi);
	imprimevetor(par, &vp);
	
	return 0;
}

void imprimevetor(int *v, int *qtd){
	string tipo;
	if (v[0]%2==0)
		tipo = "par";
	else
		tipo = "impar";
		
	for(int i=0; i<*qtd; i++)
		cout << tipo << "[" << i << "] = " << v[i] << endl;
		
	*qtd = 0;
}
