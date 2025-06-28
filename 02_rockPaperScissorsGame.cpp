#include <iostream>

char getUserChoice();
char getCPUChoice();
void showChoice(char choice);
void chooseWinner(char player, char CPU);

int main(){
    char player;
    char CPU;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    CPU = getCPUChoice();
    std::cout << "CPU's choice is: ";
    showChoice(CPU);

    chooseWinner(player,CPU);

    return 0;
}

char getUserChoice(){
    char player;
    std::cout << "Rock, Paper, Scissors Game! \n";
    do{
        std::cout << "Choose one of the following \n";
        std::cout << "**************************** \n";
        std::cout << "'r' for rock \n";
        std::cout << "'p' for paper \n";
        std::cout << "'s' for scissors \n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    // std::cout << player;
    return player;
}
char getCPUChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}
void showChoice(char choice){

    switch(choice){
        case 'r': std::cout << "Rock \n";
                  break;
        case 'p': std::cout << "Paper \n";
                  break;
        case 's': std::cout << "Scissors \n";
                  break;
    }
}
void chooseWinner(char player, char CPU){

    switch(player){
        case 'r':
            if(CPU == 'r'){
                std::cout << "It's a tie. \n";
            }
            else if (CPU == 'p'){
                std::cout << "You lose! \n";
            }
            else{
                std::cout << "You win! \n";
            }
            break;

        case 'p':
            if(CPU == 'r'){
                std::cout << "You win! \n";
            }
            else if (CPU == 'p'){
                std::cout << "It's a tie. \n";
            }
            else{
                std::cout << "You lose! \n";
            }
            break;

        case 's':
            if(CPU == 'r'){
                std::cout << "You lose! \n";
            }
            else if (CPU == 'p'){
                std::cout << "You win! \n";
            }
            else{
                std::cout << "It's a tie. \n";
            }
            break;
    }

}
