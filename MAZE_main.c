#include <stdio.h>
#include  "define.h" 
#include  "void.h" 
int shortest[200];  //存储迷宫每一条出路的路径长的数组   
int index = 0,count = 0,a = 0,kind =0;
int maze[10][10] = {
{2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
{2, 0, 0, 2, 0, 0, 0, 2, 0, 2},
{2, 0, 0, 2, 0, 0, 0, 2, 0, 2},
{2, 0, 2, 0, 0, 2, 2, 0, 0, 2},
{2, 0, 2, 2, 2, 0, 0, 0, 0, 2},
{2, 0, 0, 0, 2, 0, 0, 0, 0, 2},
{2, 0, 2, 0, 0, 0, 2, 0, 0, 2},
{2, 0, 2, 2, 2, 0, 2, 2, 0, 2},
{2, 2, 0, 0, 0, 0, 0, 0, 0, 2},
{2, 2, 2, 2, 2, 2, 2, 2, 2, 2}};

int main(void) {	
    int i, j;
    printf("显示迷宫：\n");
    for(i = 0; i < N; i++) {    	
       for(j = 0; j < N; j++)
          if(maze[i][j] == 2)
	         printf("■"); //迷宫墙壁及障碍
	      else if(i==startI&&j==startJ)
	         printf("△"); //迷宫起点 
	      else if(i==endI&&j==endJ)
	         printf("●"); //迷宫终点 
	      else 
	         printf("  "); //迷宫可行通道 
	   printf("\n");
    }
	printf("△代表起点，●代表终点\n") ;
	printf("\n显示路径：\n");
	visit(startI, startJ);
	if(a){    //如果迷宫有出路 
	   printf("\n最短路径长为：\n\n");
	   for(i = 0;i < kind;i++)
	      if(shortest[i] < shortest[index])
	      index = i;     //index记录用于记录迷宫出路的最短路径 
	   printf("%d\n",shortest[index] );  //输出最短路径的步数 
	   printf("\n最短迷宫路径为：\n\n第 %d 种路径\n",index+1);   
   }
	else    //如果迷宫没有出路 
	   printf("No way");
	return 0;
}

