// Use of Relational Operators

#include<stdio.h>
    void main()
    {
        int a, b;
        printf("Enter a, b values : ");
        scanf("%d%d", &a,&b); //Reading two values

        printf("\nThe < value of a = %d", a<b);
        printf("\nThe <= value of a = %d", a<=b);
        printf("\nThe > value of a = %d", a>b);
        printf("\nThe >= value of a = %d", a>=b);
        printf("\nThe == value of a = %d", a==b);
        printf("\nThe != value of a = %d", a!=b);
}
