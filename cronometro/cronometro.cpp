    #include<iostream>
    #include<string>
    using namespace std;
    
    class Cronometro
    {
        private:
            int hora, minuto, segundo;
        
        public:
            Cronometro();
            void setHora(int);
            void setMinuto(int);
            void setSegundo(int);
            int getHora();
            int getMinuto();
            int getSegundo();
            void incrementaSeg();
            void incrementaMin();
            void incrementaHora();
            void verifca();
            void imprime();
    };
    
    Cronometro::Cronometro()
    {
        this->setHora(0);
        this->setMinuto(0);
        this->setSegundo(0);
    }
    
    void Cronometro::setHora(int h)
    {
        hora = h;
    }
    
    void Cronometro::setMinuto(int m)
    {
        minuto = m;
    }
    
    void Cronometro::setSegundo(int s)
    {
        segundo = s;
    }
    
    int Cronometro::getHora()
    {
        return this->hora;
    }
    
    int Cronometro::getMinuto()
    {
        return this->minuto;
    }
    
    int Cronometro::getSegundo()
    {
        return this->segundo;
    }
    
    void Cronometro::incrementaSeg()
    {
        segundo++; 
    }
    
    void Cronometro::incrementaMin()
    {
        if(this->getSegundo() > 59) 
        {
            this->setSegundo(0);
            minuto++;
        }
    }
    
    void Cronometro::incrementaHora()
    {
        if(this->getMinuto() > 59) 
        {
            this->setMinuto(0);
            hora++;
        }
    }
    
    void Cronometro::verifca()
    {
        if(this->getHora() > 23 )
        {
            this->setHora(0);
        }
    }
    
    void Cronometro::imprime()
    {
        cout<< this->getHora() << ":" << this->getMinuto() << ":" << this->getSegundo() << endl;
    }
    
    int main()
    {
        Cronometro rolex;
        string acres;
        string verifica= "tic";
        
        do
        {
            cin >> acres;
            
            if(verifica.compare(acres) == 0)
            {
                rolex.incrementaSeg();
                rolex.incrementaMin();
                rolex.incrementaHora();
            }
        }while(verifica.compare(acres) == 0);
        
        rolex.imprime();
        return 0;    
    }