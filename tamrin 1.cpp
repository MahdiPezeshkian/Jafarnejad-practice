/*

برنامه ای بنویسید که دو مقدار اعشاری را از ورودی خوانده
و تفاصل و حاصل ضرب و حاصل تقسیم آنها را محاسبه کرده 
و در خروجی چاپ کند

*/

#include <iostream>

using namespace std;


int main()
{
	bool isAlive = true;
	while (isAlive)
	{
		float number_a;
		float number_b;
		float result;
		bool exit_isAlive = true;

		cout << "pleas enter two number" << endl;
		cout << "enter number A : ";
		cin >> number_a;
		cout << "enter number A : ";
		cin >> number_b;
		result = number_a - number_b;
		cout << number_a << " - " << number_b << " = " << result << endl;
		result = number_a * number_b;
		cout << number_a << " * " << number_b << " = " << result << endl;
		result = number_a / number_b;
		cout << number_a << " / " << number_b << " = " << result << endl;


		while (exit_isAlive)
		{
			char exit;
			cout << "do you want to exit? y/n : ";
			cin >> exit;

			if (exit == 'y')
			{
				isAlive = false;
				exit_isAlive = false;
			}
			else if (exit == 'n')
			{
				cout << "\n";
				exit_isAlive = false;
			}
			else
			{
				exit_isAlive = true;
			}
		}
	}



	return 0;
}