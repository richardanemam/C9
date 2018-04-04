    #include<iostream>
    #include<stdlib.h>
    using namespace std;
    
    class Racionais
    {
        private:
            int numerador, denominador;
        
        public:
            Racionais();
            Racionais(int, int);
            Racionais soma(Racionais);
            Racionais subtracao(Racionais);
            Racionais multiplicacao(Racionais);
            Racionais divisao(Racionais);
            void reducao();
            void setNumerador(int);
            void setDenominador(int);
            int getNumerador();
            int getDenominador();
    };
    
    Racionais::Racionais(){  }
    
    Racionais::Racionais(int n, int d)
    {
        this->setNumerador(n);
        this->setDenominador(d);
    }
    
    void Racionais::setNumerador(int n)
    {
        this->numerador = n;
    }
    
    void Racionais::setDenominador(int d)
    {
        this->denominador = d;
    }
    
    int Racionais::getNumerador()
    {
        return this->numerador;
    }
        
    int Racionais::getDenominador()
    {
        return this->denominador;
    }

    Racionais Racionais::soma(Racionais q)
    {
        Racionais r;
        
        r.setNumerador(this->getNumerador()*q.getDenominador() + this->getDenominador()*q.getNumerador());
        r.setDenominador(this->getDenominador()*q.getDenominador());
    
        return r;
    }
    
    Racionais Racionais::subtracao(Racionais q)
    {
        q.setNumerador(q.getNumerador()*-1);
        
        return this->soma(q); // para onde aponta esse this ?
        
    }
    
    Racionais Racionais::multiplicacao(Racionais q)
    {
        Racionais r;
        
        r.setNumerador(this->getNumerador()*q.getNumerador());
        r.setDenominador(this->getDenominador()*q.getDenominador());
        
        return r;
    }
    
    Racionais Racionais::divisao(Racionais q)
    {
        Racionais r;
        
        r.setNumerador(this->getNumerador()*q.getDenominador());
        r.setDenominador(this->getDenominador()*q.getNumerador());
        
        return r;
    }
    
    void Racionais::reducao() //Algoritmo de EUCLIDES
    {
        int r, a, b;
        
        a = abs(this->getNumerador());
        b = abs(this->getDenominador());
        
        do
        {
            r = a%b;
            a = b;
            b = r;
        }while(r>0);
         
        this->setNumerador(this->getNumerador()/a);
        this->setDenominador(this->getDenominador()/a);
        
    }
    
    int main()
    {
        int n1, n2, d1, d2;
        char op;
        Racionais *ob1, *ob2, ob3;
        
        while(cin >> n1 >> d1 >> op >> n2 >> d2)
        {
            ob1 = new Racionais(n1, d1);
            ob2 = new Racionais(n2, d2);
            
            if(op == '+')
            {
                ob3 = ob1->soma(*ob2);
            }
            else if(op == '-')
            {
                ob3 = ob1->subtracao(*ob2);
            }
            else if(op == '*')
            {
                ob3 = ob1->multiplicacao(*ob2); //* acessa o valor do endereço de memoria e nao o endereço em si
            }
            else
            {
                ob3 = ob1->divisao(*ob2);
            }
        
            ob3.reducao();
            cout << ob3.getNumerador() << " " << ob3.getDenominador() << endl;
            delete ob1;
            delete ob2;
        }
    
        return 0;
    }
    