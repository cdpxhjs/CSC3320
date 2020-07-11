#include<stdio.h>

int main()
{
    printf("Enter your number:\n");
    int num;
    scanf("%d", &num);

    if(num/10 == 0)//smaller than 10
    {
		if(num == 0)
        {
			printf("zero");
		}
		else if(num == 1)
        {
			printf("one");
		}
		else if(num == 2)
        {
			printf("two");
		}
		else if(num == 3)
        {
			printf("three");
		}
		else if(num == 4)
        {
			printf("four");
		}
		else if(num == 5)
        {
			printf("five");
		}
		else if(num == 6)
        {
			printf("six");
		}
		else if(num == 7)
        {
			printf("seven");
		}
		else if(num == 8)
        {
			printf("eight");
		}
		else if(num == 9)
        {
			printf("nine");
		}
	}
	else if(num<100)//bigger than 10, small than 100
    {
        int tens = num / 10;
        int units = num % 10;

        if(tens == 1)//1*
        {
			if(units == 0)
            {
				printf("ten");
			}
			else if(units == 1)
            {
				printf("eleven");
			}
			else if(units == 2)
            {
				printf("twelve");
			}
			else if(units == 3)
            {
				printf("thirteen");
			}
			else if(units == 4)
            {
				printf("fourteen");
			}
			else if(units == 5)
            {
				printf("fifteen");
			}
			else if(units == 6)
            {
				printf("sixteen");
			}
			else if(units == 7)
            {
				printf("seventeen");
			}
			else if(units == 8)
            {
				printf("eighteen");
			}
			else if(units == 9)
            {
				printf("nineteen");
			}
			return 0;
		}

		else if(tens == 2)//2*
        {
			printf("twenty");
		}
		else if(tens == 3)
        {
			printf("thirty");
		}
		else if(tens == 4)
        {
			printf("forty");
		}
		else if(tens == 5)
        {
			printf("fifty");
		}
		else if(tens == 6)
        {
			printf("sixty");
		}
		else if(tens == 7)
        {
			printf("seventy");
		}
		else if(tens == 8)
        {
			printf("eighty");
		}
		else if(tens == 9)
        {
			printf("ninety");
		}
		
		if(units == 0)//*0
        {
			printf("");
		}
		else if(units == 1)//↓ones
        {
			printf("-one");
		}
		else if(units == 2)
        {
			printf("-two");
		}
		else if(units == 3)
        {
			printf("-three");
		}
		else if(units == 4)
        {
			printf("-four");
		}
		else if(units == 5)
        {
			printf("-five");
		}
		else if(units == 6)
        {
			printf("-six");
		}
		else if(units == 7)
        {
			printf("-seven");
		}
		else if(units == 8)
        {
			printf("-eight");
		}
		else if(units == 9)
        {
			printf("-nine");
		}
	}
    else
    {
        printf("OUT OF RANGE.");
    }
	return 0;
}