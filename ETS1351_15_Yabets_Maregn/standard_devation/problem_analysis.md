```mermaid
graph TD
a(start) --> b[float  n = 0, num, x = 0, p, q, r = 0, sd, char op]
b --> c[/enter number/]
c --> d[q = num * num]
d --> e[r += q]
e --> f[x += 1]
f --> g[n += num]
g --> h[/display do u want to continue 'y' yes and 'n' for no:- /]
h --> i[/read as op/]
i --> j{is op = 'n'}
j -- yes -->c
j -- no --> k[p = n / x]
k --> l[qq = r + x * p * p - 2 * p * n / x]
l --> m[sd = sqrt of qq]
m --> n[mean = p, standard devarion =  sd,summation of the numbers = n, how many numbers were there = x ]
n --> o[/print mean and sd/]
o --> p(stop
```
