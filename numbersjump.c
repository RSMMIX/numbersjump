#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",x);
    while (x > 9)
    {
        int y=0; 
        while (x > 0)
        {
            y += x % 10;
            x /= 10;
        }
        x=y;
        printf(" -> %d",x);
    }
    
    return 0;
}
