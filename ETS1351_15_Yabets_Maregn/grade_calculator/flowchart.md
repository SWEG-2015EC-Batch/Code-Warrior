
```mermaid
graph TD;
A(start) --> B[/input mark/]
B --> C{is mark in [100-90}
C -- Yes --> D[/grade = A+/]
C -- No --> E{is mark in (90-80]}
E -- Yes --> F[/grade = A/]
E -- No --> G{is is mark in (80-75]}
G -- Yes --> H[/grade = B+/]
G -- NO --> I{is mark in (75-60]}
I -- Yes --> J[/grade = B]
I -- No --> K{is mark in (60-55]}
K -- Yes --> L[/grade = C+]
K -- No --> M{ is mark in (55-45]}
M -- Yes --> N[/grade = C]
M -- No --> O{is mark in (45-30]}
O -- Yes -->P[/grade = D/]
O -- No --> Q{is mark in (30-0]}
Q --Yes --> R[/grade=F/]
Q -- No --> S(stop)

```
