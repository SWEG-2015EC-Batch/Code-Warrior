#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float  n = 0, num, x = 0, p, q, r = 0, sd, qq;
    char op;
    while (op != 'n')
    {
        cout << "enter number:- ";
        cin >> num;
        q = num * num;
        r += q;
        x += 1;    
        n += num;
        cout << "do u want to continue 'y' yes and 'n' for no:- ";
        cin >> op;
    }
    p = n / x;
    cout << "mean = " << p << endl
         << "summation of the numbers = " << n << endl
         << "how many numbers were there = " << x << endl;
    qq = (r + x * p * p - 2 * p * n) / x;
     sd = sqrt(qq);
    cout << "standard devarion = " << sd;
   
    return 0;
}
