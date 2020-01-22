#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 1000

int main() {
    char text[SIZE], ch[10];
    int scount = 0,k=0,ecount = 0;
    int ssize=strlen(ch);

    printf("Enter a string: ");
    scanf("%[^\n]%*c",text);

    printf("Search word: ");
    scanf("%s", &ch);

    for (int i = 0; text[i] != '\0'; ++i) {
    	
    	
		if( strncmp(&text[i],ch,ssize)==0 && (k==1 || i == 0 )  )
		{ scount++; }
		
		
		if( strncmp(&text[i],ch,ssize)==0 )
		{  
		
		
		if(text[i+ssize+1] == ' ' || text[i+ssize+2] == '\0') ecount++; 
		
		}
	
    		if(text[i] == ' ') k=1; else k=0;

    }

    printf("%d of words starting with '%s'\n",scount,ch);
    printf("%d of words ending with '%s'",ecount,ch);
    return 0;
}
