

#include <iostream>
using namespace std;

double ArifProg(double a1, double d, int n)
{
    if (n == 1) 
    {
        return a1;
    }
    else 
    {
        return ArifProg(a1, d, n - 1) + d;
    }
}

double GeomProg(double b1, double q, int n)
{
    if (n == 1)
    {
        return b1;
    }
    else
    {
        return q*GeomProg(b1, q, n - 1);
    }
}

int Numbers(int a, int b)
{

    if (a < b) {
        for (int i = a; i <= b; i++)
        {
            cout << i << endl;
        }
    }
    else if (b < a)
    {
        for (int i = a; i >= b; i--)
        {
            cout << i << endl;
        }
    }
    else
    {
        cout << a;
    }
    
    return(a, b);
}

int Summ(int x)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i <x;i++)
    {
        
        sum += 1;
        cout << sum << " + ";
        count += sum;
    }
        
        cout << " = " << count;
    
    return(x);
}

int Power(int a, int n) 
{ 
    if (n == 0)
        return 1;
    if (n % 2 == 1)
        return Power(a, n - 1) * a;
    else {
        int c = Power(a, n / 2);
        return c * c;
    }
}

string Palindrom(string stroka)
{
    int len = stroka.length();
    for (int i = 0; i < len/2; i++)
    {
        if (stroka[i] = stroka[len - i - 1])
        {
            cout << "Строка является палиндромом";
            return(stroka);
        }
        else
        {
            cout << "Строка не является палиндромом";
        }
    }
    
}

int Inverse(int a, int b)
{
    if (a < 10) return b * 10 + a;
    return Inverse(a / 10, b * 10 + a % 10);
}


int main()
{
    setlocale(LC_ALL, "");
    cout << "Первое задание" << endl;
    double a1 = 0;
    double d = -0.3;
    int N;
    cout << "N = ";
    cin >> N;
    cout << "N-ый член арифметической прогрессии: " << ArifProg(a1, d, N) << endl;

    cout << "-------------------------" << endl;
    cout << "Второе задание" << endl;
    double b1 = 6;
    double q = 0.2;
    cout << "N-ый член геометрической прогрессии: " << GeomProg(b1, q, N) << endl;

    cout << "-------------------------" << endl;
    cout << "Третье задание" << endl;
    int firstNumber = 6, secondNumber = -50;
    cout << "Числа между A и B: " << endl;
    Numbers(firstNumber, secondNumber);

    cout << "-------------------------" << endl;
    cout << "Четвертое задание" << endl;
    // 1 задание
    int number;
    cout << "Введите число: ";
    cin >> number;
    Summ(number);

    // 2 задание
    int base, power;
    cout << endl <<"Введите основание: ";
    cin >> base;
    cout << "Введите степень: ";
    cin >> power;
    cout << "Число " << base<<  " в степени " << power << " = " << Power(base, power);

    // 3 задание
    string str;
    cout << endl <<"Введите строку: ";
    cin >> str;
    Palindrom(str);

    // 4 задание
    int inverse;
    int invro = 0;
    cout << endl << "Введите число ";
    cin >> inverse;
    cout << Inverse(inverse, invro);


}
