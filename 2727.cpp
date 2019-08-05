#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, pontos, espaco;
	string str;
	
	while (cin >> n) {
		cin.ignore();
		while(n--) {
			getline(cin,str);
			pontos = espaco = 0;
			for(size_t i=0; i<str.length(); i++) {
				if(str[i]==' ')
					espaco++;
				if (!espaco)
					pontos++;
			}
			printf("%c\n", (3 * espaco) + 'a' - 1 + pontos);
		}
	}
return 0;
}
