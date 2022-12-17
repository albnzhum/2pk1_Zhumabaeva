
#include <iostream>
using namespace std;


void get_nod(int one, int two, int three)
{
	
		double nod;
		for (int i = 1; i <= one; i++)
		{
			if (one % i == 0 && two % i == 0 && three % i == 0)
			{
				nod = i;
			}
		}
		cout << "Наибольший общий делитель: " << nod;
	
}
int main()
{
	setlocale(LC_ALL, "");
	int a;
	int b;
	int c;
	cout << "Введите первое число" << endl;
	cin >> a;
	cout << "Введите второе число" << endl;
	cin >> b;
	cout << "Введите третье число" << endl;
	cin >> c;
	get_nod(a, b, c);

}
