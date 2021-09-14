#include <iostream>
#include <stdlib.h>


int main() {
	srand(time(0));
	char difficulty{};
	int interval{};
	int num{};
	int guess{};
	int guesscount{ 0 };
	int score{};
	char input{};

	std::cout << "Choose difficulty" << "\n a: 1-5 Numbers" << "\n b: 1-10 Numbers" << "\n c: 30 Numbers" << std::endl;

	std::cin >> difficulty;
	switch (difficulty) {
	case 'a':
		interval = 5;
		break;
	case 'b':
		interval = 10;
		break;
	case'c':
		interval = 30;
		break;
	default:
		std::cout << "Invalid input";
	}
	num = rand() % interval + 1;
		
	std::cout << "Guess random number" << std::endl;
	std::cin >> guess;
	
	do {
		do {
			if (guess == num) {
				guesscount++;
				break;
			}
			else if (guess < num) {
				std::cout << "Go higher, try again" << std::endl;
				std::cin >> guess;
				guesscount++;
			}
			else if (guess > num) {
				std::cout << "Go lower, try again" << std::endl;
				std::cin >> guess;
				guesscount++;
			}
		} while (guess != num);

		std::cout << "You guessed correct " << " you used " << guesscount << " Guesses" << std::endl;

		if (guesscount < score) {
			std::cout << "New Highscore" << std::endl;
			score == guesscount;
		}
	
	} 
	while (input == 'y');

	return 0;
}