    #include<iostream>
    #include<stdlib.h> //para abs
    using namespace std;
    
    class Racionais
    {
        private:
            int numerador, denominador;
        
        public:
            Racionais();
            Racionais(int, int);
            void setNumerador(int);
            void setDenominador(int);
            int getNumerador();
            int getDenominador();
            Racionais operator+ (Racionais);
            Racionais operator- (Racionais);
            Racionais operator* (Racionais);
            Racionais operator/ (Racionais);
            void reducao();
    };
    
    Racionais::Racionais(){}
    
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
    
    Racionais Racionais::operator+ (Racionais q)
    {
        Racionais r;
        r.setNumerador(this->getNumerador()*q.getDenominador() + this->getDenominador()*q.getNumerador());         
        r.setDenominador(this->getDenominador()*q.getDenominador());
        return r;
    }
    
    Racionais Racionais::operator- (Racionais q)
    {
        q.setNumerador(q.getNumerador()*-1);
         return this->operator +(q); // POSSIVEL ERRO!
    }
    
    Racionais Racionais::operator* (Racionais q)
    {
        Racionais r;
        r.setNumerador(this->getNumerador()*q.getNumerador());
        r.setDenominador(this->getDenominador()*q.getDenominador());
        return r;
    }
    
    Racionais Racionais::operator/ (Racionais q)
    {
        Racionais r;
        r.setNumerador(this->getNumerador()*q.getDenominador());
        r.setDenominador(this->getDenominador()*q.getNumerador());
        return r;
        
    }
    
    void Racionais::reducao()
    {
        int a, b, r;
        a = abs(this->getNumerador());
        b = abs(this->getDenominador());
        
        do
        {
            r = a%b;
            a = b;
            b = r;
            
        }while(r > 0);
        
        this->setNumerador(this->getNumerador()/a);
        this->setDenominador(this->getDenominador()/a);
    }
    
    int main()
    {
        int n1, n2, d1, d2;
        char op;
        Racionais *f1, *f2, fr;
        
        while(cin >> n1 >> d1 >> op >> n2 >> d2)
        {
            f1 = new Racionais(n1, d1);
            f2 = new Racionais(n2, d2);
            
            if( op == '+')
            {
                fr = (*f1)+(*f2);
            }
            else if(op == '-')
            {
                fr = (*f1)-(*f2);
            }
            else if(op == '*')
            {
                fr = (*f1)*(*f2);
            }
            else
            {
                fr = (*f1)/(*f2);    
            }
            
            fr.reducao();
            cout << fr.getNumerador() << " " << fr.getDenominador() << endl;   
            delete f1, f2;
        }
    
        return 0;
    }
