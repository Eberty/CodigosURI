#include <iostream>

using namespace std;

int main() {
	float renda, imp=0.0;
	
	cin >> renda;
	cout.precision(2);
	cout << fixed;
	
	if (renda <= 2000)
		cout << "Isento" << endl;
	else{
		renda -= 2000;
		if (renda <= 1000)
			imp += (renda * 0.08);
		else{
			imp += (1000 * 0.08);
			renda -= 1000;
			if (renda <= 1500)
				imp += (renda * 0.18);
			else{
				imp += (1500 * 0.18);
				renda -= 1500;
				imp += (renda * 0.28);
			}
		}
		
		cout << "R$ " << imp << endl;
	}
	
    return 0;
}
