#include <iostream>

using namespace std;

int main() {
	double v[6], med=0;
	int n=0;
	
	for (int i=0; i<6; i++){
		cin >> v[i];
		if (v[i]>0){
			n++;
			med += v[i];
		}
	}
	cout.precision(1);
	cout << fixed;
	
	cout << n << " valores positivos" << endl;
	cout << med/n*1.0 << endl;
    return 0;
}
