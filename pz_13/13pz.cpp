
#include <iostream>
using namespace std;

void Method(int n)
{
    char **array = new char*[n];
    //string *array = new string[n];
    for (int i = 0; i < n; i++) 
    {
        array[i] = new char[n+1];
        for (int j = 0; j < n+1; j++) 
        {
            array[i][j] = '|';
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
       
    }
}
int main()
{
    setlocale(LC_ALL, "");
    int a;
    cout << "Введите размерность массива: ";
    cin >> a;
    Method(a);
}
