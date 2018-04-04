#include <iostream>
using namespace std;

	class data
	{
		private:
			int dia, mes, ano;
		
		public:
			data(){}
			void validaData(int, int, int);
			void setDia(int);
			void setMes(int);
			void setAno(int);
			int getDia();
			int getMes();
			int getAno();
			
		};
	
	void data::validaData(int dia, int mes,  int ano)
	{
		if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1900 && ano <= 2100)) //verifica se os numeros sao validos. Possivel ERRO: ano!!!!
        {
            if ((dia == 29 && mes == 2) && ((ano % 4) == 0)) //verifica se o ano e bissexto
            {
                cout << "DATA VALIDA";
            }
            if (dia <= 28 && mes == 2) //verifica o mes de feveireiro
            {
                cout << "DATA VALIDA";
            }
            if ((dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) //verifica os meses de 30 dias
            {
                cout << "DATA VALIDA";
            }
            if ((dia <=31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12)) //verifica os meses de 31 dias
            {
                cout << "DATA VALIDA";
            }
            else
            {
                cout << "DATA INVALIDA";
            }
      }
       else
           {
                cout << "DATA INVALIDA";
           }
	}
	
	void data::setDia(int d) // DIA
	{
		dia = d;
	}
	
	int data::getDia()
	{
		return dia;
	}                     // DIA
	
	void data::setMes(int m) //MES
	{
		mes = m;
	}
	
	int data::getMes()
	{
		return mes;
	}                      // MES
	
	void data::setAno(int a) // ANO
	{
		ano = a;
	}
	
	int data::getAno()
	{
		return ano;
	}                      // ANO
	
	int main()
	{
		
		data datain;
		
		int valorN, day, month, year;
		cin >> valorN;
		
		for(int i = 0; i < valorN; i++)
		{
			//cout << "Informe dia, mes e ano"<<endl;
			cin >> day >> month >> year;
			
			datain.setDia(day);
			datain.setMes(month);
			datain.setAno(year);
			
			datain.validaData(datain.getDia(), datain.getMes(), datain.getAno());
		}
		
		cout<<"\n";
		
		return 0;
	}