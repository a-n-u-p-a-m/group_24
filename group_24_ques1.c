/*Q1) Write a program to determine the smallest positive integer n with the following property. 
Let n=akak-1 …...a1a0 be the decimal representation of n with ak>0. 
Look at the integer: 
n’=a0akak-1 …. a2a1 (the cyclic right shift of n). 
The desired property of n is that n' must be a proper integral multiple of n.
*/

#include<stdio.h>

int checkzero(int n)
{
  
    int y=n%10;
      
    if(y==0)
        return 1;
    return 0;
       
  
 
    
}

int checksame(int n)
{
    int y=n%10;
    n/=10;
    while(n)
    {
        int x=n%10;
        n/=10;
        if(x!=y)
            return 0;
    }
    return 1;
}

int binpow(int a, int b) 
{
    if (b == 0)
        return 1;
    int res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main()
{
    for(int i=10;i<1000000;i++)
    {
        if(checkzero(i)==1 || checksame(i)==1)
            continue;
        
        int x=i;
        int counter=0;
        while(x)
        {
         
            x=x/10;
            counter++;
        }
        int num;
        int mul=binpow(10,counter-1); 
        num=i%10;
        num*=mul;
        num+=i/10;
 
        if(num%i==0)
        {
            printf("The number is %d\n",i);
            break;
           
        }
            
 
        
    }
    return 0;
}


/*OUTPUT
The number is 102564
*/