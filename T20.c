#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int total_score,ones,fours,sixes,balls=0;
int num;

int play()
{
    num=rand()%6+1;
    return num;
}

void score(int hit)
{
    total_score=total_score+hit;
    return;
}

void count(int x)
{
    if(x==1)
    {
        ones++;
        balls++;
        score(1);
    }
    else if(x==4)
    {
        fours++;
        balls++;
        score(4);
    }
    else if(x==6)
    {
        sixes++;
        balls++;
        score(6);
    }
    return;
}

int main()
{
    srand(time(0));
    while(balls<120)
    {
        int hit=play();
        count(hit);
    }
    printf("\n----------MATCH RESULTS----------");
    printf("\nTotal Score = %d",total_score);
    printf("\nOnes = %d",ones);
    printf("\nFours = %d",fours);
    printf("\nSixes = %d",sixes);
    return 0;
}