#include<stdio.h>
int main()
{
    int m;
    printf("Enter your marks out of 100: ",m);
    scanf("%d",&m);
    printf(m>=85?"Your Grade is A":(m>=70?"Your Grade is B":(m>=55?"Your Grade is C":(m>=40?"Your Grade is D":"Your Grade is F"))));
    return 0;
} 
