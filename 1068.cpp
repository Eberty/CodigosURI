#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	int aux;
	bool flag;
	
	while (cin >> str){
		aux = 0;
		flag = true;
		for(int i=0; i < str.size();i++){
			if (str[i] == '(')
				aux++;
			else if (str[i] == ')')
				aux--;
			
			if(aux<0)
				flag = false;
		}
		if (flag == true && aux == 0)
			printf("correct\n");
		else
			printf("incorrect\n");
	}
	return 0;
}
