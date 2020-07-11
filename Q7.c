#include<stdio.h>
#include<string.h>

int main()
{
	printf("Enter your number:\n");
	
	char num[20];
	scanf("%s", num);
	
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
		
	if(count<=0)//0~19 and 20,30,40,50,60,70,80,90
    {
		if(strcmp(num,"zero") == 0)
        {
			printf("0");
		}	
		else if(strcmp(num,"one") == 0)
        {
			printf("1");
		}
		else if(strcmp(num,"two") == 0)
        {
			printf("2");
		}
		else if(strcmp(num,"three") == 0)
        {
			printf("3");
		}
		else if(strcmp(num,"four") == 0)
        {
			printf("4");
		}
		else if(strcmp(num,"five") == 0)
        {
			printf("5");
		}
		else if(strcmp(num,"six") == 0)
        {
			printf("6");
		}
		else if(strcmp(num,"seven") == 0)
        {
			printf("7");
		}
		else if(strcmp(num,"eight") == 0)
        {
			printf("8");
		}
		else if(strcmp(num,"nine") == 0)
        {
			printf("9");
		}
		if(strcmp(num,"ten") == 0)
        {
			printf("10");
		}	
		else if(strcmp(num,"eleven") == 0)
        {
			printf("11");
		}
		else if(strcmp(num,"twelve") == 0)
        {
			printf("12");
		}
		else if(strcmp(num,"thirteen") == 0)
        {
			printf("13");
		}
		else if(strcmp(num,"fourteen") == 0)
        {
			printf("14");
		}
		else if(strcmp(num,"fifteen") == 0)
        {
			printf("15");
		}
		else if(strcmp(num,"sixteen") == 0)
        {
			printf("16");
		}
		else if(strcmp(num,"seventeen") == 0)
        {
			printf("17");
		}
		else if(strcmp(num,"eighteen") == 0)
        {
			printf("18");
		}
		else if(strcmp(num,"nineteen") == 0)
        {
			printf("19");
		}
		else if(strcmp(num,"twenty") == 0)
        {
			printf("20");
		}
		else if(strcmp(num,"thirty") == 0)
        {
			printf("30");
		}
		else if(strcmp(num,"forty") == 0)
        {
			printf("40");
		}
		else if(strcmp(num,"fifty") == 0)
        {
			printf("50");
		}
		else if(strcmp(num,"sixty") == 0)
        {
			printf("60");
		}
		else if(strcmp(num,"seventy") == 0)
        {
			printf("70");
		}
		else if(strcmp(num,"eighty") == 0)
        {
			printf("80");
		}
		else if(strcmp(num,"ninety") == 0)
        {
			printf("90");
		}
	}
	
    //strchr(char *a, char b): find the position where b first appear in a
    //strncpy(char *a, char *b, size n) copy b to a with length of n
    //strcmp(char *a, char b) check if two are equal
	else
    {
		int iso='-';
		char *units = strchr(num, iso)+1;//point to units
		int index = strchr(num,iso)-num;//number of tens need to copy
		char tens[index];//create an array to contain tens elements
		strncpy(tens, num, index);

		if(strcmp(tens,"twenty") == 0)
        {
			printf("2");
		}
		else if(strcmp(tens,"thirty") == 0)
        {
			printf("3");
		}
		else if(strcmp(tens,"forty") == 0)
        {
			printf("4");
		}
		else if(strcmp(tens,"fifty") == 0)
        {
			printf("5");
		}
		else if(strcmp(tens,"sixty") == 0
        ){
			printf("6");
		}
		else if(strcmp(tens,"seventy") == 0)
        {
			printf("7");
		}
		else if(strcmp(tens,"eighty") == 0)
        {
			printf("8");
		}
		else if(strcmp(tens,"ninety") == 0)
        {
			printf("9");
		}
		
		if(strcmp(units,"one") == 0)
        {
			printf("1");
		}
		else if(strcmp(units,"two") == 0)
        {
			printf("2");
		}
		else if(strcmp(units,"three") == 0)
        {
			printf("3");
		}
		else if(strcmp(units,"four") == 0)
        {
			printf("4");
		}
		else if(strcmp(units,"five") == 0)
        {
			printf("5");
		}
		else if(strcmp(units,"six") == 0)
        {
			printf("6");
		}
		else if(strcmp(units,"seven") == 0)
        {
			printf("7");
		}
		else if(strcmp(units,"eight") == 0)
        {
			printf("8");
		}
		else if(strcmp(units,"nine") == 0)
        {
			printf("9");
		}
	}
	return 0;
}
