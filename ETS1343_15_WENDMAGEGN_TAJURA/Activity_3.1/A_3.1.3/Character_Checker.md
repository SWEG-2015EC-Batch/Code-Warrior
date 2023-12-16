****PROBLEM ANALYSIS****

FLOWCHART
```mermaid
graph TD
A(Start) --> B[/Input Character from keyboard/]
B --> C{Is it a Special Character?}
C -- Yes --> D[/Special Character/]
C -- No --> E{Is it an Alphabet?}
E -- Yes --> F{Is it Uppercase?}
F -- Yes --> K{Is it Uppercase Vowel?}
K -- Yes --> N[/Uppercase Vowel/]
K -- No --> O[/Uppercase Consonant/]
F -- No --> J{Is it Lowercase Vowel?}
J -- Yes --> M[/Lowercase Vowel/]
J -- No --> L[/Lowercase Consonant/]
E -- No --> G{Is it Even: num%2==0?}
G -- Yes --> I[/Even Digit/]
G -- No --> H[/Odd Digit/]
D --> P(End)
H --> P
I --> P
L --> P
M --> P
N --> P
O --> P
```

![IMG_20231207_030123_382](https://github.com/SWEG-2015EC-Batch/Code-Warrior/assets/149209819/a5c46123-e0f1-4155-8c20-4688960d098f)
