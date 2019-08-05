#include<bits/stdc++.h>

using namespace std;

int main(){
	int maior, n;
	vector<int> alf;
	string car;
	char c;

	scanf("%d ", &n);
	while(n--){
		alf.assign(255, 0);
		maior = 0;
		getline(cin, car);
		for(int i = 0; i < car.size(); i++){
			if(isalpha(car[i])){
				c = tolower(car[i]);

				alf[c]++;
				if(alf[c] > maior)
					maior = alf[c];
			}
		}

		for(int i = 'a'; i <= 'z'; i++){
			if(alf[i] == maior)
				printf("%c", i);
		}
		printf("\n");
	}

	return 0;
}
