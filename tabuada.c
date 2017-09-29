#include <stdio.h>
int main ()
{
    int num,
    count=1;
    
    printf("\nDigite um numero:");
    scanf("%d", &num);
    
    do
    {
    printf("\n%d*%d=%d", num, count, count*num);
    count++;
    }
    
    while(count<=100);
    
    system("pause");
}
