#include<stdio.h>
int main()
{
    char ans;
    int score=0;
    char ques[3][40]={
        {"What is your name"},
        {"What is your age"},
        {"What is your gender"}
    };
    char answers[3][4][40]={
        {"1.Vansh ","2.HARSH ","3.Yatharth","4. Rudra"},
        {"1.17" ,"2.18" ,"3.19" ,"4.20"},
        {"1.MALE","2.FEMALE" ,"3.ANEESH" ,"4.NHIPTA"}
    };
    char correct[3]={'3','1','4'};
    printf("\n------------QUIZ TIME-------------\n");
    for(int i=0;i<3;i++)
    {
        printf("Q%d)%s\n",i+1,ques[i]);
        for(int j=0;j<4;j++)
        {
            printf("%s\n",answers[i][j]);
        }
        printf("Enter your answer:");
        scanf(" %c",&ans);
        if(ans==correct[i]){
            score+=40;
            printf("correct!\n");
        }
        else{
            score -=10;
            printf("\nincorrect!\n");
        }
    }
    printf("\n----------QUIZ OVER---------------\n");
    printf("FINAL SCORE: %d",score);
    return 0;
}