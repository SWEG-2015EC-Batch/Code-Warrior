
      Problem Analysis 

   Input - Character 

  Output -Identification of character 
     
      Process 

  Variable declaration 
  
  Read input 
  
  Check the input 
  
  Print output 
    
    Algorithm design 

    Pseudo code 

Step 1- start

Step 2- Variable declaration with data type character 

Step 3- check the input data if it is letter, digit (odd,even) or special character 
  
  -if it is letter then check it whether it is  vowel or consonant 
 
  - if  it is digit then check it Whether it is odd or even

Step 4- print the out put 

Spet5- Stop


       Flow chart 


```mermaid
graph TD
A(Start) --> B[/Input Character from keyboard/]
B --> C{Is it an Alphabet?}
C -- Yes --> D{Is it Uppercase?}
D -- Yes --> E{Is it a Vowel?}
E -- Yes --> F[/Uppercase Vowel/]
E -- No --> G[/Uppercase Consonant/]
D -- No --> H{Is it a Vowel?}
H -- Yes --> I[/Lowercase Vowel/]
H -- No --> J[/Lowercase Consonant/]
C -- No --> K{Is it a Digit?}
K -- Yes --> L{Is it Even?}
L -- Yes --> M[/Even Digit/]
L -- No --> N[/Odd Digit/]
K -- No --> O[/Special Character/]
F --> Q(End)
G --> Q
I --> Q
J --> Q
M --> Q
N --> Q
O --> Q
```
