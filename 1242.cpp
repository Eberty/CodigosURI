#include<iostream>
#include<stack>

using namespace std;

int main(){
	int tot;
	stack<char> pilha;
	string str;
	
	while(cin >> str){
		tot = 0;
		
		for(int i = 0; i < (int)str.size(); i++){
			if(!pilha.empty()){
				if((str[i] == 'F' && pilha.top() == 'C') || (str[i] == 'C' && pilha.top() == 'F') || 
					(str[i] == 'B' && pilha.top() == 'S') || (str[i] == 'S' && pilha.top() == 'B')){
					pilha.pop();
					tot++;
				}else
					pilha.push(str[i]);
			}else{
				pilha.push(str[i]);
			}
		}

		cout << tot << endl;
		
		while(!pilha.empty())
			pilha.pop();
	}	
	
	return 0;
}
