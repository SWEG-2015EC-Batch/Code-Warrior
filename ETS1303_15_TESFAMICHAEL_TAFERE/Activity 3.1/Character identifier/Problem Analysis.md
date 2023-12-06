FLOWCHART
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
PROBLEM ANALYSIS 

![20231205_215327](https://github.com/SWEG-2015EC-Batch/Code-Warrior/assets/149233683/a1f0ce21-bf97-4c40-ac4f-31a5ccbf3db7)
FLOWCHART 
![20231205_215336](https://github.com/SWEG-2015EC-Batch/Code-Warrior/assets/149233683/af9dfbc2-5835-4bd5-b4ee-25574a59489c)
