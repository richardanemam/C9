	#include<iostream>
	using namespace std;

	class Lista
	{
		private:
			int *itens, tam, qtd;
			
		public:
			Lista();
			Lista(int);
			void setItens(int, int);
			void setTam(int);
			void setQtd(int);
			int getItens(int);
			int getTam();
			int getQtd();
			void inserir(int);
			int busca(int);
			void remover(int);
			void ordenar();
    		void imprime();
			bool listaCheia();
			bool listaVazia ();
	};

	Lista::Lista(){}

	Lista::Lista(int t)
	{
		int q = 0;
		this->setTam(t);
		this->setQtd(q);
	    itens = new int[t];
	}
	
	void Lista::setTam(int t)//ok
	{
		tam = t;
	}
	
	void Lista::setQtd(int q)//ok
	{
		qtd = q;
	}
	
	void Lista::setItens(int i, int valor)
	{
		itens[i] = valor;
	}
	
	int Lista::getTam()
	{
		return this->tam;
	}
	
	int Lista::getQtd()
	{
		return this->qtd;
	}
	
	int Lista::getItens(int i)
	{
		return this->itens[i]; //duvida
	}
	
	void Lista::inserir(int valor)
	{
		bool teste = listaCheia();
		if(teste) //return true!
		{
			cout << "ERRO! Lista Cheia" << endl;
		}
		else
		{
			this->setItens(this->getQtd(), valor); 
			qtd++;
		}
	    this->ordenar();
	}
	
	int Lista::busca(int valor) // verificar lista vazia!!!
	{
		bool teste;
		if(teste = this->listaVazia())
		{
			cout << "ERRO. Lista vazia." << endl;
			
		}
		
		for(int i = 0; i < this->getQtd(); i++)
		{
			if(this->getItens(i) == valor) // PAY ATTENTION ABOUT THE POSITION
			{
				return i; // retorna a posicao do elemento.
			}
        }
        return -1;
	}
	
	void Lista::remover(int valor)
	{
		bool teste = listaVazia();
		
		if(teste)
		{
			cout << "ERRO. Lista vazia." << endl;
		}
		else
		{
			int posicao = this->busca(valor);
			
			if(posicao == - 1)
			{
				cout << "Elemento nao encontrado" << endl;
			}
			else
			{
				this->setItens(posicao, this->getItens(this->getQtd()-1));
				qtd--;
			}
		}
	    this->ordenar();
	}
	
	void Lista::ordenar()
	{
		int aux, indiceMin;
		
		for(int i = 0; i < qtd - 1 ; i++)
		{
			indiceMin = i;
			for(int j = i+1; j < qtd; j++)
			{
				if(this->getItens(j) < this->getItens(indiceMin))
				{
				    indiceMin = j;
		            aux = this->getItens(indiceMin);            			
					this->setItens(indiceMin, this->getItens(i));
					this->setItens(i, aux);
				}
			}
		}
	}
	
	void Lista::imprime()
	{
		for(int i = 0; i < this->getQtd(); i++)
		{
			cout << this->getItens(i) << endl;
		}
	}
	
	bool Lista::listaCheia()
	{
		if(this->getQtd() == this->getTam())
		{
			return true;
		}
		else{
		    return false;
		}
	}
	
	bool Lista::listaVazia()
	{
		if(this->getQtd() == 0)
		{
			return true;
		}
		else
		{
		    return false;
		}
	}
	
	int main()
	{
		int tamanho, valor;
		cin >> tamanho;
		Lista lis(tamanho);
		
	    for(int i = 0; i < tamanho; i++)
	    {
		    char escolhe;
		    cin >> escolhe;
			
		    if(escolhe == 'I')
			{
				cin >> valor;
				lis.inserir(valor);
			}
			else
			{
				cin >> valor;
				lis.remover(valor);
			}
		}
	//	lis.ordenar();
		lis.imprime();
        return 0;
	}