#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch, file_name[25];
    FILE *fp;
    int letter[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char content[9999];
    int index = 0;
    int key;

    printf("Enter name of a file you wish to read\n");
    gets(file_name);//read the file name
    fp = fopen(file_name, "r");//read mode

    if(fp==NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    printf("Reading File: ",file_name);
    while((ch=fgetc(fp))!=EOF)
    {
        content[index] = ch;
        index++;
    }
    fclose(fp);

    int i;
    int length1 = sizeof(content);
    for (i = 0; i < length1;i++)
    {
        int a = content[i] - 97; //To convert char to ASCII integer from a to z
        letter[a] += 1;//count the character
    }

    int j;
    int first_max_index;
    int second_max_index;
    int first_max = 0;
    int second_max = 0;
    int letter_length = sizeof(letter);

    for (j = 0; j < letter_length;j++)
    {
        if(letter[j]>first_max)// if the number is larger than both first max number and second max number
        {
            first_max = letter[j];
            first_max_index = j;
        }
        else if(letter[j]<first_max && letter[j]>second_max)// if the number is larger than only second max number
        {
            second_max = letter[j];
            second_max_index = j;
        }
    }

    key = first_max_index - 4;//distance between max index and the index of "e"
    if (key<0)//in case that the most character is prior to "e"
    {
        key += 26;
    }
    printf("The key is: %d", key);
    return 0;
}
