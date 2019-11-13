/***************************************************************************/
/***************************Kenny Afonin************************************/
/***************************11/12/2019**************************************/
/***************************************************************************/

//write a program that keeps track of how much food 3 monkeys eat in 5 days.
//Find the greatest amount of food eaten, and the least amount of food eaten by a monkey.

#include <iostream>
#include <iomanip>
#include <limits>

constexpr auto COLUMN = 5;
constexpr auto ROW = 3;


///////////////////////////////////////////////////PROTOTYPE
void foodInput(double monkeyArray[ROW][COLUMN], int userInput);
void foodCalculator(double monkeyArray[ROW][COLUMN]);
void minMaxFoodEatenFinder(double monkeyArray[ROW][COLUMN]);



//////////////////////////////////////////////////PROGRAM START
int main()
{
    //VARIABLES GO HERE
	double monkeyArray[ROW][COLUMN];
    int userInput = 0;

    //START FUNCTION HERE
    foodInput(monkeyArray, userInput);
	foodCalculator(monkeyArray);
	minMaxFoodEatenFinder(monkeyArray);

    return 0;
}

//////////////////////////////////////////////FUNCTIONS GO HERE

/*if (std::cin.fail())
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int gradeValidator(int continuing, const int SENTINELVALUE)
{
	while (true)
	{
		if (std::cin.fail() || continuing < -1)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Error: Grades must be an integer 0 or higher." << std::endl;
			std::cout << "Enter an exam grade (type -1 to quit): " << std::endl;
			std::cin >> continuing;
		}
		else if (!std::cin.fail())
		{
			break;
		}
	}
	return continuing;
}*/

void foodInput(double monkeyArray[ROW][COLUMN], int userInput) //Handles input into multidimensional array
{
	bool notComplete = true;

	for (int monkeyNumber = 0; monkeyNumber < ROW; monkeyNumber++)//monkey loop executes
	{
		for (int day = 0; day < COLUMN; day++)//days of the week loop executes 5 times
		{	
			notComplete = true;
			while (notComplete) {
				std::cout << "Enter the pounds eaten by monkey number " << monkeyNumber + 1 << "\non day " << day + 1 << ": ";
				std::cin >> userInput;
				
				// make sure that the userInput is not a character
				
				if (userInput > 0) {
					notComplete = false;
				}
				else {
					std::cout << "Must be positive\n";
				}
			}
				
			monkeyArray[monkeyNumber][day] = userInput;
		}
	}
	

}

void foodCalculator(double monkeyArray[ROW][COLUMN])//Averages the amount of food eaten per day
{
	double sum = 0.0;
	double average = 0.0;

	for (int day = 0; day < COLUMN; day++)//for loop to average out the columns
	{
		for (int monkeyNumber = 0; monkeyNumber < ROW; monkeyNumber++)//what all three monkeys ate on day #__, average it
		{
			sum = sum + monkeyArray[monkeyNumber][day];
		}
		average = (sum / 5.0);
		std::cout << "The average amount eaten on day " << day+1 << " is " << std::fixed << std::setprecision(3) << average << " pounds." << std::endl;
	}
}

void minMaxFoodEatenFinder(double monkeyArray[ROW][COLUMN])//Find the biggest number and find the smallest number in the array
{
	int minimumNum = monkeyArray[0][0];
	int maximumNum = monkeyArray[0][0];

	for (int monkeyNumber = 0; monkeyNumber < ROW; monkeyNumber++)
	{
		for (int day = 0; day < COLUMN; day++)
		{
			if (monkeyArray[monkeyNumber][day] > maximumNum)//if you're bigger than the max, you're the new max
			{
				maximumNum = monkeyArray[monkeyNumber][day];
			}
			if (monkeyArray[monkeyNumber][day] < minimumNum)//if you're smaller than the min, you're the new min
			{
				minimumNum = monkeyArray[monkeyNumber][day];
			}
		}
	}

	for (int i = 1; i < ROW; i++)
	{
		for (int j = 1; j < COLUMN; j++)
		{
			if (monkeyArray[i][j] == minimumNum)
			{
				std::cout << "Monkey number: " << i + 1 << " ate the least amount of food, " << minimumNum << " on day " << j + 1 << std::endl;
			}
			if (monkeyArray[i][j] == maximumNum)
			{
				std::cout << "Monkey number: " << i + 1 << " ate the most amount of food, " << maximumNum << " on day " << j + 1 << std::endl;
			}
		}
	}		
}
