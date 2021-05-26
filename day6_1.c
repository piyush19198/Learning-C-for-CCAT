/*
Write a program to accept a point in Cartesian co-ordinate system and decide the
quadrant in which the point lies. Also check for special cases point lies on ± x axis, ±
y axis, and origin
*/

#include<stdio.h>

int main(void)
{
    int x,y;

	printf("Input the values for X and Y coordinate : \n");
	scanf("%d %d",&x,&y);

	if( x > 0 && y > 0)
        printf("The coordinate point (%d,%d) lies in the First quandrant.\n",x,y);
	    else
        { 
        if( x < 0 && y > 0)
	        printf("The coordinate point (%d,%d) lies in the Second quandrant.\n",x,y);
	        else
            { 
            if( x < 0 && y < 0)
	            printf("The coordinate point (%d, %d) lies in the Third quandrant.\n",x,y);
	            else
                { 
                if( x > 0 && y < 0)
	                printf("The coordinate point (%d,%d) lies in the Fourth quandrant.\n",x,y);
	                else
	                    printf("The coordinate point (%d,%d) lies at the origin.\n",x,y);
                }
            }
        }
    return 0;
}