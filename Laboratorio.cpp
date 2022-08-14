#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void toUpper(string &cadena)
{
  for(int i=0; cadena[i]!='\0' ; i++)
  {
    if (cadena.length() == 0)
    {
        return;
    }
    cadena[0] =toupper(cadena[0]);
  }
}
void alfa_num(string cadena)
{
    int longitud;
    longitud=cadena.size();
    cout<<"\nel numero de caracteres es "<<longitud;
}
int main()
{
string texto;
toUpper(texto);

cout<<"introduzca una cadena ";
getline(cin,texto);

for(int i=0; texto[i]!='\0' ; i++)
{
    if(texto[i-1]==' ')
    {
        texto[i] = toupper(texto[i]);
    }
    else
    {
        texto[i] = tolower(texto[i]);
    }
}
    cout<<"la cadena modificada es "<<texto;
    alfa_num(texto);
}