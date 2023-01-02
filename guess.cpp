#include <iostream>
#include <string>

void guess() {

    std::cout << "Thank you for choosing to play!\n";

    // while loop
    // if statements

    int userPoints = 0;
    int userStrikes = 0;
    int maxStrikes = 5;

    while (userStrikes <= maxStrikes) {
        
        std::string question1;
        std::cout << "what is the capital of Oregon?\n";
        std::cin >> question1;
        if (question1 == "salem") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
        } else {
            userStrikes++;
            std::cout << "Incorrect! You now have " << userStrikes << " strike(s).\n";
        }

        std::string question2;
        std::cout << "what is the capital of California?\n";
        std::cin >> question2;
        if (question2 == "sacramento") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
        } else {
            userStrikes++;
            std::cout << "Incorrect! You now have " << userStrikes << " strike(s).\n";
        }
        
        std::string question3;
        std::getline(std::cin, question3);
        std::cout << "What is the capital of New Mexico?\n";
        std::getline(std::cin, question3);
        if (question3 == "santa fe") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
        } else {
            userStrikes++;
            std::cout << "WRONG! You now have " << userStrikes << " strike(s).\n";
        }

        std::string question4;
        std::cout << "What is the capital of Washington State?\n";
        std::cin >> question4;
        if (question4 == "seattle") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
        } else {
            userStrikes++;
            std::cout << "WRONG! You now have " << userStrikes << " strike(s).\n";
        }

        std::string question5;
        std::cout << "What is the capital of Mississippi?\n";
        std::cin >> question5;
        if (question5 == "jackson") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
        } else {
            userStrikes++;
            std::cout << "WRONG! You now have " << userStrikes << " strike(s).\n";
        }
        
        std::string question6;
        std::cout << "What is the capital of Wyoming?\n";
        std::cin >> question6;
        if (question6 == "cheyenne") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
        } else {
            userStrikes++;
            std::cout << "Maybe next time! You now have " << userStrikes << " strike(s).\n";
        }
        
        std::string question7;
        std::cout << "What is the capital of Arizona?\n";
        std::cin >> question7;
        if (question7 == "phoenix") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
        } else {
            userStrikes++;
            std::cout << "Maybe next time! You now have " << userStrikes << " strike(s).\n";
        }

        std::string question8;
        std::cout << "What is the capital of Tennessee?\n";
        std::cin >> question8;
        if (question8 == "nashville") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
        } else {
            userStrikes++;
            std::cout << "Maybe next time! You now have " << userStrikes << " strike(s).\n";
        }

        std::string question9;
        std::cout << "What is the capital of Arkansas?\n";
        std::cin >> question9;
        if (question9 == "little rock") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
        } else {
            userStrikes++;
            std::cout << "Maybe next time! You now have " << userStrikes << " strike(s).\n";
        }

        std::string question10;
        std::cout << "What is the capital of Alaska?\n";
        std::cin >> question10;
        if (question10 == "junea") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
            break;
        } else {
            userStrikes++;
            std::cout << "Maybe next time! You now have " << userStrikes << " strike(s).\n";
            break;
        }
        


    }

    if (userStrikes > maxStrikes) {

        std::cout << "You have exceeded the number of strikes.\n";
        std::cout << "GAME OVER!\n";
    } 


    int score = ((double)userPoints / 10.0)*100;
    std::cout << "You scored a " << score << "%\n";

    
}



int main() {

    // US geography quiz

    std::string play;
    std::cout << "Do you want to play?(type 'yes' or 'no'):\n";
    //user input
    std::cin >> play;
    if (play == "yes") {
        guess();
    } else {
        std::cout << "You chose not to play :(";
    }

}