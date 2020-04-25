//Name:- Abhay Kumar Modi


//The first kangaroo starts at location 'x1' and moves at a rate of 'v1' meters per jump.
//The second kangaroo starts at location 'x2' and moves at a rate of 'v2' meters per jump.
//You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.

#include<stdio.h>
int main()
{
    int x1,x2,v1,v2,i,k=0;
    printf("Enter the starting location of first Kangaroo:- ");
    scanf("%d",&x1);
    printf("Enter the speed of first Kangaroo:- ");
    scanf("%d",&v1);
    printf("Enter the starting location of second Kangaroo:- ");
    scanf("%d",&x2);
    printf("Enter the speed of first Kangaroo:- ");
    scanf("%d",&v2);
    if((x2>x1)&&(v2>v1))
    {
        printf("NO");
    }
    else if(x1==x2)
    {
        printf("YES");
    }
    else
    {
        for(i=0;i<10000;i++)
        {
            x1=x1+v1;
            x2=x2+v2;
            if(x1==x2)
            {
                k++;
                break;
            }
        }
        if(k==0)
            printf("NO");
        else
            printf("YES");
    }
    return 0;
}
