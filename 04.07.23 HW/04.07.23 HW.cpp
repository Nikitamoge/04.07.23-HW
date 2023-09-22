#include <iostream>
using namespace std;

int main()
{
	//Task1
	srand(time(0));
	const int size = 10;
	const int sizeOf = 5;

	int arr3[size];

	int arr1[sizeOf];
	int arr2[sizeOf];

	for (int i = 0; i < size; i++)
	{
		arr3[i] = rand() % 21;
	}
	for (int i = 0; i < sizeOf; i++)
	{
		arr1[i] = arr3[i];
		arr2[i] = arr3[i + 5];
		cout << arr1[i] << "\n" << arr2[i] << "\n";
	}


	//Task2 
	const int size_one = 5;
	int array[size_one];
	int array1[size_one];
	int array2[size_one];
	for (int i = 0; i < size_one; i++)
	{
		array1[i] = 1 + rand() % 20;
		array2[i] = 1 + rand() % 20;
		array[i] = array1[i] + array2[i];
		cout << array[i] << "\n";
	}


	//Task3 
	const int day = 7;
	string week[day] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	int money[day];
	int average = 0;
	int sum = 0;
	for (int i = 0; i < day; i++)
	{
		cout << "Enter the amount of your expenses for every day: ";
		cin >> money[i];
	}
	for (int i = 0; i < day; i++)
	{
		sum += money[i];
		if (money[i] > 100)
		{
			cout << "In this day your expense more than one hundred dollars: " << week[i] << "\n";
		}
	}
	average = sum / day;
	cout << "Sum is: " << sum << "\n";
	cout << "Average:   " << average << "\n";


	//Task 4
	const int months = 12;
	long double exchange[months];
	long double interest[months];
	long double deposit;
	int month;

	cout << "Enter the dollar to euro rate for each month:" << "\n";
	for (int i = 0; i < months; i++) {
		cout << "Месяц " << (i + 1) << ": ";
		cin >> exchange[i];
	}

	cout << "Enter the interest on the deposit in euros for each month:" << "\n";
	for (int i = 0; i < months; i++) {
		cout << "Месяц " << (i + 1) << ": ";
		cin >> interest[i];
	}

	cout << "Enter the amount on deposit in euros: ";
	cin >> deposit;

	cout << "Enter the number of the month in which you want to withdraw: ";
	cin >> month;

	if (month < 1 || month > months) {
		cout << "Incorrect month number!" << "\n";
		return 1;
	}

	double monthly = interest[month - 1];
	double rate = exchange[month - 1];
	double max_amount = 0;

	if (monthly >= 500) {
		max_amount = (monthly / 2) * rate;
		if (max_amount > deposit) {
			max_amount = deposit;
		}
	}

	cout << "Maximum amount for cash withdrawal: " << max_amount << "\n";

	return 0;
}
