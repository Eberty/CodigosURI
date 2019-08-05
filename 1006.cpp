#include <iostream>

using namespace std;

int main(){
	double A, B, C;
	
	cin >> A >> B >> C;
	cout.precision(1);
	cout << "MEDIA = " << fixed << (A*2 + B*3 + C*5)/10.0 << endl;
	
    return 0;
}
