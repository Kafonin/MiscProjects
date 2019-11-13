/***************************************************************************/
/***************************Kenny Afonin************************************/
/***************************11/12/2019**************************************/
/***************************************************************************/

//write a program that keeps track of how much food 3 monkeys it in 5 days.
//Find the greatest amount of food eaten, and the least amount of food eaten by a monkey.

#include <iostream>
constexpr auto COLUMN = 5;
constexpr auto ROW = 3;


//PROTOTYPE
void foodInput(int monkeyArray[ROW][COLUMN], int userInput);
void foodCalculator(int monkeyArray[ROW][COLUMN]);

int main()
{
    //VARIABLES GO HERE
	int monkeyArray[ROW][COLUMN];
    int userInput = 0;

    //START FUNCTION HERE
    foodInput(monkeyArray, userInput);


	for(int i=0; i < ROW; i++)
	{
		for(int t = 0; t < COLUMN; t++)
		{
			std::cout << "monkeyArray["<< i << "]["<< t << "] = " << monkeyArray[i][t] << std::endl;
		}
	}

	foodCalculator(monkeyArray);

    return 0;
}

//FUNCTIONS GO HERE
void foodInput(int monkeyArray[ROW][COLUMN], int userInput) //Handles input into multidimensional array
{
    for(int monkeyNumber=0; monkeyNumber < ROW; monkeyNumber++)//monkey loop executes
    {
        for(int day=0; day < COLUMN; day++)//days of the week loop executes 5 times
        {

            std::cout<<"Enter the pounds eaten by monkey number "<< monkeyNumber+1 << "\non day " << day+1 << ": ";
			std::cin >> userInput;
			monkeyArray[monkeyNumber][day] = userInput;
						
        }
    }
}

void foodCalculator(int monkeyArray[ROW][COLUMN])
{
	float sum = 0;
	float average = 0;

	for (int monkeyNumber = 0; monkeyNumber < ROW; monkeyNumber++)
	{
		for (int day = 0; day < COLUMN; day++)
		{
			sum += monkeyArray[monkeyNumber][day];
		}

		average = sum / 5;
		std::cout << average << " ";
	}

}
