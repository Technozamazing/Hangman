<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Hangman Game</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 0;
            padding: 20px;
            background-color: #f4f4f9;
            color: #333;
        }
        h1 {
            color: #333;
        }
        pre {
            background-color: #f8f8f8;
            padding: 10px;
            border: 1px solid #ddd;
            border-radius: 4px;
            overflow-x: auto;
        }
        code {
            background-color: #f4f4f4;
            padding: 2px 4px;
            border-radius: 4px;
            font-family: Consolas, monospace;
        }
        ul {
            margin: 10px 0;
            padding-left: 20px;
        }
        a {
            color: #007BFF;
            text-decoration: none;
        }
        a:hover {
            text-decoration: underline;
        }
    </style>
</head>
<body>
    <h1>Hangman Game</h1>
    <p>Welcome to the <strong>Hangman Game</strong>! This is a simple command-line-based implementation of the classic word-guessing game. Players must guess a randomly selected word one letter at a time, with a limited number of tries.</p>

    <h2>Features</h2>
    <ul>
        <li>Random word selection from a predefined list.</li>
        <li>Case-insensitive guessing.</li>
        <li>Tracks and displays previously guessed letters.</li>
        <li>Input validation to prevent invalid guesses.</li>
        <li>Clear feedback for correct and incorrect guesses.</li>
        <li>Replay functionality to play multiple rounds without restarting the program.</li>
    </ul>

    <h2>Gameplay</h2>
    <ol>
        <li>A random word is selected, and its letters are hidden (displayed as underscores <code>_</code>).</li>
        <li>Players guess one letter at a time.</li>
        <li>Each correct guess reveals the letter(s) in the word.</li>
        <li>Incorrect guesses decrease the number of remaining tries.</li>
        <li>The game ends when:
            <ul>
                <li>The player guesses the word correctly.</li>
                <li>The player runs out of tries.</li>
            </ul>
        </li>
        <li>Players can choose to play again after each round.</li>
    </ol>

    <h2>How to Run the Game</h2>
    <ol>
        <li>Ensure you have a C++ compiler (e.g., GCC, Clang, or MSVC) installed.</li>
        <li>Copy the game code into a file named <code>hangman.cpp</code>.</li>
        <li>Open a terminal or command prompt and navigate to the file's directory.</li>
        <li>Compile the code using the following command:
            <pre><code>g++ -o hangman hangman.cpp</code></pre>
        </li>
        <li>Run the compiled program:
            <pre><code>./hangman</code></pre>
        </li>
    </ol>

    <h2>Rules</h2>
    <ul>
        <li>Each player starts with <strong>6 tries</strong>.</li>
        <li>Guess one letter at a time.</li>
        <li>Each incorrect guess reduces the remaining tries by one.</li>
        <li>Guesses are case-insensitive (<code>A</code> and <code>a</code> are treated the same).</li>
        <li>You win if you guess all letters in the word before running out of tries.</li>
        <li>You lose if your tries reach 0 before guessing the word.</li>
    </ul>

    <h2>Sample Gameplay</h2>
    <pre>
Welcome to Hangman!
A random word has been generated! It has 7 letters!
Current word: _______
You have 6 tries left.
Previous guesses: 

Guess a letter: a
Nice! 'a' is in the word!
Current word: __a___a_
You have 6 tries left.
Previous guesses: a

Guess a letter: z
Sorry, no 'z' in the word.
Current word: __a___a_
You have 5 tries left.
Previous guesses: a z
...
    </pre>

    <h2>File Structure</h2>
    <p>The program contains the following functions:</p>
    <ul>
        <li><code>random(int a, int b)</code>: Generates a random integer between <code>a</code> and <code>b</code>.</li>
        <li><code>randomWord()</code>: Selects a random word from a predefined list.</li>
        <li><code>letterFill(char guess, string secretword, string &guessword)</code>: Checks if a guessed letter is in the word and updates the hidden word accordingly.</li>
        <li><code>displayCurrentState(const string &unknown, int tries, const vector&lt;char&gt;&amp; guessedLetters)</code>: Displays the current game state, including the word's progress, remaining tries, and previous guesses.</li>
    </ul>

    <h2>Improvements</h2>
    <ul>
        <li>Case-insensitive comparison for better flexibility.</li>
        <li>Input validation to ensure only valid single letters are accepted.</li>
        <li>Replay option for uninterrupted gameplay.</li>
        <li>Tracks and displays previously guessed letters to avoid duplicate guesses.</li>
    </ul>

    <h2>Example Word List</h2>
    <ul>
        <li>Nepal</li>
        <li>Pakistan</li>
        <li>India</li>
        <li>Malaysia</li>
        <li>Philippines</li>
        <li>Australia</li>
        <li>Iran</li>
        <li>Ethiopia</li>
        <li>Oman</li>
        <li>Indonesia</li>
    </ul>
    <p>You can modify this word list inside the <code>randomWord</code> function to include your own choices.</p>

    <h2>Contribution</h2>
    <p>Feel free to enhance the game by adding new features, such as:</p>
    <ul>
        <li>Allowing custom word input by the user.</li>
        <li>A scoring system based on performance.</li>
        <li>Additional difficulty levels with varying word lengths or try limits.</li>
    </ul>

    <h2>License</h2>
    <p>This project is open-source and available for modification and distribution. Contributions are welcome!</p>

    <hr>
    <p>Enjoy playing Hangman and improve your word-guessing skills!</p>
</body>
</html>
