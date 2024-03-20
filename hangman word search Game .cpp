#include<iostream>
#include<Windows.h>
using namespace std;

int main()

{
	char mode,repeat;

	cout << "\t\t Welcome To Word Search Game " << endl;
	jump:cout << " Choose the difficulty level to start the Game " << endl;
	cout << " Type E  for Easy Mode " << endl;
	cout << " Type H for Hard Mode " << endl;
	cin >> mode;
	
	char word[9] = { "P*KIS*AN" };
	char word2[9] = { "D**TA**R" };
	char guess1, guess2, guess3, guess4;
	
	int lose = 0;
	int win = 0;

	

	if (mode == 'E')
	{ 
		do {
			int count = 0;
			int count2 = 0;
			bool won = false;
			cout << "Guess the first hidden alphabet word: P*KIS*AN (5 guesses allowed)" << endl;
			while (count < 5)
			{

				cin >> guess1;
				if (guess1 == 'A' || guess1=='a')
				{
					word[1] = 'A';
					cout << word << endl;
					won = true;
					break;
				}
				else
				{

					cout << "Wrong Guess!Try Again" << endl;
					count++;
					continue;
				}

			}
			if (!won)
			{
				cout << "Sorry!You have lost the Game" << endl;

				lose++;

			}
			else {

				cout << "Guess the second hidden alphabet  word: P*KIS*AN (5 guesses allowed)" << endl;
				while (count2 < 5)
				{

					cin >> guess2;
					if (guess2 == 'T' || guess2=='t')
					{
						word[5] = 'T';
						cout << word << endl;
						won = true;
						break;
					}
					else
					{
						cout << "Wrong Guess!Try Again" << endl;
						count2++;
						continue;

					}
				}

				if (!won)
				{
					cout << "Sorry! You have lost the Game" << endl;

					lose++;

				}
				else
				{
					cout << "Congratulations!You have won the Game" << endl;

					win++;
				}
			}

			cout << "Do you want to play more?" << endl;
			cout << "Press 1 for Yes & any button for No" << endl;
			cin >> repeat;
		}
	   while (repeat == 1);
	  
	    

		   cout << "The totals wins are:" << win << endl;
		   cout << "The totals loses are:" << lose << endl;
		   exit(1);
	}
	else if (mode == 'H')
	{
		do {
			int count = 0;
			int count2 = 0;
			int count3 = 0;
			int count4 = 0;
			bool won = false;
			cout << "Guess the first hidden alphabet word: D**TA**R (5 guesses allowed)" << endl;
			while (count < 5)
			{

				cin >> guess1;
				if (guess1 == 'I' || guess1=='i')
				{
					word2[1] = 'I';
					cout << word2 << endl;
					won = true;
					break;
				}
				else
				{

					cout << "Wrong Guess!Try Again" << endl;
					count++;
					continue;
				}

			}
			if (!won)
			{
				cout << "Sorry!You have lost the Game" << endl;

				lose++;

			}
			else {

				cout << "Guess the second hidden alphabet  word: D**TA**R (5 guesses allowed)" << endl;
				while (count2 < 5)
				{

					cin >> guess2;
					if (guess2 == 'C' || guess2=='c')
					{
						word2[2] = 'C';
						cout << word2 << endl;
						won = true;
						break;
					}
					else
					{
						cout << "Wrong Guess!Try Again" << endl;
						count2++;
						continue;

					}
				}

				if (!won)
				{
					cout << "Sorry! You have lost the Game" << endl;

					lose++;

				}
				else
				{
					cout << "Guess the third hidden alphabet  word: D**TA**R (5 guesses allowed)" << endl;
					while (count3 < 5)
					{

						cin >> guess3;
						if (guess3 == 'T' || guess3=='t')
						{
							word2[5] = 'T';
							cout << word2 << endl;
							won = true;
							break;
						}
						else
						{
							cout << "Wrong Guess!Try Again" << endl;
							count2++;
							continue;

						}
					}

						if (!won)
						{
							cout << "Sorry! You have lost the Game" << endl;

							lose++;

						}
						else
						{
							cout << "Guess the fourth hidden alphabet  word: D**TA**R (5 guesses allowed)" << endl;
							while (count4 < 5)
							{

								cin >> guess4;
								if (guess4 == 'O'|| guess4 =='o')
								{
									word2[6] = 'O';
									cout << word2 << endl;
									won = true;
									break;
								}
								else
								{
									cout << "Wrong Guess!Try Again" << endl;
									count2++;
									continue;

								}
							}

								if (!won)
								{
									cout << "Sorry! You have lost the Game" << endl;

									lose++;

								}
								else {
									cout << "Congratulations!You have won the Game" << endl;

									win++;
								}
							
						}
					
				}
			}

			cout << "Do you want to play more?" << endl;
			cout << "Press Y for Yes & N  for No" << endl;
			cin >> repeat;
		} while (repeat == 'Y' || repeat=='y');



		cout << "The totals wins are:" << win << endl;
		cout << "The totals loses are:" << lose << endl;
		exit(1);
	}
	else
	{
		cout << "Wrong Input!Try Again" << endl;
		goto jump;
	}
	return 0;
}
