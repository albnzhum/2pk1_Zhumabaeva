
#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string text = "";
    cout << "Введите текст:" << endl;
    getline(cin, text);
    int space = 0;
    char* chars = new char[text.length() + 1];
    text.copy(chars, text.length());
    chars[text.length()] = '\0';
    for (int i = 0; i <= text.length() +1; i++)
    {
        if (chars[i] == ' ') 
        {
            space++;
        }
    }
    cout << "Количество пробелов в строке: " << space;

}
