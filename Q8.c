#include<stdio.h>
#include<string.h>

int getNumber(char num[])
{
	int count=0;
    int i;
	int len=sizeof(num);
	for(i=0; i<len; i++)
    {
		if(num[i]=='-')
        {
			count++;//different situations
		}
	}

	int final=0;	
	if(count<=0)
    {
		
		if(strcmp(num,"zero") == 0)
        {
			final+=0;
		}	
		else if(strcmp(num,"one") == 0)
        {
			final+=1;
		}
		else if(strcmp(num,"two") == 0)
        {
			final+=2;
		}
		else if(strcmp(num,"three") == 0)
        {
			final+=3;
		}
		else if(strcmp(num,"four") == 0)
        {
			final+=4;
		}
		else if(strcmp(num,"five") == 0)
        {
			final+=5;
		}
		else if(strcmp(num,"six") == 0)
        {
			final+=6;
		}
		else if(strcmp(num,"seven") == 0)
        {
			final+=7;
		}
		else if(strcmp(num,"eight") == 0)
        {
			final+=8;
		}
		else if(strcmp(num,"nine") == 0)
        {
			final+=9;
		}
		if(strcmp(num,"ten") == 0)
        {
			final+=10;
		}	
		else if(strcmp(num,"eleven") == 0)
        {
			final+=11;
		}
		else if(strcmp(num,"twelve") == 0
        ){
			final+=12;
		}
		else if(strcmp(num,"thirteen") == 0)
        {
			final+=13;
		}
		else if(strcmp(num,"fourteen") == 0)
        {
			final+=14;
		}
		else if(strcmp(num,"fifteen") == 0)
        
        {
			final+=15;
		}
		else if(strcmp(num,"sixteen") == 0)
        {
			final+=16;
		}
		else if(strcmp(num,"seventeen") == 0)
        {
			final+=17;
		}
		else if(strcmp(num,"eighteen") == 0)
        {
			final+=18;
		}
		else if(strcmp(num,"nineteen") == 0)
        {
			final+=19;
		}
		else if(strcmp(num,"twenty") == 0)
        {
			final+=20;
		}
		else if(strcmp(num,"thirty") == 0)
        {
			final+=30;
		}
		else if(strcmp(num,"forty") == 0)
        {
			final+=40;
		}
		else if(strcmp(num,"fifty") == 0)
        {
			final+=50;
		}
		else if(strcmp(num,"sixty") == 0)
        {
			final+=60;
		}
		else if(strcmp(num,"seventy") == 0)
        {
			final+=70;
		}
		else if(strcmp(num,"eighty") == 0)
        {
			final+=80;
		}
		else if(strcmp(num,"ninety") == 0)
        {
			final+=90;
		}
	}
	
	//strchr(char *a, char b): find the position where b first appear in a
    //strncpy(char *a, char *b, size n) copy b to a with length of n
    //strcmp(char *a, char b) check if two are equal
	else
    {
		int iso='-';//isolate symbol
		char *units = strchr(num, iso)+1;//point to units
		int index = strchr(num,iso)-num;//number of tens need to copy
		char tens[index];//create an array to contain tens elements
		strncpy(tens, num, index);

		if(strcmp(tens,"twenty") == 0)
        {
			final+=20;
		}
		else if(strcmp(tens,"thirty") == 0)
        {
			final+=30;
		}
		else if(strcmp(tens,"forty") == 0)
        {
			final+=40;
		}
		else if(strcmp(tens,"fifty") == 0)
        {
			final+=50;
		}
		else if(strcmp(tens,"sixty") == 0)
        {
			final+=60;
		}
		else if(strcmp(tens,"seventy") == 0)
        {
			final+=70;
		}
		else if(strcmp(tens,"eighty") == 0)
        {
			final+=80;
		}
		else if(strcmp(tens,"ninety") == 0)
        {
			final+=90;
		}
		
		if(strcmp(units,"one") == 0)
        {
			final+=1;
		}
		else if(strcmp(units,"two") == 0)
        {
			final+=2;
		}
		else if(strcmp(units,"three") == 0)
        {
			final+=3;
		}
		else if(strcmp(units,"four") == 0)
        {
			final+=4;
		}
		else if(strcmp(units,"five") == 0)
        {
			final+=5;
		}
		else if(strcmp(units,"six") == 0)
        {
			final+=6;
		}
		else if(strcmp(units,"seven") == 0)
        {
			final+=7;
		}
		else if(strcmp(units,"eight") == 0)
        {
			final+=8;
		}
		else if(strcmp(units,"nine") == 0)
        {
			final+=9;
		}
	}
	return final;
}

int main()
{
    char num1[20];
    printf("Enter your first number:\n");
	scanf("%s", num1);

    char num2[20];
	printf("Enter your second number:\n");
	scanf("%s", num2);

    int ff;
    ff = getNumber(num1) * getNumber(num2);
    printf("%d * %d = %d ", getNumber(num1), getNumber(num2), ff);

	return 0;
}

