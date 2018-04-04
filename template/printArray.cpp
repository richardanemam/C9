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
            vetor<char> *v;
            vetor<string> *v1;
            vetor<int> *v2;
            vetor<float> *v3;
            int tamanho;
            cin >> tamanho;
            string verifica;
    
            while(tamanho != 0)
            {
                cin >> verifica;
                if(verifica.compare("char") == 0)
                {
                    v = new vetor<char>(tamanho);
                    for(int i = 0; i < v->getTamanho(); i++)
                    {
                        char valor;
                        cin >> valor;
                        v->setItens(i, valor);
                    }
                }
                else if(verifica.compare("string") == 0)
                {
                   v1 = new vetor<string>(tamanho);
                    for(int i = 0; i < v1->getTamanho(); i++)
                    {
                        string valor;
                        cin >> valor;
                        v1->setItens(i, valor);
                    }
                }
                else if(verifica.compare("int") == 0)
                {
                    v2 = new vetor<int>(tamanho);
                    for(int i = 0; i < v2->getTamanho(); i++)
                    {
                        int valor;
                        cin >> valor;
                        v2->setItens(i, valor);
                    }
                }
                else
                {
                   v3 = new vetor<float>(tamanho);
                    for(int i = 0; i < v3->getTamanho(); i++)
                    {
                        float valor;
                        cin >> valor;
                        v3->setItens(i, valor);
                    } 
                }
                
                cin >> tamanho;
            }
            cout << "Terminar programa!!!" << endl;
            return 0;
        }