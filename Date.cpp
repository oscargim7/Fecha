#include<iostream>
#include<sstream>

//using namespace std;->Te incluye las funciones standard (std)
class Date
{
    private:
        int day, month, year; 

    public:   
        void add_day(int nDayAdd)
        {
            if(day > 31)
            {
                std::cout<<"El dia es invalido";
            }
            else
            {
                std::cout<<"El dia es valido";
            }

        };

        void add_month()
        {
            if(month > 12)
            {
                std::cout<<"El mes sobrepasa el limite de meses";
            }
            else if(month <= 0)
            {
                std::cout<<"El mes esta debajo del limite de meses";
            }
        };

    public:
        //Llamada a métodos de constructor y destructor
        Date( );
        ~Date();
};

int main ()
{   
    //Se instancia el objeto
    Date a;

    int _day, _month, _year;
    std::string fecha;
    char _delimitador;

    _delimitador = '/';
    
    std::cout<<"Ingresa la fecha del dia de hoy en formato aaaa/mm/dd";
    std::cin>>fecha;

    //Se separa la fecha ingresada por el usuario en 3 partes (dia, mes y año) por medio del delimitador "/"
    _delimitador = std::stoi(fecha);      


    std::cout<<"El dia ingresado es: ", _day;
    std::cout<<"El mes ingresado es: ", _month;
    std::cout<<"El anio ingresado es: ", _year;

    return 0;
}

 //Constructor
    Date::Date(/* args */)
    {
        
    }

    //Destructor
    Date::~Date()
    {
        
    }

