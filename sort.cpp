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

int main()
{
    Student Klasa[5];
    Klasa[0] = Student("Grabinski", 5, 4.5, 4, 3.5);
    Klasa[1] = Student("Wojewoda", 3, 2, 2, 4.5);
    Klasa[2] = Student("Kotomski", 3.5, 1, 1, 2.5);
    Klasa[3] = Student("Milczek", 3, 2.5, 1, 2);
    Klasa[4] = Student("Mruczek", 2, 2, 2, 2);

    cout.precision(3);

    cout << "WYLICZONA ŒREDNIA:" << endl;

    for( int i = 0; i < 5; ++i)
    {
        cout << Klasa[i].Nazwisko << " " << Klasa[i].Srednia() << endl;
    }

    sort(Klasa, Klasa + 5);

    cout << endl << "ŒREDNIA PO SORTOWANIU:" << endl;

    for( int i = 0; i < 5; ++i)
    {
        cout << Klasa[i].Nazwisko << " " << Klasa[i].Srednia() << endl;
    }

    return 0;
}

