```mermaid
graph TD;
A(Start) --> B(Read num1 num2 and operator)
B --> C{Is operator ?}
C -- Yes --> D[Result = num1 + num2]
D --> R(Stop)
C -- NO --> E{Is operator ?}
E -- Yes --> F[Result = num1 - num2]
F --> R(Stop)
E -- NO --> G{Is operator ?}
G -- Yes --> H[Result = num1 * num2]
H --> R(Stop)
G -- No --> I{Is operator ?}
I -- Yes --> J{Is num2 = 0 ?}
J -- Yes --> K[Result = num1 num2 ]
K --> R(Stop)
J -- No --> L [division cant continued due to number 2 = 0]
I -- No --> M{Is operator ?}
M -- Yes --> N{Is num2 =0 ?}
N -- Yes --> O[Result = num1  num2]
O --> R(Stop)
N -- No --> P[module can't continued due to number 2 = 0]
P --> R(Stop)
M -- No --> Q[make sure to enter among]
Q --> R(Stop)
```
