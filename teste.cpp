#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[]){
	/*
	size_t n=10;
	size_t vet[n];
	*/
	size_t tam=0;
	size_t *v;
	std::srand(std::time(0));
	//ordenacao de valores do vetor com alocacao dinamica

	std::cout<<"digite o tamanho"<<std::endl;
	std::cin>>tam;

	//aloca a memoria
	v=(size_t*) malloc(tam*sizeof(size_t)); 

	//preenche com valores aleatorios
	for(size_t i=0; i<tam; i++){
		v[i]=rand()%1000;
	}	

	//imprime os valores antes da ordenacao
	for(size_t i=0; i<tam;i++){
		std::cout<<v[i]<<std::endl;
	}
	std::cout<<"^ antes da ordenação"<<std::endl;
	std::cout<<" "<<std::endl;

	//faz a ordenação
	for(size_t i=0; i<tam-1;i++){
		for(size_t j=i+1;j<tam;j++){
			if (v[i]>v[j]){
				int aux;
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}

	//imprime depois da ordenacao
	for(size_t i=0; i<tam;i++){
		std::cout<<v[i]<<std::endl;
	}
	std::cout<<"^ depois da ordenação"<<std::endl;
	std::cout<<" "<<std::endl;


	/*
	// ordenacao de valores do vetor sem alocacao dinamica 
	for(size_t i=0; i<n; i++){
		vet[i]=rand()%100;
	}


	for(size_t i=0; i<n;i++){
		std::cout<<vet[i]<<std::endl;
	}
	std::cout<<"^ antes da ordenação"<<std::endl;
	std::cout<<" "<<std::endl;

	for(size_t i=0; i<n-1;i++){
		for(size_t j=i+1;j<n;j++){
			if (vet[i]>vet[j]){
				int aux;
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}

	for(size_t i=0; i<n;i++){
		std::cout<<vet[i]<<std::endl;
	}
	std::cout<<"^ depois da ordenação"<<std::endl;
	std::cout<<" "<<std::endl;
	*/

	void free(void *v);
return 0;
}