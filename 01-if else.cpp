#include <iostream>

int main() {
    using namespace std;

    cout << "02-Instrukcja warunkowa if" << endl; 
    cout << "1 = Bankomat" << endl;
    cout << "2 = Logowanie" << endl;
    cout << "3 = Prezydentura" << endl;

    cout << "Wybierz co chcesz zobaczyć: ";

    int opcja;
    cin >> opcja;

    switch(opcja) 
    {
        case 1: 
        {
            cout << "Witamy w naszym banku!" << endl;
            cout << "Podaj numer PIN: ";

            string PIN;
            cin >> PIN;
    
            if(PIN == "0123") 
            {
                cout << "Poprawny PIN." << endl;
            }
            else 
            {
                cout << "Niepoprawny PIN." << endl;
            }
        } break;
        case 2: 
        {
            string login;
            string haslo;
            
            cout << "Podaj login: ";
            cin >> login;

            cout << "Podaj hasło: ";
            cin >> haslo;

            if(login == "domino" && haslo == "rkspany") 
            {
                cout << "Logowanie powiodło się!" << endl;
            }
            else 
            {
                cout << "Niepoprawny login/hasło!" << endl;
            }
        } break;
        case 3: 
        {
            int wiek;

            cout << "Podaj swój wiek: ";
            cin >> wiek;

            if(wiek < 18) 
            {
                cout << "Nie jesteś pełnoletni i nie możesz zostać prezydentem." << endl;
            }
            else if(wiek < 35) 
            {
                cout << "Jesteś pełnoletni ale nie możesz zostać prezydentem." << endl;
            }
            else 
            {
                cout << "Jesteś pełnoletni i możesz zostać prezydentem." << endl;
            }
        }
    }
    
    return 0;
}