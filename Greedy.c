#include <cs50.h>
#include <stdio.h>

//Greedy alg : find min amount of coins to give as change

int main(void)
{
    float change;
    int i=0;
    
    //Ask user input grater than 0.00
    do
    {
        printf("How much change is owed?\n");
        change = get_float();
    }while(change<=0.0);
    
    //Count how many 0.25 coins you'll use
    while(change>=0.25)
    {
        change-=0.25;
        i++;
        printf("%f\n",change);
        printf("%d\n",i);
    }
    
    //Count how many 0.10 coins you'll use
    while(change>=0.10)
    {
        change-=0.10;
        i++;
        printf("%f\n",change);
        printf("%d\n",i);
    }
    
    //Count how many 0.05 coins you'll use
    while(change>=0.05)
    {
        change-=0.05;
        i++;
        printf("%f\n",change);
        printf("%d\n",i);
    }
    
    //Count how many 0.01 coins you'll need
    while(change>=0.00)
    {
        change-=0.01;
        i++;
        printf("%f\n",change);
        printf("%d\n",i);
    }
    
    //print min number of coins used
    printf("%d\n",i);
}
