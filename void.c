#include <stdio.h> 
#include "define.h"
void visit(int i, int j) {
    int m, n;
	maze[i][j] = 1; //����λ�ø�ֵΪ1����ʾ���߹� 
	if(i == endI && j == endJ) {   //��������յ� 
        a=1;      //��a����Ϊ1����ʾ�Թ��г�· 
		printf("\n��%d��·����\n\n",kind+1);
		for(m = 0; m < N; m++) {
			for(n = 0; n < N; n++){
				if(maze[m][n] == 2)
		           printf("��");
				else if(m==startI&&n==startJ)
			   	   printf("��");
				else if(m==endI&&n==endJ)
			       printf("��");
				else if(maze[m][n] == 4)
				   printf("��");
				else if(maze[m][n] == 5)
				   printf("��");
				else if(maze[m][n] == 6)
				   printf("��");
				else if(maze[m][n] == 7)
				   printf("��");
				else 
				   printf("  "); 
				if(maze[m][n] == 1||maze[m][n] == 4||maze[m][n] == 5||maze[m][n] == 6||maze[m][n] == 7) //������ֵΪ1��4��5��6��7��λ�ñ�ʾ���߹� 
					count++;
			}
		    printf("\n");
		}
	shortest[kind] = count-1;   //���Թ��ó�·��·�����洢������shortest[]�� 
	kind++;
	count = 0;  //��count��0,Ϊ��һ�μ�¼·������׼�� 
	}
	if(maze[i][j+1] == 0) {  //������ 
    	maze[i][j] = 7;  //��������ߵ�ͨ�����ô���ֵΪ7���ڴ�ӡ����ʱ��ӡ�����ҵļ�ͷ 
        visit(i, j+1);  //����������еݹ� 
   }
    if(maze[i+1][j] == 0){ //������ 
	    maze[i][j] = 5; //��������ߵ�ͨ�����ô���ֵΪ7���ڴ�ӡ����ʱ��ӡ�����µļ�ͷ 
      	visit(i+1, j);//����������еݹ� 
   }
    if(maze[i][j-1] == 0){  //������ 
     	maze[i][j] = 6; //��������ߵ�ͨ�����ô���ֵΪ7���ڴ�ӡ����ʱ��ӡ������ļ�ͷ 
	    visit(i, j-1);//����������еݹ� 
   }
    if(maze[i-1][j] == 0) {  //������ 
	   maze[i][j] = 4; //��������ߵ�ͨ�����ô���ֵΪ7���ڴ�ӡ����ʱ��ӡ�����ϵļ�ͷ 
	   visit(i-1, j);//����������еݹ� 
   }
   maze[i][j] = 0;  //���������Ҷ�̽����֮�󷵻�ǰһ�������Ѹó�λ�ø�ֵΪ�� 
}
