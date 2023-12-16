 ```mermaid
graph TD;
A(start) --> B[Input mark]
B --> C{Is mark in 100 - 90 including both?}
C -- Yes --> D[grade = A]
D[grade = A] --> S(stop) 
C -- No --> E{Is mark in 90 to 80 excluding 90?}
E -- Yes --> F[grade = A]
F[grade = A] --> S(stop) 
E -- No --> G{Is mark in 80 to 75 excluding 80?}
G -- Yes --> H[grade = B+]
H[grade = B+] -->S(stop)
G -- NO --> I{Is mark in 75 to 60 excluding 75?}
I -- Yes --> J[grade = B]
J[grade = B] --> S(stop) 
I -- No --> K{Is mark in 60 to 55 excluding 60?}
K -- Yes --> L[grade = C+]
L[grade = C+] --> S(stop) 
K -- No --> M{Is mark in 55 to 45 excluding 55?}
M -- Yes --> N[grade = C]
N[grade = C] --> S(stop) 
M -- No --> O{Is mark in 45 to 30 excluding 45?}
O -- Yes -->P[grade = D]
P[grade = D] --> S(stop) 
O -- No --> Q{Is mark in 30 to 0 excluding 30?}
Q --Yes --> R[grade=F]
R[grade = F] --> S(stop) 
Q -- No --> AA(enter between 0 and 100)
AA --> S(stop)
```
