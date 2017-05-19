#include <iostream>

int flag = 1;
int flag2 = 1;
int gradein = 0;
int contin = 0;


int main()
{
	while(flag == 1)
	{

		std::cout << "\nPlease insert a number grade (0-100) to receive a letter grade:\n\n";
		std::cin >> gradein;
		std::cout << "\n";
		
		if (gradein == 100)
		{
			std::cout << "Congratulations! You made a perfect score.\n\nA+\n\n";
		}
		else if (gradein < 100 && gradein >= 90)
		{
			std::cout << "Excellent Job! You did very well.\n\nA\n\n";
		}
		else if (gradein < 90 && gradein >= 80)
		{
			std::cout << "Good Job.\n\nB\n\n";
		}
		else if (gradein < 80 && gradein >= 70)
		{
			std::cout << "Good enough! You'll get there.\n\nC\n\n";
		}
		else if (gradein < 70 && gradein >= 60)
		{
			std::cout << "So close. Keep trying and don't give up!\n\nD\n\n";
		}
		else if (gradein < 60 && gradein >= 0)
		{
			std::cout << "Ouch... looks like you have some work to do...\n\nF\n\n";
		}
		else
		{
			std::cout << "The grade you entered doesn't make sense...\n";
			if (gradein < 0)
			{
				std::cout << "I didn't think it was possible to get a negative grade... Wowzerz.\n";
			}
			else if (gradein > 100)
			{
				std::cout << "You are either really special, or really \"special\"...\n";
			}
		}

		while(flag2 == 1)
		{

			std::cout << "Would you like to enter another grade? (1/0)\n\n";
			std::cin >> contin;
			
			if (contin == 1)
			{
				flag = 1;
				flag2 = 0;
			}
			else if (contin == 0)
			{
				flag = 0;
				flag2 = 0;
			}
			else
			{
				flag2 = 1;
				std::cout << "\nYour response doesn't make sense. Please try again.\n\n";
			}
		}


		flag2 = 1;				
	}



	return 0;

}

