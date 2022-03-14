#include <stdio.h>
# include <string.h>

int main()
{
  int index;
  char str[50], s[30];
  printf("enter the string\n");
  gets(str);
  printf("enter the substring\n");
  gets(s);
  int i,j,k,l;
  l=strlen(s);
    for(i=0;str[i+l-1];i++){
        k=i;
        printf(" %d ",i);
        for(j=0;j<=1-l;j++){
            if (str[k]!=s[j]){
            break;
            k++;
        }
        if (j==l)
        index = i;
        
    }
    }
   
  if (index==-1)
        printf("Seach Unsuccessful");
  else
        printf("Search Successful");
  
}
