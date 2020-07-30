#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <errno.h>

/* This is just a sample code, modify it to meet your need */
int main(int argc, char **argv)
{
    DIR* FD;
    struct dirent* in_file;
    FILE    *common_file;
    FILE    *entry_file;
    char    buffer[BUFSIZ];

    /* Scanning the in directory */
    if (NULL == (FD = opendir ("/home/jhuang24/Final/FINALc/copies"))) 
    {
        fprintf(stderr, "Error : Failed to open input directory - %s\n", strerror(errno));
        //fclose(common_file);

        return 1;
    }
    while ((in_file = readdir(FD))) 
    {
        /* On linux/Unix we don't want current and parent directories
         * On windows machine too, thanks Greg Hewgill
         */
        if (!strcmp (in_file->d_name, "."))
            continue;
        if (!strcmp (in_file->d_name, ".."))    
            continue;
        /* Open directory entry file for common operation */
        /* TODO : change permissions to meet your need! */
            char * s1 = "/home/jhuang24/Final/FINALc/encrypted/";
			char * s2 = in_file->d_name;
			strcat(s1,s2);
            common_file = fopen(s1, "wb");
            if (common_file == NULL)
            {
                fprintf(stderr, "Error : Failed to open common_file - %s\n", strerror(errno));

                return 1;
            }
        entry_file = fopen(in_file->d_name, "rb");
        if (entry_file == NULL)
        {
            fprintf(stderr, "Error : Failed to open entry file - %s\n", strerror(errno));
            fclose(common_file);

            return 1;
        }

        /* Doing some struf with entry_file : */
        /* For example use fgets */
        char out[BUFSIZ];
        int i = 0;
        while (fgets(buffer, BUFSIZ, entry_file) != NULL)
        {
            out[i] = (buffer[i] + 150) % 256;
            i++;
        }
        fwrite(out, BUFSIZ, BUFSIZ, common_file);

        /* When you finish with the file, close it */
        fclose(entry_file);
    }

    /* Don't forget to close common file before leaving */
    fclose(common_file);

    return 0;
}