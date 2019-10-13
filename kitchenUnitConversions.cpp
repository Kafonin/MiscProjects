#include <iostream>

int main()
{
	int choice = 0;
	double foodAmount = 0.0;
	double foodAmountConverted = 0.0;

	std::cout << "Enter the number that corresponds to your desired unit conversion from the choices below:" << std::endl;
	std::cout << "[1] Tablespoon (Tbsp) to Teaspoons (Tsp)" << std::endl;
	std::cout << "[2] Ounces (Oz) to Grams (g)" << std::endl;
	std::cout << "[3] Cups to Milliliters (ml)" << std::endl;
	std::cout << "Enter a number:" << std::endl;
	std::cin >> choice;

	switch (choice)
	{
	case 1:		std::cout << "Enter the number of tablespoons:" << std::endl;
				std::cin >> foodAmount;
				foodAmountConverted = foodAmount * 3;
				std::cout << "There are " << foodAmountConverted << " teaspoons in " << foodAmount << " tablespoons" << std::endl;
				break;
	
	case 2:		std::cout << "Enter the number of ounces:" << std::endl;
				std::cin >> foodAmount;
				foodAmountConverted = foodAmount * 28.35;
				std::cout << "There are " << foodAmountConverted << " grams in " << foodAmount << " ounces" << std::endl;
				break;
	
	case 3:		std::cout << "Enter the number of cups:" << std::endl;
				std::cin >> foodAmount;
				foodAmountConverted = foodAmount * 236.6;
				std::cout << "There are " << foodAmountConverted << " ml in " << foodAmount << " cups" << std::endl;
				break;

	default:	std::cout << "Invalid choice. Please run the program again.";
				break;
	}
}