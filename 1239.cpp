#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	bool neg, ita;
	
	while(getline(cin, str)){
		neg = ita = false;
		for (size_t i=0; i<str.size(); i++){
			if (str[i]=='_'){
				if (ita) printf("</i>");
				else printf("<i>");
				ita = !ita;
			} else if (str[i]=='*') {
				if(neg) printf("</b>");
				else printf("<b>");
				neg = !neg;
			} else {
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
