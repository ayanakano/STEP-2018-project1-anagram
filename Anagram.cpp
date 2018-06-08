/*
*  @file: Anagram.cpp
*  @author: Aya Nakano (ayanakano26@gmail.com)
*  @due date: 5/1/18
*  @brief: Create a program that outputs the longest word given a series of letters
*/


#include <stdio.h>
#include <string.h>

#define MAX 16

int main(void)
{
    char string[17];
    char str[17];
    char copy[17];
    char result[17];
    int points, sc;
    int x, j;
    FILE *fp;
    char *filename = "dictionary.txt";
      
    printf("Please enter 16 letters: ");
    scanf("%s", string);

    strcpy(copy,string);
    while ( fgets(str, MAX,fp) != NULL ) 
    {
   	  strcpy(string,copy);
   	  x = 1;
   	  points = 1;
     
     
   	  for(int i = 0; i < strlen(str); ++i)
      {
   		 for(int j = 0; j < strlen(string) && str[i] != string[j]; ++j)
         {
   		 }
   		 if(j < strlen(string))
         {
   			 x++;
   			 string[j] = '1';
   			 if(str[i] == 'j' || str[i] == 'k' || str[i] == 'q' || str[i] == 'x' || str[i] == 'z')
             {
   				 points = points + 3;
   			 }
   			 
   			 else if(str[i] == 'c' || str[i] == 'f' || str[i] == 'h' || str[i] == 'l' || str[i] == 'm' || str[i] == 'p' || str[i] == 'v' || str[i] == 'w' || str[i] == 'y'){s
   				 points = points + 2;
   			 }
   			 
   			 else
             {
   				 points++;
   			 }
   		 }
   	 }
    }
   	 if(x == strlen(str)){
   		 if(sc < points){
   			 strcpy(result,str);
   			 sc = points;
   		 }
   	 }

    printf("The Longest Word is：%s\n", result);

    fclose(fp);

	return 0;
}

