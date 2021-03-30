/*Q8)Generate a random sequence of birthdays and store the birthdays in an array. 
As soon as a match is found, report that. 
Also report how many birthdays were generated to get the match.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct
{
   int day;
   int month;
  
}birth;


int main()
{
       srand(time(0));
       birth birthday[10000];
   int i;
   for(i=0;i<10000;i++)
   {
 
      
       birthday[i].month=(rand()%12)+1;
      
      
      
       if(birthday[i].month==1,3,5,7,8,10,12)
       {
           birthday[i].day=(rand()%31)+1;
       }
       else if(birthday[i].month==4,6,9,11)
       {
           birthday[i].day=(rand()%30)+1;
       }
       else
           birthday[i].day=(rand()%28)+1;
 
      
       int j=0;
       	for(j=0;j<i;j++)
       {
           if(birthday[i].day==birthday[j].day&&birthday[i].month==birthday[j].month)
           {
               printf("%d %d %d\n",birthday[i].day,birthday[i].month,2001);
               printf("it generated %d birthdays to get the match\n",i+1);
               exit(0);
           }
       }
   }
   return 0;
}


/*OUTPUT
1)8 11 2001
it generated 9 birthdays to get the match
2)29 7 2001
it generated 47 birthdays to get the match
3)14 9 2001
it generated 38 birthdays to get the match
4)6 1 2001
it generated 35 birthdays to get the match
5)21 4 2001
it generated 19 birthdays to get the match
*/