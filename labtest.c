//Lab TEST (11/11/2025)
// Name - Vansh Gupts
#include<stdio.h>
int main()
{
    int age;
    char name[50];
    int vote1=0,vote2=0,vote3=0,vote4=0;
    int p;
    for(int j=0;j<5;j++)
    {

    printf("\nEnter Name:");
    scanf(" %s",name);
    printf("Enter age: ");
    scanf("%d",&age);
    if(age<18){
        printf("NOT ELIGIBLE FOR VOTING!");
    }
    else{
    
        char parties[4][30]={"1.BJP","2.CONGRESS","3.AAP","4.BSP"};
        printf("\n-----------E-VOTING SYSTEM------------\n");
        printf("Please vote one party among the following:\n");
        for(int i=0;i<4;i++)
        {
            printf("%s\n",parties[i]);
        }
        printf("\nEnter the party number you want to vote: ");
        scanf(" %d",&p);
        if(p==1)
        {
            vote1+=1;
            printf("THANK YOU FOR USING OUR E-VOTING SYSTEM , EVERY VOTE COUNTS!!\n");
        }
        else if(p==2)
        {
            vote2+=1;
            printf("THANK YOU FOR USING OUR E-VOTING SYSTEM , EVERY VOTE COUNTS!!\n");
        }
        else if(p==3)
        {
            vote3+=1;
            printf("THANK YOU FOR USING OUR E-VOTING SYSTEM , EVERY VOTE COUNTS!!\n");
        }
        else if(p==4)
        {
            vote4+=1;
            printf("THANK YOU FOR USING OUR E-VOTING SYSTEM , EVERY VOTE COUNTS!!\n");
        }
        else
        {
            printf("NO PARTY SELECTED,PLEASE INPUT CORRECT DATA!");
        }
        }
    }
    
        
        printf("\n\n-----------------------VOTING RESULTS---------------------------------\n");
        printf("BJP:%d\n",vote1);
        printf("CONGRESS:%d\n",vote2);
        printf("AAP:%d\n",vote3);
        printf("BSP:%d\n",vote4);
        printf("\nCalculating the winning party based on the results:\n");
        if(vote1>vote2 && vote1>vote3 && vote1>vote4){
            printf("WINNING PARTY:BJP , votes:%d\n",vote1);
        }
        else if(vote2>vote1 && vote2>vote3 && vote2>vote4){
            printf("WINNING PARTY:CONGRESS , votes:%d\n",vote2);
        }
        else if(vote3>vote1 && vote3>vote2 && vote3>vote4)
        {
            printf("WINNING PARTY:AAP , votes:%d\n",vote3);
        }
        else
        {
            printf("WINNING PARTY:BSP , votes:%d\n",vote4);
        }
        printf("\n\n----------------------------------------------------------------------\n");
        printf("                                          (election commision of india)\n");
        
    
}