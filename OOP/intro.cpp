#include <iostream>

int month_to_day_amount (int month, int year);

class Date {

private:
    int day;
    int month;
    int year;

public:
    void dateInput(Date &date)
    {
        int d, m, y;
        std::cout << "What is the date?\n\n";
        std::cin >> d >> m >> y;

        date.day = d;
        date.month = m;
        date.year = y;
    }
    void display()
    {
        std::cout << "The date is: " << day << "/" << month << "/" << year << '\n'; //in general.
    }
    void tomorrowAdd (Date &date)
    {
        if (date.day == month_to_day_amount(date.month, date.year))
        {
            if (date.month == 12) //ensure that it's not the last day of the year either.
            {
                date.day = 1;
                date.month = 1;
                date.year += 1;
            }
            else
            {
                date.day = 1;
                date.month += 1;
            }
        }
        else
            date.day += 1;
    }
};



int main ()
{

    Date today;

    today.dateInput(today);
    today.display();

    Date tomorrow = today;

    tomorrow.tomorrowAdd(tomorrow);
    tomorrow.display();


}

int month_to_day_amount(int month, int year)
{
    switch(month)
    {
    case 1: case 3: case 5: case 7: case 8 : case 10: case 12:
        return 31;
    break;

    case 4: case 6: case 9: case 11:
        return 30;
    break;

    case 2:
        if (year % 4 == 0) //if a leap year
        {
            return 29;
        }
        else
        {
            return 28;
        }
    break;
    }
}
