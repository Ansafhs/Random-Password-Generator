# Random Password Generator

A simple C program to generate random passwords of a specified length using a combination of uppercase, lowercase, digits, and special characters.

## Table of Contents

1. [About](#about)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [License](#license)

---

## About

This project is a basic **Random Password Generator** written in C. The program prompts the user to input the desired length for the password, then generates a random password consisting of letters (both uppercase and lowercase), numbers, and special characters.

---

## Features

- Generates passwords of any length specified by the user.
- Uses a combination of:
  - Lowercase letters (`a-z`)
  - Uppercase letters (`A-Z`)
  - Digits (`0-9`)
  - Special characters (`!@#$%^&*`)
- Utilizes `rand()` and `time()` for generating random characters.
  
---

## Installation

To use this password generator, you'll need a C compiler (like GCC) to compile and run the program. Follow these steps:

1. Clone the repository (if you are downloading from GitHub):
    ```bash
    git clone https://github.com/your-username/random-password-generator.git
    ```

2. Navigate to the project directory:
    ```bash
    cd random-password-generator
    ```

3. Compile the C program:
    ```bash
    gcc -o password_generator password_generator.c
    ```

---

## Usage

Once compiled, you can run the program as follows:

1. Run the program:
    ```bash
    ./password_generator
    ```

2. Enter the desired password length when prompted:
    ```
    Enter the length of password: 12
    ```

3. The program will generate and display a random password of the specified length. Example output:
    ```
    Generated Password: aB7!n4@D0lP2
    ```

---

## License

This project is open source

---
