#include <iostream>
#include <cmath>
using namespace std;

class Racional
{
    private:
        int numerador, denominador;
    
    public:
        Racional();
        Racional(int,int);
        void setNumerador();
        void setDenominador();
        int getNumerador();
        int getDeenominador();
        Racional soma(Racional);
        Racional subtracao(Racional);
        Racional multiplicacao(Racional);
        Racional divisao(Racional);
        void reducao();   
}

Racional::Racional()
{ }

Racional::Racional(int,int)
{
    this->setNumerador(n);
    this->seDenominador(d);
    
}
void Racional::setNumerador()
{

    this->setNumerador(n);
}
void Racional::setDenominador()
{
    this->setDenominador(d);
}
int Racional::getNumerador()
{
    this->getNumerador(n);
}
int Racinal::getDenominador()
{
    this->getNumerador(d);
}
Racional Racional::soma(Racional q)
{
    Racional r;
    r.setNumerador(this->getNumerador()*q.getDenominador()+this->getDenominador());
    r.setDenominador(this->getDenominador()*q.getDenominador());
    return r;
}
Racional Racional::subtracao(Racional q)
{
    Racionalr;
    q.setNumerador(q.getNumerador()*-1);
    r = this->soma(q);
    return r;
}
Racional Racional::multiplicacao(Racional)
{
  Racional r;
  r.setNumerador(this->getNumerador()*q.getDenominador());
  r.setDenominador(this->getDenominador()*q.getDenominador());

    return r;
}
Racional Racional::divisao(Racional)
{
    Racional r;
    r.setNumerador(this->);
    r.setDenominador(this->);

    return r;
    
}

void reducao()
{
    int a, b, r;
    a = this->getNumerador();
    b = this->getDenominador();
    
    do
    {
        r = a%b;
        a = b;
        b = r;
        
    } while(r.0);
    
    this -> setNumerador(this->getNumerador()/a);
    this ->
}

int main()
{
    int n1, n2, d1, d2;
    char op;
    Racional *f1, *f2, r;
    
    while(cin>>n1>>d1>>op>>n2>>d2)
    {
        
        f1 = new Racional(n1,d1);
        f2 = new Racional(n2,d2);
      
        if(op=='+')
        {
            r = f1->soma(*f2)
        } 
        else if (op == '-')
        {
            r = f1->subtracao(*f2);
        } 
        else if(op=='*')
        {
            r = f1->multiplicacao(*f2)
        }
        else
        {
            r = f1->divisao(*f2);
          
        }
    
        r.reducao();
        delete f1;
        delete f2;
    }
    return 0;
}