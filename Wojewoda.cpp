#include <iostream>
#include <algorithm>

using namespace std;

struct Student
{
    string Nazwisko;
    float ZIOP, SO, Grafika, MySql;
    Student()
    {

    }
    Student(string Nazwisko, float ZIOP, float SO, float Grafika, float MySql)
    {
        this->Nazwisko = Nazwisko;
        this->ZIOP = ZIOP;
        this->SO = SO;
        this->Grafika = Grafika;
        this->MySql = MySql;
    }
    
    float Srednia()
    {
        return (ZIOP + SO + Grafika + MySql) / 4;
    }
};

bool operator<(Student &s1, Student &s2)
{
    return s2.Srednia() < s1.Srednia();
}

