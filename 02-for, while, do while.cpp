#include <iostream>
#include <unistd.h>

int main()
{
    using namespace std;

    cout << "02-Instrukcja warunkowa if" << endl; 
    cout << "1 = Wypisanie od 1 do 10" << endl;
    cout << "2 = Odliczanie" << endl;
    cout << "3 = Wypisywanie imienia" << endl;
    cout << "4 = Bakterie" << endl;

    cout << "Wybierz co chcesz zobaczyć: ";

    int opcja;
    cin >> opcja;
    
    switch(opcja)
    {
        case 1:
        {
            for(int i=1; i<=10; i++)
            {
                cout << i << endl;
            }
        } break;
        case 2:
        {
            for (int i=10; i>0; i--)
            {
                system("clear");
                cout << i << endl;
                sleep(1);
            }
            system("clear");
            cout << "JEBUT!!!" << endl;
        } break;
        case 3:
        {
            string imie;
            cout << "Podaj imię: ";
            cin >> imie;

            int ile;
            cout << "Ile razy wypisać imię?: ";
            cin >> ile;
            
            for(int i=1; i<=ile; i++)
            {
                cout << imie << endl;
            }
        } break;
        case 4:
        {
            int populacja = 1;
            int godzin = 0;

            while(populacja <= 1000000000)
            {
                godzin++;
                populacja = populacja * 2;
                
                cout << "Mineło godzin: " << godzin;
                cout << "  Populacja: " << populacja << endl;
            }
        }
    }

    return 0;
}

