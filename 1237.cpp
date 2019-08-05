#include <bits/stdc++.h>

using namespace std;

int main(){
	string s1, s2;
	int maior, aux;

	while(getline(cin, s1)){
		getline(cin, s2);

		maior = 0;
		for(int i = 0; i < s1.size(); i++){
			for(int j = 0; j < s2.size(); j++){
				aux = 0;
				int auxJ = j;
				int auxI = i;
				if(s1[i] == s2[j]){
					while(s1[i] == s2[j] && (i < s1.size() && j < s2.size())){
						aux++;
						i++; j++;
					}
				}
				i = auxI;
				j = auxJ;				

				maior = max(maior, aux);
			}
		}

		printf("%d\n", maior);
	}

	return 0;
}
