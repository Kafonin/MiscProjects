#include <iostream>
#include <iomanip>

using namespace std;

void twentyPercentDiscount(double &purchase);
void additionalDiscount(double &purchase);
void salesTax(double &purchase);

int main()
{
	double purchase = 00.00;

	cout << "Enter the total price of your purchases:" << endl;
	cin >> purchase;


	twentyPercentDiscount(purchase);
	if (purchase >= 50)
	{
		additionalDiscount(purchase);
	}
	salesTax(purchase);

	cout << "The final price of your purchase including all promotions and tax is: " << fixed << setprecision(2) << purchase; // fixed << setprecision for the magic to happen

	return 0;
}

void twentyPercentDiscount(double &purchase)
{
	purchase = purchase - (purchase * .20);
}

void additionalDiscount(double &purchase)
{
	purchase = purchase - 10;
}

void salesTax(double &purchase)
{
	purchase = purchase + (purchase * .07);
}