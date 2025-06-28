#include <iostream>
#include <ctime>

int main (){

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "***** NUMBER GUESSING GAME ***** \n";

    do{
        std::cout << "Enter a guesses between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guesses > num){
            std::cout << "Too high! \n";
        }
        else if(guesses < num){
            std::cout << "Too low! \n";
        }
        else{
            std::cout << "Correct! # of tries: " << tries << '\n';
        }


    } while (guesses != num);

    std::cout << "******************************** \n";

    return 0;
}
