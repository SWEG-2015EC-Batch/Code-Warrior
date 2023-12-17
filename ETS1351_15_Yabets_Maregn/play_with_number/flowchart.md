```mermaid
graph TD
A(Start) --> B[/Read number/]
B --> C[//Print "what do you want to do with the number
       type 'a' for reversing the number 
       type 'b' for  counting the number of the digits.
       type 'c' for adding the digits of the number. " 
       type 'd' for multiplying the even digits of the number.
       type 'e' for finding the first and last digit of the number also thier sum.
       type 'f' for swapping the first and last digit of the number.
       type 'g' Checking whether a number is palindrome or not.
       type 'h' for Finding the frequency of each digit in a given integer and display it in table format .
       type 'i' for Checking if a number is Armstrong or not.
       type 'j' for Checking if a number is strong or not.
       type 'k' for Checking if a number is perfect or not "]
C --> D[/Read Character/]
D --> E{Is Character 'a'}
E -- Yes --> F[Reverse = 0]
F --> G{Is number = 0}
G -- Yes --> H[Result = 0]
G -- No --> I[New reverse = num % 10
              reverse = (reverse * 10) + new_reverse
               num = num / 10]
I --> J{Is number != 0}
J -- Yes --> I
J -- No --> K[result = Reverse]
E -- No --> L(Stop)
```
