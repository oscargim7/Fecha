#include<iostream>

class Date
{
    private:
        int day, month, year;
        std::string fecha; 

    void add_day(int nDayAdd)
    {
        day += nDayAdd;
        if(day > 30)
        {
            //add_month(day / 30);
            day %= 30;
        }

    };

    void add_month()
    {

    };

    public:

    /*

        Date(/* args );*/
        //~Date();
};

    Date::Date(/* args */)
    {
        
    }

    Date::~Date()
    {
        
    }

