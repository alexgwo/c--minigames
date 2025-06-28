#include <iostream>

int main(){

    std::string questions[] =   {"1. Is the Earth Flat?",
                                 "2. How many Pkmns were created in the first generation?",
                                 "3. What number am I thinking of?",
                                 "4. What is my favorite animal?"};
    std::string options[][4] =  {{"A. yes", "B. no", "C. maybe", "D. kinda"},
                                {"A. 150", "B. 151", "C. 152", "D. 153"},
                                {"A. 0", "B. 42", "C. 1010", "D. 2"},
                                {"A. dog", "B. cat", "C. capybara", "D. spiders"}};

    char answerKey[] = {'A', 'B', 'C', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "*********************************** \n";
        std::cout << questions[i] << "\n";
        std::cout << "*********************************** \n";
        for(int j = 0 ; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << "\n";
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "CORRECT \n";
            score++;
        }
        else{
            std::cout << "WRONG \n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }
    std::cout << "*********************************** \n";
    std::cout << "*             RESULTS             * \n";
    std::cout << "*********************************** \n";
    std::cout << "CORRECT GUESSES: " << score << "\n";
    std::cout << "SCORE: " << (score/(double)size)*100 << " %";

    return 0;
}
