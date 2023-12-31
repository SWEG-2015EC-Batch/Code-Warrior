![image](https://github.com/SWEG-2015EC-Batch/Code-Warrior/assets/149233683/2dc802e8-9461-4e2d-879b-ed5e501615eb)

Flowchart 
```mermaid
flowchart TB
    A(Start) --> B[/Enter a letter/]
    B--> C{The input entered is not a letter.}
    C--> |Yes| D[/That's not a letter, please enter a letter./]-->B
    C--> |No| E[/Enter 1 for uppercase or 2 for lowercase/]
    E --> F{Valid choice 1 or 2?}
F--> |Yes| G{Is the choice 1?}
    G --> |Yes| H[Convert to uppercase]
    F--> |No| E
    H--> I[/Display uppercase equivalent/]
    I--> L(End)
    G --> |No| J[Convert to lowercase]
    J --> K[/Display lowercase equivalent/]
    K --> L(End)
```






Problem Analysis:

The problem is to develop a program that takes a letter as input from the keyboard and converts it to its uppercase or lowercase equivalent using functions defined in the ctype.h library header file. The key components of the problem include:

Input: The program needs to prompt the user to enter a letter.
Validation: Ensure that the entered value is a valid letter.
Conversion: Use the functions toupper and tolower from the ctype.h library to convert the letter to its uppercase or lowercase equivalent.
Output: Display the converted letter.





