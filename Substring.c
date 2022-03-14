#include <stdio.h>
# include <string.h>
int indexOfSubstring(char str[], char s[]);
int main()
{
  int index;
  char str[50], s[30];
  index=indexOfSubstring;
  printf("enter the string\n");
  gets(str);
  printf("enter the substring\n");
  gets(s);
  if (index==-1)
  printf("Seach Unsuccessful");
  else
  printf("Search Successful");
  
}

    int indexOfSubstring (char str[], char s[]){
          int i,j,k,l;
    l=strlen(s);
    for(i=0;str[i+l-1];i++)
    {
        k=i;
        for(j=0;j<=1-l;j++)
        {
            if (str[k]!=s[j])
            break;
            k++;
            
        }
        if (j==l)
        return(i);
        
    }
    return(-1);
 }

