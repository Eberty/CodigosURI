#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	int res;
	
	while (cin >> str && str[0]!= '-'){
		res = stoi(str,nullptr,0);
		if (str[1] == 'x')
			printf("%d\n", res);
		else
			printf("0x%X\n", res);
			
	}
	
	return 0;
}
