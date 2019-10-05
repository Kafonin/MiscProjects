/*****************************************************************************************/
/*********************Project 1 - The Speed of Sound in Gases*****************************/
/*******************************Author: Kenny Afonin**************************************/
/**********************************October 5, 2019****************************************/
/*****************************************************************************************/


//header files go here
#include <iostream>																															//input + output, as well as set precision wanted for this program.
#include <iomanip>



int main()
{
	//variables
	int usersChoiceOfGas = 0;
	int numberOfSecondsOfTravel = 0;
	float result = 00.00;

	
	
	//prompt user with a menu of gases
	std::cout << "Select one of the following gases:" << std::endl;
	std::cout << "1. Carbon Dioxide\n2. Air\n3. Helium\n4. Hydrogen" << std::endl;

	
	
	//input one of the options as an integer
	std::cout << "\nEnter your choice: ";
	std::cin >> usersChoiceOfGas;


	
	
	//processing done in if/else, output given within the if/else branch.
	if (usersChoiceOfGas == 1)																								//if user chooses option one ...
	{	
		std::cout << "Enter the number of seconds: ";
		std::cin >> numberOfSecondsOfTravel;																				//perform operation.
		if (numberOfSecondsOfTravel >= 1 && numberOfSecondsOfTravel <= 30)
		{
			result = static_cast<float>(numberOfSecondsOfTravel) * 258.0;
			std::cout << "A sound wave travels " << std::fixed << std::setprecision(1) << result << " meters in " 
				<< std::fixed << std::setprecision(1) << static_cast<float>(numberOfSecondsOfTravel) << " seconds through carbon dioxide.";
		}
		else
		{
			std::cout << "Seconds must be a number between 0.0 and 30.0.";
		}
	}
	
	else if (usersChoiceOfGas == 2)																												//begin option two here.
	{
		std::cout << "Enter the number of seconds: ";
		std::cin >> numberOfSecondsOfTravel;
		if (numberOfSecondsOfTravel >= 1 && numberOfSecondsOfTravel <= 30)
		{
			result = static_cast<float>(numberOfSecondsOfTravel) * 331.5;
			std::cout << "A sound wave travels " << std::fixed << std::setprecision(1) << result << " meters in " 
				<< std::fixed << std::setprecision(1) << static_cast<float>(numberOfSecondsOfTravel) << " seconds through carbon dioxide.";
		}
		else
		{
			std::cout << "Seconds must be a number between 0.0 and 30.0.";
		}
	}

	else if (usersChoiceOfGas == 3)																												//begin option three here.
	{
		std::cout << "Enter the number of seconds: ";
		std::cin >> numberOfSecondsOfTravel;
		if (numberOfSecondsOfTravel >= 1 && numberOfSecondsOfTravel <= 30)
		{
			result = static_cast<float>(numberOfSecondsOfTravel) * 331.5;
			std::cout << "A sound wave travels " << std::fixed << std::setprecision(1) << result << " meters in " 
				<< std::fixed << std::setprecision(1) << static_cast<float>(numberOfSecondsOfTravel) << " seconds through carbon dioxide.";
		}
		else
		{
			std::cout << "Seconds must be a number between 0.0 and 30.0.";
		}
	}

	else if (usersChoiceOfGas == 4)																												//begin option four here.
	{
		std::cout << "Enter the number of seconds: ";
		std::cin >> numberOfSecondsOfTravel;
		if (numberOfSecondsOfTravel >= 1 && numberOfSecondsOfTravel <= 30)
		{
			result = static_cast<float>(numberOfSecondsOfTravel) * 331.5;
			std::cout << "A sound wave travels " << std::fixed << std::setprecision(1) << result << " meters in " 
				<< std::fixed << std::setprecision(1) << static_cast<float>(numberOfSecondsOfTravel) << " seconds through carbon dioxide.";
		}
		else
		{
			std::cout << "Seconds must be a number between 0.0 and 30.0.";
		}
	}
	
	else																																		//terminate if unavailable option is chosen.
	{
		std::cout << "The valid choices are 1 through 4. Run the\nprogram again and select one of those.";
	}


	return 0;
}