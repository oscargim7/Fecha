/*
    Romero Escamilla Oscar Eduardo
    #22110112
    2P
    POO
    Desarrollo de Software
    Programa:
        Lo que hará el programa es solicitar la fecha completa del día en que está el usuario, 
        luego separará está fecha (día, mes y año) mediante una función (stoi) que lo separa, de ahí 
        quedarán 3 arreglos de cadena (día, mes y año), entonces se casteará o convertirá a tipo
        de dato entero para poder hacer las validaciones por separado de día, mes año (también si es 
        bisiesto o no). Por último, imprimirá el dia, mes y años de manera individual; asimismo, el 
        incremento por 30 repeticiones de la fecha que ingresó el usuario. 
*/
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

        void add_year()
        {
            if(year < 2000)
            {
                std::cout<<"El anio esta debajo de la epoca actual";
            }
            if(year > 2022)
            {
                std::cout<<"El anio sobrepasa la epoca actual";
            }
            if (year % 4 == 0)
            {
                std::cout<<"El anio es bisiesto";
            }
            else
            {
                std::cout<<"El anio no es bisiesto";
            }
        }

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
    
    //Se asigna la fecha del dia de mañana por medio del objeto creado
    Date a("2022-09-27");
    std::cout << a;

    //Ciclo que imprime las fechas (30) a partir del dia de mañana. Ejemplo: 27-28-29-30-01-02,etc.
    for (int i = 0; i < 30; i++)
    {
        a++;
        std::cout << a;
    }

    //Método Prefix (sobrecarga de operadores)
    Date& operator ++ ()
    {
        return *this; //valor de this
    }

    return 0;
}

 
