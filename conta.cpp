    #include<iostream>
    #include<string>
    using namespace std;
    
    class conta
    {
        private:
            string numero;
            string titular;
            string cpf;
            bool bloqueada;
            float saldo;
        public:
            conta();
            conta(string, string);
             void setNumero(string); 
             void setTitular(string);
             void setCpf(string);
             void setBloqueada(bool);
             void setSaldo(float);
             string getNumero();
             string getTitular();
             string getCpf();
             bool isBloqueada();
             float getSaldo();
             bool saque(float);
             bool deposito(float);
             void extrato();
             //static string geraNumero(int);
    };
    
    class contaPoupanca : public conta
    {
        private:
            float txRef;
        public:
            contaPoupanca(string, string, int, int, int);
            void setAniversario(int, int, int);
            void setTxRef(float);
            Data getAniversario();
            float getTxRef();
            //void correcao();
            void extrato();
    };
    
    conta::conta(string doc, string nome)
    {
        this->setCpf(doc);
        this->setTitular(nome);
        this->setSaldo(0.0);
        this->setNumero("12345 - 0");
    }
    ContaPoupanca::ContaPoupanca(std::string cpf, std::string n, int d, int m, int a):Conta(cpf, n)
{
 this->setAniversario(Data(d, m, a));
}
    void conta::setNumero(string num) 
    {
        numero = num;    
    }
    
    void conta::setTitular(string nome)
    {
        titular = nome;
    }
    
    void conta::setCpf(string doc)
    {
        cpf = doc;
    }
    
    void conta::setBloqueada(bool block)
    {
        bloqueada = block;
    }
    
    void conta::setSaldo(float money)
    {
        saldo = money;
    }
    
    string conta::getNumero()
    {
        return this->numero;
    }
    
    string conta::getTitular()
    {
        return this->titular;
    }
    
    string conta::getCpf()
    {
        return this->cpf;
    }
    
    bool conta::isBloqueada()
    {
        return ((saldo < 0)? true:false);
    }
    
    float conta::getSaldo()
    {
        return this->saldo;
    }
    
    bool conta::saque(float takeMoney)
    {
        if(this->saldo >= takeMoney && !this->isBloqueada())
        {
            this->setSaldo(this->getSaldo() - takeMoney);    
        }
        return true;
    }
    
    bool conta::deposito(float getMoney)
    {
        if(!this->isBloqueada())
        {
            this->setSaldo(this->getSaldo() + getMoney);    
        }
        return true;
    }
    
   void conta::extrato()
    {
        cout << "===========================================" <<endl;
        cout << "CONTA : " << this->getNumero() << endl;
        cout << "CPF ..: " << this->getCpf() << endl;
        cout << "NOME .: " << this->getTitular() << endl;
        cout << "SALDO : R$" << this->getSaldo() << endl;
        cout << "===========================================" << endl;
    }
        
    // METODOS DA CLASSE DERIVADA ========================================================================================    
        
    ContaPoupanca::ContaPoupanca(string cpf, string n, int d, int m, int a): Conta(cpf, n) // : <----- Chama o construtor da classe derivada 
    {
        this->setAniversario(d, m ,a); // data e um objeto a ser chamado na main
    }
    
    void contaPoupanca::setAniversario(int d, int m,  int a)
    {
        int dia = d
    }
        
    void contaPoupanca::setTxRef(float valor)
    {
        txRef = (0.1*valor);
    }
        
    Data conta
    
    float contaPoupanca::getTxRef()
    {
        return this->txRef;
    }
    
    void contaPoupanca::extrato()
    {
        conta::extrato();
        cout << "ANIVERSARIO: " << this->getAniversario() << endl; 
        cout << "===========================================" << endl;
    }
    
        
    int main()
    {
        contaPoupanca cta("987654321-00", "Richard", 17, 3, 2016);
        cta.extrato();
        cta.deposito(1000000);
        cta.extrato();
        
        return 0;
    }
    
    
    
    
    
    