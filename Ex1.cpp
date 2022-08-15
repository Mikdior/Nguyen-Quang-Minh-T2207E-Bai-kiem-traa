#include <stdio.h>
#include <string.h>

int main () {
   int x;
   printf (" Nhap S1: \n");  
   do {                                             
   	scanf("%d", &x);
   	if ( x <=0 ) { printf (" x Do dai > 0 \n ");
	   } 
   } while ( x <=0);
   char s1[x];
   printf (" input S1: \n");
   scanf("%s", s1);                                
    int y;
   printf (" Nhap S2: \n");   
   do {                                                          
   	scanf("%d", &y);
   	if ( y <=0 ) { printf (" y Do dai > 0 \n ");
	   } 
   } while ( y <=0);
   char s2[y];
   printf (" input string S2: \n");
   scanf("%s",s2);                                
   
   if ( strlen(s1) > strlen(s2)) {                                  
   	    char stemp[x];
   	    strcpy(stemp,s2);
   	    strcpy(s2,s1);
   	    strcpy(s1,stemp);
   }
 
		}
   if (T) { 
   printf ("YES");
   } else { 
   	printf ("NO");
   }
  return 0;	
