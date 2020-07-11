#include<stdio.h>

int main()
{
    int i, j;
    int max = 0;
    int num, rev_num, remainder, ori_num;//num=product, rev_num=reversed product, ori_num=original product
    for (i = 10; i <= 99;i++)
    {
        for (j = 100; j <= 999;j++)
        {
            num = i * j;
            ori_num = num;
            while(num!=0)
            {
                remainder = num % 10;
                rev_num = rev_num * 10 + remainder;
                num /= 10;
            }
            if (ori_num == rev_num && ori_num>max)
            {
                max = ori_num;
            }
            rev_num = 0;//reset
        }
    }
    printf("The largest palindrome is: %d", max);
    return 0;
}