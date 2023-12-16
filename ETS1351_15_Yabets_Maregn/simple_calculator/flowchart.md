```mermaid
graph TD;
A(Start) --> B(Read num1 num2 and operator)
B --> C{Is operator  ?}
C -- Yes --> D[Result = num1 + num2]
D --> R(stop)
C -- NO --> E{Is operator ?}
E -- Yes --> F[Result = num1 - num2]
F --> R(stop)
E -- NO --> G{Is operator ?}
G --Yes --> H[Result = num1 * num2]
H --> R(stop)
G -- No --> I{Is operator / ?}
I -- Yes --> J{Is num2 = 0 ?}
I -- Yes --> K[Result = num1 num2 ]
K --> R(stop)
j -- No --> L [division cant continued due to number 2 = 0]
I -- No --> M{Is operator  ?}
M -- Yes --> N{Is num2 =0 ?}
N -- Yes --> O[Result = num1  num2]
O --> R(stop)
N -- No --> P[module can't continued due to number 2 = 0 ]
M -- No --> Q[make sure to enter among]
Q --> R(stop)
```
