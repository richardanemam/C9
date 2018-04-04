#include<iostream>
using namespace std;

class data
{
	private:
		int dia, mes, ano;
		
	public:
		
		data();
		data(int, int, int); //iniciar os sets
		void setDia(int);
		void setMes(int);
		void setAno(int);
		int getDia();
		int getMes();
		int getAno();
		void print();
		//void print(string);
		
								 									 	
};

data::data()
{
	dia = 25;
	mes = 12; 
	ano = 2016;
	
}

data::data(int dia, int mes, int ano)
{
	this->setDia(dia);
	this->setMes(mes);
	this->setAno(ano);
}

void data::setDia(int d)
{
	dia = d;
}

void data::setMes(int m)
{
	mes = m;
}

void data::setAno(int a)
{
	ano = a;
}

int data::getDia()
{
	return dia;	
}

int data::getMes()
{
	return mes;
}

int data::getAno()
{
	return ano;
}

void data::print()
{
	   cout << dia << "/" << mes << "/" << ano << endl; 	
}

int main()
{
	data aniver(17, 3, 1995), natal;
	

	aniver.print();
	natal.print();
	
	return 0;
}