#include <stdio.h>
#include <stdlib.h>
void draw(void);
int main()
{
    draw();
    return 0;
}
void draw(void)
{
    int rows ;
    printf("enter num of rows:");
    scanf("%d",&rows);
    for (int i=1;i<=rows;i++)
    {
     for (int j=1;j<=i;j++)
        {
            printf("*");
     }
     printf("\n") ;
    }
}
