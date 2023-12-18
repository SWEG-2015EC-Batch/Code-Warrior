```mermaid
graph TD
    A(Start)--> B[Input n]
    B --> C[Initialize sum, ave, SD, VR]
    C --> D{Check if i <= n}
    D -->|Yes| E[Input number]
    E --> F[Add number to sum]
    F --> G[Increment i]
    G --> D
    D -->|No| H[Calculate mean (ave)]
    H --> I[Initialize VR]
    I --> J{Check if num in numbers}
    J -->|Yes| K[Calculate VR]
    K --> I
    J -->|No| L[Calculate SD]
    L --> M[Output entered numbers]
    M --> N[Output mean and SD]
    N --> O(End)

```

Problem Analysis: Calculate Mean and Standard Deviation

Input:
The consumer is precipitated to input the quantity of factors (n) they need to paintings with.
The person then enters n numbers one by one.

Operations:
A loop is used to iterate n times to accumulate the enter numbers.
Within the loop, each entered range is added to the sum.
After amassing all input numbers, the suggest (ave) is calculated by dividing the sum with the aid of the overall remember of numbers (n).
Another loop is used to calculate the Variance (VR) with the aid of summing the squared differences between every variety and the suggest.
Standard Deviation (SD) is then calculated as the square root of Variance divided by using n.

Output:
The application outputs the entered numbers.
It also prints the calculated imply and preferred deviation.
