#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k, i, posicao, instancia = 1; //Valores inteiros para leitura e posicaoiliares
	string nome; //Nome para leitura
	vector<string> nomes; //Lista de nomes
	map<string, int> nomesEmOrdem; //Lista de nomes em ordem: map funciona como hash, ou seja, string indica a posicao onde esta sendo guardado e int o valor que repesnta a posicao do aluno na fila
	
	cin >> n >> k; //Leitura
	while(n != 0) {
		//Limpando lista de alunos
		nomes.clear();
		nomesEmOrdem.clear();
		
		//Leitura dos alunos e insercao dos alunos na lista
		for(i = 0; i < n; i++) {
			cin >> nome;
			nomes.push_back(nome);
			nomesEmOrdem[nome] = i;
		}

		//Colocando os alunos em ordem de acordo com a regra imposta na questao
		posicao = 0; //Indica a posicao no vetor que estou alterando agora
		while(!nomesEmOrdem.empty() && k > 0) { //Acabo de duas maneiras: ou eu coloquei todos em ordem, ou fiz o numero maximo de trocas
			for(auto& it : nomesEmOrdem){ //it é um interador que se incrementa automaticamente: significa, ele vai percorrer todos objetos de nomesEmOrdem, um a um
				if (it.second - posicao <= k) { //it.second = localizacao do aluno (na ordem) que deveria estar naquela posicao, se for possivel trocar, realizo a toca
					k -= (it.second - posicao);//Reduzindo o numero de trocas que ainda restam ser feitas
					
					//Trocando...
					for(i = it.second; i > posicao; i--) {
						nomes[i] = nomes[i-1]; //colocando o nome em ordem
						nomesEmOrdem[nomes[i-1]]++; //indicando a nova posivao dele
					}

					nomes[posicao++] = it.first; //Pronto, o cara daqula poisao esta com seu nome devidamnte certo. Posicao++ indica nova posicao a ser verificada.
					nomesEmOrdem.erase(it.first); //Esse cara já estar na ordem, nao preciso mais dele
					break;
				}
			}
		}
		
		//Resultado:
		cout << "Instancia " << instancia << endl;
		for(i = 0; i < n; i++)
			cout << nomes[i] << ' ';
		cout << endl << endl;
		
		//Preparando proxima iteracao:
		instancia++;
		cin >> n >> k;
	}
}
