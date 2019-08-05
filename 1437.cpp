#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, pos;
	string str;
	
	cin >> n;
	while (n){
		pos = 0;
		cin >> str;
		
		for(int i=0; i<n; i++){
			if (str[i] == 'D')
				pos = (pos+1)%4;
			else
				pos--;
			if (pos < 0)
				pos = 3;
		}
		
		if (pos == 0)
			printf("N\n");
		else if (pos == 1)
			printf("L\n");
		else if (pos == 2)
			printf("S\n");
		else
			printf("O\n");
		
		cin >> n;
	}
	
	return 0;
}
