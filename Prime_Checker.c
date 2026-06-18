#include<stdio.h>

int main()
{
    int n, i = 1, rem, count =0;
    printf("Enter The Number: ");
    scanf("%d", &n);

    while (i<=n)
    {
        rem = n%i;
        if (rem==0)
        {
            count++;
        }
        i++;
    }
    if (count==2)
    {
        printf("%d is a Prime Number.", n);
    }
    else
    {
        printf("%d is a not Prime Number.", n);
    }
    return 0;
}