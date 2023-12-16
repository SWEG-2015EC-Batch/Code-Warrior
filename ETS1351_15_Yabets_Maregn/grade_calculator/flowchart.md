 ```mermaid
graph TD;
A(start) --> B[Input mark]
B --> C{Is mark in 100 - 90?}
C -- Yes --> D[grade = A]
D[grade = A] --> S(stop) 
C -- No --> E{Is mark in 90 to 80?}
E -- Yes --> F[grade = A]
F[grade = A] --> S(stop) 
E -- No --> G{Is mark in 80 to 75?}
G -- Yes --> H[grade = B+]
H[grade = B+] -->S(stop)
G -- NO --> I{Is mark in 75 to 60?}
I -- Yes --> J[grade = B]
J[grade = B] --> S(stop) 
I -- No --> K{Is mark in 60 to 55?}
K -- Yes --> L[grade = C+]
L[grade = C+] --> S(stop) 
K -- No --> M{Is mark in 55 to 45?}
M -- Yes --> N[grade = C]
N[grade = C] --> S(stop) 
M -- No --> O{Is mark in 45 to 30?}
O -- Yes -->P[grade = D]
P[grade = D] --> S(stop) 
O -- No --> Q{Is mark in 30 to 0?}
Q --Yes --> R[grade=F]
R[grade = F] --> S(stop) 
Q -- No --> S(stop)
```
