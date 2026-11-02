# C++ Typing Speed Test

A simple and interactive console-based Typing Speed Test developed using C++. This application challenges users to type a randomly selected sentence and evaluates their typing speed, accuracy, and overall performance.

## Features

- **Random Sentences:** Randomly selects a sentence for each test.
- **Typing Speed:** Calculates typing speed in Words Per Minute (WPM).
- **Accuracy Calculation:** Measures typing accuracy as a percentage.
- **Time Tracking:** Records the time taken to complete the typing test.
- **Character Analysis:** Counts correct characters and total characters typed.
- **Performance Feedback:** Displays feedback based on typing accuracy.
- **Interactive Interface:** Simple and easy-to-use console interface.

## Technologies Used

- C++
- Standard Template Library (STL)
- String Manipulation
- Time Management (`ctime`)
- Random Number Generation
- Visual Studio Code
- GCC Compiler (MinGW)

## Project Structure

```text
Typing-Speed-Test/
│
├── main.cpp
├── README.md
└── .gitignore
```

## How to Run

### Prerequisites

- GCC compiler installed (MinGW)
- Visual Studio Code (recommended)

### Steps

1. Clone the repository:

   ```bash
   git clone https://github.com/SOUHARDGUPTA/Typing-Speed-Test.git
   ```

2. Navigate to the project directory:

   ```bash
   cd Typing-Speed-Test
   ```

3. Compile the program:

   ```bash
   g++ main.cpp -o typingtest
   ```

4. Run the program:

   **Windows PowerShell:**
   ```powershell
   .\typingtest.exe
   ```

   **Linux/macOS:**
   ```bash
   ./typingtest
   ```

## How It Works

1. The program randomly selects a sentence.
2. The user types the displayed sentence.
3. The program measures the time taken.
4. Typing speed is calculated in WPM.
5. Accuracy is calculated based on correctly typed characters.
6. A performance report is displayed.

## Learning Objectives

This project demonstrates practical implementation of:

- C++ strings and arrays
- Loops and conditional statements
- Functions and calculations
- Random number generation
- Time measurement using `ctime`
- Basic input/output operations

## Future Improvements

- 60-second countdown timer
- Replay option
- High-score tracking
- Multiple difficulty levels
- Expanded sentence database

## Author

**Souhard Gupta**

GitHub: [@SOUHARDGUPTA](https://github.com/SOUHARDGUPTA)

## License

This project is open-source and available for educational purposes.
