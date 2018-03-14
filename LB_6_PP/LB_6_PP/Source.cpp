#include <iostream>

using namespace std;

//This program is for finding factorial

long long Facto(int arg)
{
	if (arg == 2)
		return 0;
	return arg*Facto(arg - 1);
}

int main()
{
	cout << "¬ведите число дл€ которого нужно найти факториал -> ";
	int a;
	cin >> a;
	cout << Facto(a);
	return 0;
}