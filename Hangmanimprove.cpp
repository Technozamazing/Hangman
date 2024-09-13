#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <cctype>  
using namespace std;

int random(int a, int b)
{
    thread_local mt19937 eng{random_device{}()};
    uniform_int_distribution<int> dist(a, b);
    return dist(eng);
}

string randomWord()
{
    string words[] = 
    {
        "Nepal", "Pakistan", "India", "Malaysia", "Philippines",
        "Australia", "Iran", "Ethiopia", "Oman", "Indonesia"
    };
    int index = random(0, 9);
    return words[index];
}

int letterFill(char guess, string secretword, string &guessword)
{
    int matches = 0;
    int len = secretword.length();

    for (int i = 0; i < len; i++)
    {
        if (tolower(guess) == tolower(guessword[i])) return 0;  
        if (tolower(guess) == tolower(secretword[i]))
        {
            guessword[i] = secretword[i]; 
            matches++;
        }
    }
    return matches;
}

void displayCurrentState(const string &unknown, int tries, const vector<char>& guessedLetters)
{
    cout << "Current word: " << unknown << endl;
    cout << "You have " << tries << " tries left." << endl;
    cout << "Previous guesses: ";
    for (char g : guessedLetters) cout << g << " ";
    cout << endl;
}

int main()
{
    while (true)
    {
        int tries = 6;
        string word = randomWord();
        string unknown(word.length(), '_'); 
        vector<char> guessedLetters;

        cout << "Welcome to Hangman!" << endl;
        cout << "A random word has been generated! It has " << word.length() << " letters!" << endl;

        while (tries > 0)
        {
            displayCurrentState(unknown, tries, guessedLetters);

            string input;
            cout << "Guess a letter: ";
            cin >> input;

            if (input.empty() || input.length() > 1 || !isalpha(input[0])) 
            {
                cout << "Invalid input! Please enter a single letter." << endl;
                continue;
            }

            char letter = tolower(input[0]);

            if (find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end())
            {
                cout << "You've already guessed that letter!" << endl;
                continue;
            }

            guessedLetters.push_back(letter);  

            if (letterFill(letter, word, unknown) == 0)
            {
                cout << "Sorry, no '" << letter << "' in the word." << endl;
                tries--;
            }
            else
            {
                cout << "Nice! '" << letter << "' is in the word!" << endl;
            }

            if (word == unknown)
            {
                cout << "Congratulations! You've guessed the word: " << word << endl;
                break;
            }
        }

        if (word != unknown)
        {
            cout << "Sorry, you've run out of tries! The word was: " << word << endl;
        }

        char playAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        if (tolower(playAgain) != 'y') {
            cout << "Thanks for playing! Goodbye." << endl;
            break;
        }
    }

    return 0;
}
