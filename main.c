#include<stdio.h>
int main(){

  return 0;

void initializeCanvas()
{
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            canvas[i][j]='_';
        }
    }
}
}
void displayCanvas()
{   
for(i=0;i<ROWS;i++)
{
    for(j=0;j<COLS;j++)
    {
        printf("%c",canvas[i][j]);
    }

    printf("\n");
}
}