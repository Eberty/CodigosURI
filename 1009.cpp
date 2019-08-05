#include <iostream>

using namespace std;

int main() {
	string nome;
	double sal, mont;
	
	cin >> nome >> sal >> mont;
	cout.precision(2);
	cout << "TOTAL = R$ " << fixed << (sal+(mont*0.15)) << endl;
	
    return 0;
}
