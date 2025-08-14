#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a * b;
    printf("%d\n",a*(b%10));
    b = b/10;
    printf("%d\n",a*(b%10));
    b = b/10;
    printf("%d\n",a*(b%10));
    b = b/10;

    printf("%d",c);
    

    
    
}