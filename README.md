# C++ Calculator Project

A simple yet functional calculator application written in C++. This project demonstrates object-oriented programming principles and basic C++ concepts.

## Features

- Basic arithmetic operations (addition, subtraction, multiplication, division)
- Interactive menu-driven interface
- Input validation and error handling
- Clean object-oriented design with separate header and implementation files

## Project Structure

```
.
├── calculator.h       # Calculator class header file
├── calculator.cpp     # Calculator class implementation
├── main.cpp          # Main application with user interface
├── Makefile          # Build configuration
└── README.md         # This file
```

## Prerequisites

- C++ compiler (g++ recommended)
- Make utility

## Building the Project

To compile the calculator application, run:

```bash
make
```

This will create an executable named `calculator` in the current directory.

## Running the Application

After building, you can run the calculator with:

```bash
make run
```

Or directly:

```bash
./calculator
```

## Usage

Once the application starts, you'll see a menu with the following options:

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit

Simply enter the number corresponding to your desired operation, then provide the two numbers you want to calculate with.

## Cleaning Build Artifacts

To remove compiled files and the executable:

```bash
make clean
```

## Example

```
Welcome to the C++ Calculator Application!

=== Simple Calculator ===
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter your choice (1-5): 1
Enter first number: 10
Enter second number: 5
Result: 10 + 5 = 15
```

## License

This project is licensed under the MIT License - see the LICENSE file for details.
