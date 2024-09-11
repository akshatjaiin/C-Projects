# C Programs Collection

This repository contains multiple C programs, each demonstrating a different functionality. Below is a summary of the available programs and how to run them.

## Table of Contents

- [Basic Calculator](#basic-calculator)
- [Fake Blue Screen of Death](#fake-blue-screen-of-death)
- [Bouncing Ball Animation](#bouncing-ball-animation)
- [Library Management System](#library-management-system)
- [QR Code Generator](#qr-code-generator)
- [Installation](#installation)
- [System Requirements](#system-requirements)
- [License](#license)

## Basic Calculator

### Description
This program implements a basic text-based calculator. It allows the user to perform addition, subtraction, multiplication, and division.

### Usage

1. Compile the program:
   ```bash
   gcc basic_calculator.c -o calculator
Run the program:

bash
Copy code
./calculator
Choose an operation from the menu:

1: Add
2: Subtract
3: Multiply
4: Divide
5: Exit the program
Features
Supports basic arithmetic operations.
Error handling for invalid choices and division by zero.
Fake Blue Screen of Death
Description
This program simulates a "Blue Screen of Death" (BSOD) for educational or fun purposes. It changes the console color and displays a fake error message.

Usage
Compile the program:

bash
Copy code
gcc fake_bsod.c -o bsod
Run the program:

bash
Copy code
./bsod
Press any key to close the program.

Bouncing Ball Animation
Description
This program displays a bouncing ball animation in the console. The ball moves within the defined console boundaries and bounces when it hits the edges.

Usage
Compile the program:

bash
Copy code
gcc bouncing_ball.c -o ball
Run the program:

bash
Copy code
./ball
Features
Ball moves with collision detection against walls.
Simple terminal animation using ASCII characters.
Library Management System
Description
This is a simple library management system that allows users to add, display, search, and delete books in a virtual library.

Usage
Compile the program:

bash
Copy code
gcc library_management.c -o library
Run the program:

bash
Copy code
./library
Choose from the menu:

1: Add Book
2: Display Books
3: Search Book by ID
4: Delete Book by ID
5: Exit the program
Features
Add and store book details (ID, title, author).
Search and delete books by their ID.
Display all books in the library.
QR Code Generator
Description
This program generates a QR code from a given URL or text and saves it in a PBM (Portable Bitmap) format.

Usage
Install the necessary library for QR code generation:

bash
Copy code
sudo apt-get install libqrencode-dev
Compile the program:

bash
Copy code
gcc qr_code_generator.c -lqrencode -o qrcode
Run the program:

bash
Copy code
./qrcode
The program will generate a QR code and save it as qrcode.pbm. You can view it using any image viewer that supports PBM files.

Features
Generates a QR code for a given URL or string.
Saves the QR code in PBM format.
Installation
To compile and run the programs:

Make sure you have gcc installed. If not, install it using:

bash
```
sudo apt install gcc
Compile each program using gcc. Example:
```
bash
```
gcc program_name.c -o program_name
Run the compiled binary:
```
bash
```
./program_nam
```
System Requirements
Operating System: Linux or any Unix-like environment (e.g., macOS). Windows users may need a C compiler like MinGW or WSL (Windows Subsystem for Linux).
C Compiler: GCC or any C compiler.
Additional Libraries:
libqrencode for the QR code generator.
![image](https://github.com/user-attachments/assets/7afaff3f-4e3c-4504-b852-a143d9b21051)
![image](https://github.com/user-attachments/assets/04448c82-6be3-4e86-a816-52e1b4e12144)
![image](https://github.com/user-attachments/assets/b3d92618-a26d-4f80-9054-4dad2bbe67f1)
