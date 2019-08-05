#include <iostream>

using namespace std;

int main() {
	unsigned int caso=0, pos, qtd=0, i, j, posfinal;
	string n1, n2;
	
	while (cin >> n1 >> n2){
		caso++;
		qtd=0;

		for (i=0; i<n2.size(); i++){
			pos=i;
			for (j=0; j<n1.size(); j++){
				if (n1[j] == n2[pos]){
					pos++;
				} else{
					break;
				}
			}
			if(j == n1.size()){
				posfinal=i;
				qtd++;
			}
		}
		
		cout << "Caso #" << caso << ":" << endl;
		if (qtd!=0){
			cout << "Qtd.Subsequencias: " << qtd << endl;
			cout << "Pos: " << posfinal+1 << endl;
		} else{
			cout << "Nao existe subsequencia" << endl;
		}
		cout << endl;
	}
	
	return 0;
}
