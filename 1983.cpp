#include <iostream>

using namespace std;

typedef struct{
	int mat;
	double nota;
}aluno;

int main() {
	aluno *a;
	int n, venc=0;
	cin >> n;
	
	a = new aluno[n];

	
	for (int i=0; i<n; i++){
		cin >> a[i].mat >> a[i].nota;
		if (a[i].nota > a[venc].nota)
			venc=i;
	}
	
	cout.precision(1);
	cout << fixed;
	if(a[venc].nota >= 8.0){
		cout << a[venc].mat << endl;
	}else{
		cout << "Minimum note not reached" << endl;
	}
	
	delete [] a;
	
	return 0;
}
