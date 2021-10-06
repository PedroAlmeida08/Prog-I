#include <stdio.h>
 
int main() {
 
    int n = 0;
    int pares = 0;
    int i;
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&n);
        if (n%2 ==0)
        pares++;
    }
    
    printf("%d valores pares\n", pares);
 
    return 0;
}
