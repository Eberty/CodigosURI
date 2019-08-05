#include <iostream>

using namespace std;

int main() {
	string v[8] = {"---", "--*", "-*-", "-**", "*--", "*-*", "**-", "***"}, str;
	int soma=0;
	
	while(getline(cin, str)){
		if (str.compare("caw caw")==0){
			cout << soma << endl;
			soma = 0;
		}
		
		for (int i=0; i<8; i++){
			if (str.compare(v[i]) == 0){
				soma += i;
			}
		}
	}
	
	return 0;
}
