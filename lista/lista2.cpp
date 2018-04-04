	#include<iostream>
	using namespace std;

	class Lista
	{
			private:
			int tamanho, qtd;
			//int *i[];
					
			public:
				Lista();
				void inserir(int[], int, int); // recebe o vetor e seu tamanho
				void mostra(int[]);
				int busca(int[], int);
				void remover(int[], int);
				void setTamanho(int);
				int getTamanho();
	
	};

	Lista::Lista()
	{
		qtd = 0;
	}

	void Lista::setTamanho(int n)
	{
		tamanho = n;
	}

	int Lista::getTamanho()
	{
		return tamanho;
	}

	void Lista::inserir(int i[], int num, int tam)
	{
		
		if(tam == qtd)
		{
				cout << "ERRO! Lista cheia" << endl;
		}
		else
		{
			i[qtd] = num;
			qtd++;
		}
	}
	
	int Lista::busca(int i[], int num) // BUSCA VALOR
	{
		if(qtd == 0)
		{
			cout << "Lista vazia" << endl;
			return -1;
		}
		else
		{
				for(int j = 0; j < qtd; j++)
				{
					if(i[j] == num)
					{
						return j; // retorna a posicao do dado!!!
					}
				}
		}
		return -1; // Indice impossivel. 
	}
	
	void Lista::remover(int i[], int num) // REMOVE VALOR
	{
		if(qtd == 0)
		{
			cout << "Lista vazia"<<endl;
			return; //abandona a funcao!!
		}
		
		int posicao = busca(i, num);
		
		if(posicao == -1)
		{
			cout << "ERRO. Valor não encontraddo"<<endl;
			return; //abandona a funcao!! 
		}
		
		i[posicao] = i[qtd+1]; // copia o ultimo para a posicao do valor a ser removido
		qtd--;
	
		
	
	}
	
	void Lista::mostra(int i[])
	{
		int aux = 0;
		
		for(int j = 0; j < qtd; j++) // Organiza a saida!!!
		{
			if(i[j] > i [j + 1])
			{
				aux = i[j + 1];
				i[j + 1] = i[j];
				i[j] = aux;
				
			}
		}
		
		cout<< "Valores presentes na lista: "<<endl;
		
		for(int k = 0; k < qtd; k++)
		{
			cout << i[k]<<endl;
		}
	}
	

	int main()
	{
		Lista lis;
		
		
		lis.setTamanho(5);
		int itens[lis.getTamanho()];
		int valor, pos;
		char sai;
		
		do // insere
		{
			cout<< "Informe o valor que deseja inserir na lista: "<<endl;
			cin >> valor;
			lis.inserir(itens, valor, lis.getTamanho());
			
			cout<< "Deseja continuar ? [s/n]: "<<endl;
			cin >> sai;
		}while(sai == 's');
		
		cout<< "================================================"<<endl;
		
		do // busca posicao de elemento
		{
			cout<< "Informe o valor o qual deseja encontrar a posicao: "<<endl;
			cin >> valor;
			pos = lis.busca(itens, valor);
			cout << "Elemento encontrado na posicao " << pos << endl;
			
			cout<< "Deseja encontrar a posicao de outros elementos ?  [s/n]"<<endl;
			cin >> sai;
			
		}while(sai == 's');
		
		cout<< "================================================"<<endl;
		
		do //remove
		{
			cout<< "Informe o valor que deseja remover: "<<endl;
			cin >> valor;
			lis.remover(itens, valor);
			
			cout<< "Deseja remover outro elemento ? [s/n]"<<endl;
			cin >> sai;
		}while(sai == 's');
		
		cout<< "================================================"<<endl;
		
		lis.mostra(itens);
		
		return 0;
	}