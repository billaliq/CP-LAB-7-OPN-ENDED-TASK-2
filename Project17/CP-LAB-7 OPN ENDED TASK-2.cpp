#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int prime_number, number, f = 0, i;
	char n;
	long int range;
	long int start_point, end_point;
	cout << "Find prime number(P) or check the specific number(N)?";
	cin >> n;
	if (n == 'P' || n == 'p')
	{
		cout << "Enter your  start point:";
		cin >> start_point;
		cout << "Enter the end point:";
		cin >> end_point;
		cout << "\nPrint number from" << start_point << "to" << end_point;
		while (start_point <= end_point)
		{
			f = 0;
			for (i = 2; i <= start_point / 2; i++)
			{
				if (start_point % i == 0)
				{
					f = 1;
					break;
				}
			}
			if (f == 0)
				cout << "\n" << start_point;
			start_point = start_point + 1;
		}

	}
	else if (n == 'N' || n == 'n')
	{
		cout << "Cheking the number:";
		cin >> number;
		for (int n = 1; n <= number; n++)
		{
			if (number % n != 0)
			{
				cout << "prime number\n";
				break;
			}
			else
			{
				cout << "Composite number\n";
				break;
			}
		}

	}
	else
	{
		cout << "INVALID OPTION\n";
		return 1;
	}
}