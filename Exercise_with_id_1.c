/*
 If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000 
 */

//libs
#include <stdio.h>
#include <stdlib.h>

//variables

int a=0,b[1000],c=0,d=0,f=0;

int main(int argc, char** argv) {
    while(d<1000){
        
        if(d%3==0||d%5==0){
           
            b[d]=d;
            if(b[d]!=0){
                f=f+b[d];
                a++;
            }
            
            
        }
        d++;
    }
    
    printf("The result of sum of all the multiples of 3 or 5 below 1000 is : %d\n",f);   
    return (EXIT_SUCCESS);
}
