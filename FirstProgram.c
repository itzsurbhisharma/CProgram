#include <stdio.h>

int main()
{
    float atten;
    printf("Enter your attendance: ");
    scanf("%f",&atten);
    	
	(atten>=65.0f)?atten+=10:printf("You are not elegible for ETE as your attendance is %f.",atten);
}

