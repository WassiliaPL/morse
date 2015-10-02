#include <iostream>
#include <string>

using namespace std;
int i, menu;
string tekst;

void szyfr();
void wybor();

int main()
{
wybor();
}

void szyfr()
{
cout << "Wprowadz tekst: \n";
getline(cin, tekst);
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

void wybor()
{
cin >> menu;
switch(menu)
{
case 1: szyfr();
break;
default: break;
}
}
