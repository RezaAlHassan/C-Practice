
/*A pointer in C++ is used to share a memory address among different contexts (primarily functions). 
They are used whenever a function needs to modify the content of a variable, but it does not have ownership.
In order to access the memory address of a variable, , prepend it with  sign. 
For example, &val returns the memory address of .	Submissions	Leaderboard	Discussions	Editorial
A pointer in C++ is used to share a memory address among different contexts (primarily functions). 
They are used whenever a function needs to modify the content of a variable, but it does not have ownership.
In order to access the memory address of a variable, , prepend it with & sign. For example, &val returns the memory address of val
The function is declared with a void return type, so there is no value to return. 
Modify the values in memory so that  contains their sum and  contains their absoluted difference.
*/

#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int sum= (*a) + (*b);
    int diff = abs(*a - *b);
    *a = sum;
    *b = diff;
      
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}