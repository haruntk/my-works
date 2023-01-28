#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

const int SQUARE_LENGTH = 6;
void gameScreen();
void randomCards(int array[6][6]);
void openCard(int x,int y);
void cardControl(int x,int y,int x2,int y2);
void isValid_secondCoordinate(int x,int y);
void sleep();
int temp_firstCoordinatex[1],temp_firstCoordinatey[1];
int square[6][6]={{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'}};
int cards[6][6];
int score=0,WINGAME,counter=0;

int main()
{
    int x,y,x2,y2;
    WINGAME=1;
    srand(time(NULL));
    gameScreen();
    randomCards(cards);
    do
    {
        printf("\n\nEnter a coordinate: ");
        scanf("%d %d",&x,&y);
        temp_firstCoordinatex[0]=x;
        temp_firstCoordinatey[0]=y;
        if (x<0 || y<0 || x>5 || y>5)
        {
            system("cls");
            gameScreen();
            printf("\nThis coordinate doesn't exist! Please enter valid coordinate.");
            continue;
        }
        if(square[x][y]==' ')
        {
            system("cls");
            gameScreen();
            printf("\nInvalid move! Please enter a different coordinate.");
            continue;
        }
        openCard(x,y);
        system("cls");
        gameScreen();
        printf("\n\nEnter a coordinate: ");
        scanf("%d %d",&x2,&y2);
        if (x2<0 || y2<0 || x2>5 || y2>5)
        {
            system("cls");
            gameScreen();
            isValid_secondCoordinate(x2,y2);
            continue;
        }
        if ((square[x2][y2]==' ') || (x2==x && y2==y))
        {
            system("cls");
            gameScreen();
            isValid_secondCoordinate(x2,y2);
            continue;
        }
        openCard(x2,y2);
        system("cls");
        cardControl(x,y,x2,y2);
        gameScreen();
    } while((WINGAME==1));

    return 0;
}
void gameScreen()
{
    int i,j;
    
    printf("SCORE: %d",score);
    printf("\n");
    printf("  ");
    for (int i=0;i<6;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    printf("  ");
    for (int i=0;i<SQUARE_LENGTH;i++) // 6 ne ? conndtata çıkar
    {
        printf("_ ");
    }
    for (i=0;i<6;i++) //6 ne ? 
    {
        printf("\n");
        printf("%d|",i);
        //PRİNT STAR 
        for(j=0;j<6;j++)
        {
            printf("%c ",square[i][j]);
        }
    }
    
}

void randomCards(int array2d[6][6])
{
    int flag,random_number;
    int array[36],array2[18];

    for (int i=0;i<18;i++)
    {
        array2[i]=2;
    }

    for (int i=0;i<36;i++)
    {
        do
        {
            random_number = rand() % 18 + 65;
            flag = 1;
            for(int j=0;j<i;j++)
            {
                if (array[j]==random_number && array2[random_number-65]==0)
                {
                    flag=0;
                }
            }
        }while(flag==0);
        array2[random_number-65]--;
        array[i]=random_number;
    }
    int k=0;
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<6;j++)
        {
            array2d[i][j]=array[k++];
        }
    }
}

void openCard(int x,int y)
{
    square[x][y]=cards[x][y];
}
void cardControl(int x,int y,int x2,int y2)
{
    if (square[x2][y2]==square[x][y])
    {
        gameScreen();
        sleep(1);
        system("cls");
        square[x][y]=' ';
        square[x2][y2]=' ';
        score=score+3;
        counter++;
        if(counter==18)
        {
            system("cls");
            printf("GAME OVER\nYOUR SCORE: %d",score);
            WINGAME=0;
        }
    }
    else if(square[x2][y2]!=square[x][y])
    {
        gameScreen();
        sleep(2);
        system("cls");
        square[x][y]='*';
        square[x2][y2]='*';
        score--;
    }

}
void isValid_secondCoordinate(int x,int y)
{
    int x2,y2;
    if (square[x][y]==' ')
    {
    printf("\nInvalid move! Please enter a different coordinate.");
    printf("\n\nEnter a coordinate: ");
    scanf("%d %d",&x2,&y2);
    if(square[x2][y2]==' ')
    {
        system("cls");
        gameScreen();
        isValid_secondCoordinate(x,y);
    }
    else if(x2==temp_firstCoordinatex[0] && y2==temp_firstCoordinatey[0])
    {
        system("cls");
        gameScreen();
        printf("\nThis card is already open!");
        printf("\nEnter a different coordinate: ");
        scanf("%d %d",&x2,&y2);
        if (x2==x && y2==y)
        {
            isValid_secondCoordinate(x,y);
        }
        else
        {
        openCard(x2,y2);
        system("cls");
        cardControl(temp_firstCoordinatex[0],temp_firstCoordinatey[0],x2,y2);
        gameScreen();
        }
    }
    else
    {
        openCard(x2,y2);
        system("cls");
        cardControl(temp_firstCoordinatex[0],temp_firstCoordinatey[0],x2,y2);
        gameScreen();
    }
    }
    else if (square[x][y]!='*' && square[x][y]!=' ' && (x>=0 && x<6) && (y>=0 && y<6))
    {
        printf("\nThis card is already open!");
        printf("\nEnter a different coordinate: ");
        scanf("%d %d",&x2,&y2);
        if (x2==x && y2==y)
        {
            isValid_secondCoordinate(x,y);
        }
        else
        {
        openCard(x2,y2);
        system("cls");
        cardControl(temp_firstCoordinatex[0],temp_firstCoordinatey[0],x2,y2);
        gameScreen();
        }
        
    }
    else if (x<0 || x>5 || y<0 || y>5)
    {
        printf("\nThis coordinate doesn't exist! Please enter valid coordinate.");
        printf("\n\nEnter a coordinate: ");
        scanf("%d %d",&x2,&y2);
        if (x2==x && y2==y)
        {
            isValid_secondCoordinate(x,y);
        }
        else
        {
        openCard(x2,y2);
        system("cls");
        cardControl(temp_firstCoordinatex[0],temp_firstCoordinatey[0],x2,y2);
        gameScreen();
        }
    }
}
