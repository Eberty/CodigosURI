#include <iostream>

using namespace std;

int main() {
	double v[6];
	int n=0;
	
	for (int i=0; i<6; i++){
		cin >> v[i];
		if (v[i]>0)
			n++;
	}
	cout << n << " valores positivos" << endl;
    return 0;
}
