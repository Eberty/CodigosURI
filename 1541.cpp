#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, c;
	
	cin >> a;
	while (a != 0){
		cin >> b >> c;
		cout << (int) (sqrt((a*b)*(100.0/c))) << endl;
		cin >> a;
	}
	
	return 0;
}
