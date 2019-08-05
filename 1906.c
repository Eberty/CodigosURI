#include <stdio.h>
#include <stdlib.h>

long N, K, *proximo, *ehPossivel;

void dfs(long *proximo, long *ehPossivel, long i) {
	//Marco esse numero (indicado pelo proximo) como visitado
	ehPossivel[i] = -1;

	if( proximo[i] > N ){
		//Se esse o proximo resultante da Conjectura Collatz for maior do que minha maior tecla, nao é possivel fazer minha senha
		ehPossivel[i] = 1;
	} else {
		//Se o valor ehPossivel[i] ainda nao foi alterado, continuo com o calculo se é possivel atingi-lo
		if( !ehPossivel[ proximo[i] ] )
			dfs(proximo, ehPossivel, proximo[i]);
		//Tamanho da quantidade de digitos da senha dado o incio pelo proximo numero + (1 ou 0) se eh possivel atingir um limite 
		ehPossivel[i] = ehPossivel[ proximo[i] ] + (ehPossivel[ proximo[i] ] != -1);
	}
}

int main() {
	long i, ans = 0;
	scanf("%ld %ld", &N, &K);
	
	//Alocando espaco para o vetor que dado o indice indica o proximo numero da sequncia
	proximo = malloc((N+1) * sizeof(long));
	for(i = 1; i <= N; i++){
		if (i%2 == 0)
			proximo[i] = i/2;
		else
			proximo[i] = i*3 + 1;
	}
	
	//Alocando espaco para o vetor que indica a possibiidade de sequancia comecando com o numero do indice i
	ehPossivel = malloc((N+1) * sizeof(long));
	for(i = 0; i <= N; i++){
		ehPossivel[i] = 0;
	}
	for(i = 1; i <= N; i++){
		//Se o valor ehPossivel[i] ainda nao foi alterado, fazer o calculo se é possivel atingi-lo
		if(!ehPossivel[i])
			dfs(proximo, ehPossivel, i);
	}
	
	//Se (ehPossivel[i] >= K || ehPossivel[i] == -1), é possivel determinar uma nova senha
	for(i = 1; i <= N; i++){
		if (ehPossivel[i] >= K || ehPossivel[i] == -1)
			ans++;
	}
	
	printf("%ld\n", ans);
	return 0;
}
