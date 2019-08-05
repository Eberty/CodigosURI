#include <iostream>

using namespace std;

int main() {
	int num;
	string d1[]={"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
		   d2[]={"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
		   d3[]={"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
	cin >> num;
	cout << d3[(num/100)%10] << d2[(num/10)%10] << d1[num%10] << endl;
	return 0;
}
