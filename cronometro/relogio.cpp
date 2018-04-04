    #include<iostream>
    #include<string>
    using namespace std;
    
    class Relogio
    {
        private:
            int hora, minuto, segundo;
        
        public:
            Relogio();
            Relogio(int, int, int);
            void setHora(int);
            void setMinuto(int);
            void setSegundo(int);
            int getHora();
            int getMinuto();
            int getSegundo();
            void incrementaSeg();
            void incrementaMin();
            void incrementaHora();
            void verificaHora();
            void verificaMinuto();
            void verificaSeg();
            void imprime();
    };
    
    Relogio::Relogio(){ }
    Relogio::Relogio(int h, int m, int s)
    {
        this->setHora(h);
        this->setMinuto(m);
        this->setSegundo(s);
    }
    
    void Relogio::setHora(int h)
    {
        hora = h;
    }
    
    void Relogio::setMinuto(int m)
    {
        minuto = m;
    }
    
    void Relogio::setSegundo(int s)
    {
        segundo = s;
    }
    
    int Relogio::getHora()
    {
        return this->hora;
    }
    
    int Relogio::getMinuto()
    {
        return this->minuto;
    }
    
    int Relogio::getSegundo()
    {
        return this->segundo;
    }
    
    void Relogio::incrementaSeg()
    {
        segundo++; 
        this->verificaSeg();
    }
    
    void Relogio::incrementaMin()
    {
        minuto++;
        this->verificaMinuto();
    }
    
    void Relogio::incrementaHora()
    {
        hora++;
        this->verificaMinuto();
    }
    
    void Relogio::verificaHora()
    {
        if(this->getHora() > 23 )
        {
            this->setHora(0);
        }
    }
    
    void Relogio::verificaMinuto()
    {
        if(this->getMinuto() > 59)
        {
            hora++;
            this->setMinuto(0);
        }
    }
    
    void Relogio::verificaSeg()
    {
        if(this->getSegundo() > 59 )
        {
            minuto++;
            this->setSegundo(0);
        }
    }
    
    void Relogio::imprime()
    {
        cout<< this->getHora() << ":" << this->getMinuto() << ":" << this->getSegundo() << endl;
    }
    
    int main()
    {
        
        int startHora, startMin, startSeg;
        cin >> startHora >> startMin >> startSeg;
        Relogio rolex(startHora, startMin, startSeg);
        string verificaTempo; //verifica.compare(acres) == 0
        string sec = "tic";
        string min = "tac";
        string hour = "toc";
        
        do
        {
            cin >> verificaTempo;
            
            if(sec.compare(verificaTempo) == 0)
            {
                rolex.incrementaSeg();
            }
            if(min.compare(verificaTempo) == 0)
            {
                rolex.incrementaMin();
            }
            if(hour.compare(verificaTempo) == 0)
            {
                rolex.incrementaHora();
            }
        }while((sec.compare(verificaTempo) == 0) || (min.compare(verificaTempo) == 0) || (hour.compare(verificaTempo) == 0));
        rolex.imprime();
        return 0;    
    }