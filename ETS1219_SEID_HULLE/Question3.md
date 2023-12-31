![image](https://github.com/SWEG-2015EC-Batch/Code-Warrior/assets/149233683/2dc802e8-9461-4e2d-879b-ed5e501615eb)

Problem Analysis:

The problem is to develop a program that takes a letter as input from the keyboard and converts it to its uppercase or lowercase equivalent using functions defined in the ctype.h library header file. The key components of the problem include:

Input: The program needs to prompt the user to enter a letter. Validation: Ensure that the entered value is a valid letter. Conversion: Use the functions toupper and tolower from the ctype.h library to convert the letter to its uppercase or lowercase equivalent. Output: Display the converted letter. Algorithm Design:

Input:

Prompt the user to input a letter. Validation:

Ensure that the entered value is a valid letter. Conversion:

Use the isalpha function from the ctype.h library to check if the entered value is a letter. If it is a letter, use the toupper and tolower functions to convert the letter to its uppercase or lowercase equivalent. Output:

Display the converted letter.

pseudocode:

1.Display("Enter a letter:")

2.Input inputChar

3.Validate inputChar is a valid letter

4.If isalpha(inputChar) is true: a. Convert inputChar to uppercase using toupper function b. Display("Uppercase equivalent:", convertedChar) c. Convert inputChar to lowercase using tolower function d. Display("Lowercase equivalent:", convertedChar) Else: Display("Please enter a valid letter.")
