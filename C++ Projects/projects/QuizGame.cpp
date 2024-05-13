#include <iostream>

int main(){

    std::string questions[] = {
        "1. What year was C++ Created?: ",
        "2. Who invented C++: ",
        "3. What was the predecessor of C++ compiler?: ",
        "4. Is the earth Flat?: ",
        "5. who is FireEmperor?: "
    };

    std::string options[][5] = {{"A. 1969","B. 1975","C. 1985","D. 1989" },
                                {"A. <Guido van Rossum>","B. <Bjarne Stroustrup>","C. <John Carmack >","D. <Nishant Acharekar>" },
                                {"A. C","B. C+","C. C--","D. JAVA" },
                                {"A. Yes","B. No","C. Maybe","D. I don't know" },
                                {"A. <Nishant>","B. <Pratik>","C. <Cherry>","D. <Janhavi>" }
                                };
                                
    char answerKey[] = {'C','B','A', 'B', 'C'}; // Correct answers for each question in order.

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++) {
        std::cout << "********************\n";
        std::cout << questions[i] << '\n';
        std::cout << "********************\n";

        for(int j = 0; j < static_cast<int>(sizeof(options[i])/sizeof(options[i][0])); j++)
        {
            std::cout << options[i][j] <<'\n';
        }
        
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "Correct!\n";
            score++;
        } else {
            std::cout << "Incorrect! \n";
            std::cout << "Answer: " << answerKey[i] << '\n';

        }
    }
    std::cout << "********************\n";
    std::cout << "      Results        \n";
    std::cout << "********************\n";
    std::cout << "Correct Guess: " << score << '\n';
    std::cout << "No of Questions: " << size << '\n';
    std::cout << "Score: " << (score/(double)size)*100 << "%";
    return 0;
}
