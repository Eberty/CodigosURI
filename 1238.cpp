#include <bits/stdc++.h>

using namespace std;

int main() {
	string str1, str2;
	unsigned int menor, n;
	
	cin >> n;
	for (unsigned int j=0; j<n; j++){
		cin >> str1 >> str2;
		menor = min(str1.size(), str2.size());
		for (int i=0; i<menor; i++){
			printf("%c%c", str1[i], str2[i]);
		}
		if (menor == str1.size()){
			for (int i=menor; i<str2.size(); i++){
				printf("%c", str2[i]);
			}
		} else {
			for (int i=menor; i<str1.size(); i++){
				printf("%c", str1[i]);
			}		
		}
		printf("\n");
	}
	
	return 0;
}
