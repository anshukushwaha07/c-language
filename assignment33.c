#include <stdio.h>

int update_score_board(int p1,int p2,int result, int score_board[][4]){
     
    score_board[p1][p2]=result;
    score_board[p2][p1]=2-result;

}

void Display_score(int score_board[][4]){
    int i,j;
    printf("\n Score Board \n ");
    for( i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",score_board[i][j]); 
            printf("\n");
        }
    }
}

void get_player_score(int player, int socre_board[][4] ){
    

}

void Game(){

    int score_board[4][4]={0};
}

int q3()
{
    int a[3][3], b[3][3], temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" Enter value for dis [%d][%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int j = 0; j < 3; j++)
    {
        for (int k = j + 1; k < 3; k++)
        {

            // b[j][k]=a[k][j];
            temp = a[j][k];
            a[j][k] = a[k][j];
            a[k][j] = temp;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %d  ", a[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

int q2()
{
    int a[3][3], b[3][3], res[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" Enter value for dis [%d][%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" 2 matricx Enter value for dis [%d][%d] ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf(" Print in 2 Dimension \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            res[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
            printf(" %d ", res[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
int q1()
{
    int a[3][3], b[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" 1 matricx Enter value for dis [%d][%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" 2 matricx Enter value for dis [%d][%d] ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf(" Print in 2Dimension \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            a[i][j] = a[i][j] + b[i][j];
            printf(" %d ", a[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}