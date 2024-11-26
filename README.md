# Hangman Game

Welcome to the **Hangman Game**! This is a simple command-line-based implementation of the classic word-guessing game. Players must guess a randomly selected word one letter at a time, with a limited number of tries.

## Features
- Random word selection from a predefined list.
- Case-insensitive guessing.
- Tracks and displays previously guessed letters.
- Input validation to prevent invalid guesses.
- Clear feedback for correct and incorrect guesses.
- Replay functionality to play multiple rounds without restarting the program.

## Gameplay
1. A random word is selected, and its letters are hidden (displayed as underscores `_`).
2. Players guess one letter at a time.
3. Each correct guess reveals the letter(s) in the word.
4. Incorrect guesses decrease the number of remaining tries.
5. The game ends when:
   - The player guesses the word correctly.
   - The player runs out of tries.
6. Players can choose to play again after each round.

## How to Run the Game
1. Ensure you have a C++ compiler (e.g., GCC, Clang, or MSVC) installed.
2. Copy the game code into a file named `hangman.cpp`.
3. Open a terminal or command prompt and navigate to the file's directory.
4. Compile the code using the following command:
   ```bash
   g++ -o hangman hangman.cpp
