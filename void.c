#include <stdio.h> 
#include "define.h"
void visit(int i, int j) {
    int m, n;
	maze[i][j] = 1; //将该位置赋值为1，表示已走过 
	if(i == endI && j == endJ) {   //如果到达终点 
        a=1;      //将a复制为1，表示迷宫有出路 
		printf("\n第%d种路径：\n\n",kind+1);
		for(m = 0; m < N; m++) {
			for(n = 0; n < N; n++){
				if(maze[m][n] == 2)
		           printf("■");
				else if(m==startI&&n==startJ)
			   	   printf("△");
				else if(m==endI&&n==endJ)
			       printf("●");
				else if(maze[m][n] == 4)
				   printf("↑");
				else if(maze[m][n] == 5)
				   printf("↓");
				else if(maze[m][n] == 6)
				   printf("←");
				else if(maze[m][n] == 7)
				   printf("→");
				else 
				   printf("  "); 
				if(maze[m][n] == 1||maze[m][n] == 4||maze[m][n] == 5||maze[m][n] == 6||maze[m][n] == 7) //数组中值为1、4、5、6、7的位置表示已走过 
					count++;
			}
		    printf("\n");
		}
	shortest[kind] = count-1;   //将迷宫该出路的路径场存储在数组shortest[]中 
	kind++;
	count = 0;  //将count清0,为以一次记录路径长做准备 
	}
	if(maze[i][j+1] == 0) {  //向右走 
    	maze[i][j] = 7;  //如果向右走得通，将该处赋值为7，在打印数组时打印出向右的箭头 
        visit(i, j+1);  //调用自身进行递归 
   }
    if(maze[i+1][j] == 0){ //向下走 
	    maze[i][j] = 5; //如果向下走得通，将该处赋值为7，在打印数组时打印出向下的箭头 
      	visit(i+1, j);//调用自身进行递归 
   }
    if(maze[i][j-1] == 0){  //向左走 
     	maze[i][j] = 6; //如果向左走得通，将该处赋值为7，在打印数组时打印出向左的箭头 
	    visit(i, j-1);//调用自身进行递归 
   }
    if(maze[i-1][j] == 0) {  //向上走 
	   maze[i][j] = 4; //如果向上走得通，将该处赋值为7，在打印数组时打印出向上的箭头 
	   visit(i-1, j);//调用自身进行递归 
   }
   maze[i][j] = 0;  //当上下左右都探索完之后返回前一步，并把该出位置赋值为零 
}
