#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char **argv){
    DIR* FD;
    struct dirent* in_file;
    FILE    *common_file;
    FILE    *entry_file;
    FILE    *temp_file;
    char    buffer[BUFSIZ];
    
    //convert binary to ASCII in temp file
    FD = opendir("/home/jhuang24/Final/FINALc/copies"); 
    while ((in_file = readdir(FD))) 
    {
        if (!strcmp (in_file->d_name, "."))
            continue;
        if (!strcmp (in_file->d_name, ".."))    
            continue;
            
        entry_file = fopen(in_file->d_name, "rb");
        
        while (fgets(buffer, BUFSIZ, entry_file) != NULL)
        {
            char s1[80] = "/home/jhuang24/Final/FINALc/encrypted/temp/";
			char s2[20];
			strcpy(s2,in_file->d_name);
			strcat(s1,s2);
			temp_file = fopen(s1, "w");
            
            fread(buffer,BUFSIZ,1,entry_file);
            fprintf(temp_file, "%x", buffer);
            fputc('\n', temp_file);
            
            fclose(temp_file);
        }
        fclose(entry_file);
    }
    closedir(FD);

    FD = opendir("/home/jhuang24/Final/FINALc/encrypted/temp/");
    while ((in_file = readdir(FD))) 
    {
        if (!strcmp (in_file->d_name, "."))
            continue;
        if (!strcmp (in_file->d_name, ".."))    
            continue;
            
        entry_file = fopen(in_file->d_name, "r");
        
        while (fgets(buffer, BUFSIZ, entry_file) != NULL)
        {
            char s1[80] = "/home/jhuang24/Final/FINALc/decrypted/";
			char s2[20];
			strcpy(s2,in_file->d_name);
			strcat(s1,s2);
			common_file = fopen(s1, "w");
            
            fread(buffer,BUFSIZ,1,entry_file);
            char out[BUFSIZ];
            int i;
            for (i = 0; i < BUFSIZ;i++)
            {
                if(buffer[i]>=150)
                {
                    out[i] = (buffer[i] - 150) % 256;
                }
                else
                {
                    out[i] = (buffer[i] + 256 - 150) % 256;
                }
            }
            fwrite(out, BUFSIZ, 1, common_file);
            fclose(common_file);
        }
        fclose(entry_file);
    }
    closedir(FD);
    return 0;
}