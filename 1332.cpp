#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	int n;
	
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> str;
		if (str.size() == 5) 
			printf("3\n");
		else if ((str[0] == 'o' && str[1] =='n') || (str[0] == 'o' && str[2] == 'e') || (str[1] == 'n' && str[2] == 'e'))
			printf("1\n");
		else
			printf("2\n");
	}
	
	return 0;
}
