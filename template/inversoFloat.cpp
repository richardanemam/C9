#include<iostream>
using namespace std;
    
    template <class T>
    class vetor
    {
        private:
            T *itens;
            int tamanho;
            
        public:
            vetor(int);
            void setTamanho(int);
            int getTamanho();
            void setItens(int, T);
            int getItens(int);
            void imprime();
    };  
    
        template <class T>
        vetor<T>::vetor(int tam)
        {
            this->itens = new T[tam];
            this->setTamanho(tam);
        }
        
        template <class T>
        void vetor<T>::setTamanho(int tam)
        {
            this->tamanho = tam;
        }
        
        template <class T>
        int vetor<T>::getTamanho()
        {
            return this->tamanho;
        }
        
        template <class T>
         void vetor<T>::setItens(int pos, T it)
        {
            this->itens[pos] = it;
        }
        
        template <class T>
        int vetor<T>::getItens(int pos)
        {
            return this->itens[pos];
        }
        
        template <class T>
        void vetor<T>::imprime()
        {
            for(int i = this->getTamanho() - 1; i > 0; i--)
            {
                cout << itens[i] << " ";
            }
        
            cout << itens[0] <<endl;
        }
        
        int main()
        {
            
            int tamanho;
            cin >> tamanho;
            vetor<float> *v = new vetor<float>(tamanho);
            
            for(int i = 0; i < v->getTamanho(); i++)
            {
                float valor;
                cin >> valor;
                v->setItens(i, valor);
            }
            
            v->imprime();
            
            return 0;
        }