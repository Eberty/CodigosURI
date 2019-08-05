#include <iostream>

using namespace std;

int main(){
	double raio, n=3.14159;
	
	cin >> raio;
	cout.precision(4);
	cout << "A=" << fixed << n*raio*raio << endl;
    return 0;
}
