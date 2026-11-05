
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {
    char playAgain;

    srand(time(0));

    do {
        string easy[] = {
            "I love learning programming",
            "Practice makes perfect",
            "Coding is fun and exciting",
            "Keep learning every day",
            "Programming is my passion"
        };

        string medium[] = {
            "Programming is the art of solving problems",
            "Consistency is the key to mastering programming",
            "Great software begins with simple ideas",
            "Learning new skills improves your future",
            "Practice coding to improve your logic"
        };

        string hard[] = {
            "Efficient algorithms optimize computational complexity",
            "Object oriented programming promotes modularity",
            "Debugging requires patience and logical reasoning",
            "Artificial intelligence transforms modern technology",
            "Developers continuously improve software efficiency"
        };

        int difficulty;

        cout << "\n====================================" << endl;
        cout << "       C++ TYPING SPEED TEST" << endl;
        cout << "====================================" << endl;

        cout << "\nSelect Difficulty:" << endl;
        cout << "1. Easy" << endl;
        cout << "2. Medium" << endl;
        cout << "3. Hard" << endl;
        cout << "Enter choice: ";
        cin >> difficulty;
        cin.ignore();

        if (difficulty < 1 || difficulty > 3) {
            cout << "\nInvalid difficulty! Please try again." << endl;
            continue;
        }

        string sentence;

        if (difficulty == 1)
            sentence = easy[rand() % 5];
        else if (difficulty == 2)
            sentence = medium[rand() % 5];
        else
            sentence = hard[rand() % 5];

        string typedText;

        double highScores[3] = {0, 0, 0};

        ifstream inFile("highscore.txt");

        if (inFile.is_open()) {
            inFile >> highScores[0];
            inFile >> highScores[1];
            inFile >> highScores[2];
            inFile.close();
        }

        cout << "\nDifficulty: ";

        if (difficulty == 1)
            cout << "Easy";
        else if (difficulty == 2)
            cout << "Medium";
        else
            cout << "Hard";

        cout << "\nYour Best WPM: "
             << highScores[difficulty - 1] << endl;

        cout << "\nType the following sentence exactly:\n" << endl;
        cout << sentence << endl;

        cout << "\nPress ENTER when you are ready...";
        cin.get();

        cout << "\nStart typing:" << endl;

        time_t startTime = time(0);

        getline(cin, typedText);

        time_t endTime = time(0);

        double timeTaken = difftime(endTime, startTime);

        if (timeTaken < 1)
            timeTaken = 1;

        int correctCharacters = 0;
        int minLength;

        if (typedText.length() < sentence.length())
            minLength = typedText.length();
        else
            minLength = sentence.length();

        for (int i = 0; i < minLength; i++) {
            if (typedText[i] == sentence[i])
                correctCharacters++;
        }

        double accuracy = 0;

        if (typedText.length() > 0) {
            accuracy = (double) correctCharacters /
                       typedText.length() * 100;
        }

        double wordsPerMinute =
            (typedText.length() / 5.0) /
            (timeTaken / 60.0);

        cout << "\n====================================" << endl;
        cout << "          YOUR RESULTS" << endl;
        cout << "====================================" << endl;

        cout << "Time Taken: " << timeTaken << " seconds" << endl;
        cout << "Typing Speed: " << wordsPerMinute << " WPM" << endl;
        cout << "Accuracy: " << accuracy << "%" << endl;
        cout << "Correct Characters: " << correctCharacters << endl;
        cout << "Total Characters Typed: "
             << typedText.length() << endl;

        if (wordsPerMinute > highScores[difficulty - 1]) {
            highScores[difficulty - 1] = wordsPerMinute;

            ofstream outFile("highscore.txt");

            if (outFile.is_open()) {
                outFile << highScores[0] << endl;
                outFile << highScores[1] << endl;
                outFile << highScores[2] << endl;
                outFile.close();

                cout << "\nCongratulations! New High Score!" << endl;
            }
            else {
                cout << "\nError saving high score!" << endl;
            }
        }

        cout << "\n========== PERSONAL BESTS ==========" << endl;
        cout << "Easy: " << highScores[0] << " WPM" << endl;
        cout << "Medium: " << highScores[1] << " WPM" << endl;
        cout << "Hard: " << highScores[2] << " WPM" << endl;
        cout << "=================================" << endl;

        cout << "\nWould you like to play again? (y/n): ";
        cin >> playAgain;
        cin.ignore();

        if (playAgain == 'y' || playAgain == 'Y')
            system("cls");

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing!" << endl;
    cout << "Keep practicing your typing skills!" << endl;

    return 0;
}

