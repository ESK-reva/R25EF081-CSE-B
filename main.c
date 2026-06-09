#include<stdio.h>
#define ROWS 20
#define COLS 20
int main(){
    initialiseCanvas();
    horizontallne(5,15,10);
    verticalline(10,5,15);
    drawRectangle(5,3,10,5);
    drawTriangle(10,5,5,15,15,15);
    displayCanvas();
  return 0;
}
char canvas[ROWS][COLS];
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
//(x1,y1)=(5,10);
//(x2,y2)=(15,10);
void horizontallne(int x1, int x2, int y)
{
    for(int x=x1;x<=x2;x++)
    {
        canvas[y][x]='*';
    }
}   
//(x1,y1)=(10,5);
//(x2,y2)=(10,15);
void verticalline(int x, int y1, int y2){
    for(int y=y1;y<=y2;y++){
        canvas[y][x]='*';
    }
}
void drawRectangle(int x, int y, int width, int height)
{
    /* Top and bottom */
    for(int j = x; j < x + width; j++)
    {
        canvas[y][j] = '*';
        canvas[y + height - 1][j] = '*';
    }

    /* Left and right */
    for(int i = y; i < y + height; i++)
    {
        canvas[i][x] = '*';
        canvas[i][x + width - 1] = '*';
    }
}
void drawTriangle(int x1, int y1,
                  int x2, int y2,
                  int x3, int y3)
{
    drawLine(x1, y1, x2, y2);
    drawLine(x2, y2, x3, y3);
    drawLine(x3, y3, x1, y1);
}