#include<bits/stdc++.h>

using namespace std;

int main(){
	string pal;
	bool eh;

	while(getline(cin, pal)){
		if(pal[0] == '*')
			break;

		eh = true;
		int tam = pal.size();
		for(int i = 1; i < tam; i++){
			if(pal[i-1] == ' '){
				if(tolower(pal[i]) != tolower(pal[0])){
					eh = false;
					break;
				}
			}
		}

		printf("%c\n", (eh) ? 'Y' : 'N');
	}

	return 0;
}
