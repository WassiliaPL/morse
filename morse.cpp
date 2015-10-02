#include <iostream>
#include <string>

using namespace std;
int i, menu;
string tekst;
string a = ".-";

void deszyfrowanie()
    {
    for (i=0; i<tekst.length(); i++)
        {
        if (tekst == a) cout << "a";
        if (tekst == "-...") cout << "b";
        if (tekst == "-.-.") cout << "c";
        }
    }

void szyfrowanie()
    {
    for (i=0; i<tekst.length(); i++)
        {
        if (tekst[i] == 'a') cout << ".-/";
        if (tekst[i] == 'b') cout << "-.../";
        if (tekst[i] == 'c') cout << "-.-./";
        if (tekst[i] == 'd') cout << "-../";
        if (tekst[i] == 'e') cout << "./";
        if (tekst[i] == 'f') cout << "..-./";
        if (tekst[i] == 'g') cout << "--./";
        if (tekst[i] == 'h') cout << "..../";
        if (tekst[i] == 'i') cout << "../";
        if (tekst[i] == 'j') cout << ".---/";
        if (tekst[i] == 'k') cout << "-.-/";
        if (tekst[i] == 'l') cout << ".-../";
        if (tekst[i] == 'm') cout << "--/";
        if (tekst[i] == 'n') cout << "-./";
        if (tekst[i] == 'o') cout << "---/";
        if (tekst[i] == 'p') cout << ".--./";
        if (tekst[i] == 'q') cout << "--.-/";
        if (tekst[i] == 'r') cout << ".-./";
        if (tekst[i] == 's') cout << ".../";
        if (tekst[i] == 't') cout << "-/";
        if (tekst[i] == 'u') cout << "..-/";
        if (tekst[i] == 'v') cout << "...-/";
        if (tekst[i] == 'w') cout << ".--/";
        if (tekst[i] == 'x') cout << "-..-/";
        if (tekst[i] == 'y') cout << "-.--/";
        if (tekst[i] == 'z') cout << "--../";
        if (tekst[i] == ' ') cout << "/";
        }
    }

void wprowadzanie()
    {
    cout << "Wprowadz wiadomosc: \n";
    getline(cin, tekst);
    cout << "\n";
    }

void wybor()
    {
    cout << "MENU:\n";
    cout << "Wprowadz 1 aby zaszyfrowac wiadomosc\n";
    cout << "Wprowadz 2 aby rozszyfrowac wiadomosc\n";
    cout << "Wybor: ";
    cin >> menu;
    switch(menu)
        {
        case 1: szyfrowanie();
        break;
        case 2: deszyfrowanie();
        break;
        }
    }

void konczenie()
    {
    cout << "Wcisnij ENTER aby zakonczyc";
    cin.ignore();
    }

int main()
    {
    wprowadzanie();
    wybor();
    konczenie;
    }


