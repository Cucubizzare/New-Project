#include <iostream>

using namespace std;

//This program is for finding factorial

long long Facto(int arg)
{
	if (arg == 1)
		return 1;
	return arg*Facto(arg - 1);
}

int main()
{
	cout << "¬ведите число дл€ которого нужно найти факториал -> ";
	int a;
	cin >> a;
	cout << Facto(a);
	system("pause");
	return 0;
}