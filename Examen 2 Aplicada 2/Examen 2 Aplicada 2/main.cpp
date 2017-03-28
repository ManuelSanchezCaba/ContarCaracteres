#include <iostream>
#include <string>

using namespace std;

int main()
{
	string cadena;
	int liCount = 0;

	cout << "Digite su cadena de caracter" << endl;
	getline(cin, cadena);

	for (int x = 0; x < cadena.size(); x++)
	{
		if (cadena[x] != '/' && cadena[x] != '(' && cadena[x] != ')' && cadena[x] != '*' && cadena[x] != '&' && cadena[x] != '^'
			&& cadena[x] != '%' && cadena[x] != '$' && cadena[x] != '#' && cadena[x] != '@' && cadena[x] != '!' && cadena[x] != '?'
			&& cadena[x] != '}' && cadena[x] != '{' && cadena[x] != '[' && cadena[x] != ']' && cadena[x] != ':' && cadena[x] != ';'
			&& cadena[x] != '>' && cadena[x] != '<' && cadena[x] != '-' && cadena[x] != '_' && cadena[x] != '+' && cadena[x] != '='
			&& cadena[x] != '`' && cadena[x] != '~' && cadena[x] != ' ')
			liCount++;
	}
	cout << liCount << endl;




	system("pause");
	return 0;
}
