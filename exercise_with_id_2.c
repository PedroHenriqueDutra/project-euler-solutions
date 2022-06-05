/*Cada novo termo na sequência de Fibonacci é gerado pela adição dos dois termos anteriores. Começando com 1 e 2, os 10 primeiros termos serão:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

Considerando os termos da sequência de Fibonacci cujos valores não excedem quatro milhões, encontre a soma dos termos de valor par.

*/
#include <stdio.h>
int a=0,b=1,c=2,d=0,e=0;
int main()
{
    while(a<4000001){
        d=b+c;
        b=c;
        c=d;
        
        if(d%2==0){
            e=e+d;*/
        }
        else{
            continue;
        }
        printf("%d \n",a);
        a++;
    }
    printf("r: %d",e);
    scanf("%d",&a);
    return 0;
}
