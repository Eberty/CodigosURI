#include<iostream>
#include<queue>

using namespace std;

int main(){
	int n, rem, cont, tam;
	deque<int> fila;
	deque<int>::iterator it;
	cin >> n;
	while(n > 0){
	
		rem = cont = 0;
		fila.clear();
		
		for(int i = 1; i <= n; i++)
			fila.push_front(i);
		
		cout << "Discarded cards: ";
		rem = fila.back();
		fila.pop_back();
		cont++;
		cout << rem;
			
		tam = n;
		while(tam >= 3){
			rem = fila.back();
			fila.pop_back();
			if(cont % 2 == 0){
				cout << ", " << rem;
				tam--;
			}else
				fila.push_front(rem);
				
			cont++;
		}
		rem = fila.back();
		cout << endl << "Remaining card: " << rem << endl;
		
		cin >> n;
	}
	
	return 0;
}
