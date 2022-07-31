int findMinimumCoins(int amount) 
{
    // Write your code here - code by Afif Islam.
    int mini = 0;
    while(amount>0){
        if(amount>=1000) amount-=1000;
        else if(amount >= 500) amount-=500;
        else if(amount >= 100) amount-=100;
        else if(amount >= 50) amount-=50;
        else if(amount >= 20) amount-=20;
        else if(amount >= 10) amount-=10;
        else if(amount >= 5) amount-=5;
        else if(amount >= 2) amount-=2;
        else amount-=1;
        mini++;
    }
    return mini;
}
