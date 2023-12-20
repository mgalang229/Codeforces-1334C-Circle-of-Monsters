Link: https://codeforces.com/problemset/problem/1334/C
### Analysis
```
n monsters are standing in a circle

1 bullet = 1 damage (targeted monster)
a[i] = health of a monster

if a[i] <= 0, then it deals explosion damage (b[i])
to the NEXT monster:
(1) monster i+1, if i < n
(2) monster 1, if i = n
(previous monster isn't affected)

goal:
- min no. of bullets to kill all monsters

1 <= n <= 300,000
1 <= a[i], b[i] <= 10^12
(use long long data type)

-------------------------

1
3
7 15
2 14
5 3

(starting from monster 2)
use 2 bullets on monster 2
2 - 2 = 0

use explosion damage of monster 2 on monster 3
5 - 14 = -9

use explosion damage of monster 3 on monster 1
7 - 3 = 4
use 4 bullets on monster 1
4 - 4 = 0

= 2 + 0 + 4
= 6 bullets fired

ans: 6

-------------------------

1
9
10 1
7 15
4 4
3 1
1 10
8 2
12 5
2 14
5 3

(start on monster 1)
use 10 bullets on monster 1
10 - 10 = 0

use explosion damage of monster 1 on monster 2
7 - 1 = 6
use 6 bullets on monster 2
6 - 6 = 0

use explosion damage of monster 2 on monster 3
4 - 15 = -11

use explosion damage of monster 3 on monster 4
3 - 4 = -1

use explosion damage of monster 4 on monster 5
1 - 1 = 0

use explosion damage of monster 5 on monster 6
8 - 10 = -2

use explosion damage of monster 6 on monster 7
12 - 2 = 10
use 10 bullets on monster 7
10 - 10 = 0

use explosion damage of monster 7 on monster 8
2 - 5 = -3

use explosion damage of monster 8 on monster 9
5 - 14 = -9

= 10 + 6 + 10
= 26 bullets used

(start on monster 2)
use bullets on monster 2
7 - 7 = 0

use explosion damage of monster 2 on monster 3
4 - 15 = -11

use explosion damage of monster 3 on monster 4
3 - 4 = -1

use explosion damage of monster 4 on monster 5
1 - 1 = 0

use explosion damage of monster 5 on monster 6
8 - 10 = -2

use explosion damage of monster 6 on monster 7
12 - 2 = 10
use 10 bullets on monster 7
10 - 10 = 0

use explosion damage of monster 7 on monster 8
2 - 5 = -3

use explosion damage of monster 8 on monster 9
5 - 14 = -9

use explosion damage of monster 9 on monster 1
10 - 3 = 7
use 7 bullets on monster 1
7 - 7 = 0

= 7 + 10 + 7
= 24 bullets used

...and so on

ans: 24

after explosion (effects to every monster):

(1) 10 1 = 7
(2) 7 15 = 6
(3) 4 4 = 0
(4) 3 1 = 0
(5) 1 10 = 0
(6) 8 2 = 0
(7) 12 5 = 10
(8) 2 14 = 0
(9) 5 3 = 0

-------------------------
```
Finally ended my 'not solved' streak <333
