#include <iostream>

using namespace std;

int main(){
	double A, B;
	
	cin >> A >> B;
	cout.precision(5);
	cout << "MEDIA = " << fixed << (A*3.5 + B*7.5)/11.0 << endl;
	
    return 0;
}
