 ```mermaid
graph TD;
A(start) --> B[Input mark]
B --> C{Is mark in 100  90?}
C -- Yes --> D[grade = A]
D[grade = A] --> S(stop) 
C -- No --> E{Is mark in 90 to 80?}
E -- Yes --> F[grade = A]
E -- No --> G{Is mark in 80 to 75?}
G -- Yes --> H[grade = B+]
G -- NO --> I{Is mark in 75 to 60?}
I -- Yes --> J[grade = B]
I -- No --> K{Is mark in 60 to 55?}
K -- Yes --> L[grade = C+]
K -- No --> M{Is mark in 55 to 45?}
M -- Yes --> N[grade = C]
M -- No --> O{Is mark in 45 to 30?}
O -- Yes -->P[grade = D]
O -- No --> Q{Is mark in 30 to 0?}
Q --Yes --> R[grade=F]
Q -- No --> S(stop)
``
