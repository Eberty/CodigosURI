#include <iostream>

using namespace std;

int main() {
	unsigned long long int num;
	cin >> num;
	
	while(num > 0){
		cout << num%10;
		num/=10;
	}
	cout << endl;	

	return 0;
}
