#include <stdio.h>
#include  "define.h" 
#include  "void.h" 
int shortest[200];  //�洢�Թ�ÿһ����·��·����������   
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
    printf("��ʾ�Թ���\n");
    for(i = 0; i < N; i++) {    	
       for(j = 0; j < N; j++)
          if(maze[i][j] == 2)
	         printf("��"); //�Թ�ǽ�ڼ��ϰ�
	      else if(i==startI&&j==startJ)
	         printf("��"); //�Թ���� 
	      else if(i==endI&&j==endJ)
	         printf("��"); //�Թ��յ� 
	      else 
	         printf("  "); //�Թ�����ͨ�� 
	   printf("\n");
    }
	printf("��������㣬������յ�\n") ;
	printf("\n��ʾ·����\n");
	visit(startI, startJ);
	if(a){    //����Թ��г�· 
	   printf("\n���·����Ϊ��\n\n");
	   for(i = 0;i < kind;i++)
	      if(shortest[i] < shortest[index])
	      index = i;     //index��¼���ڼ�¼�Թ���·�����·�� 
	   printf("%d\n",shortest[index] );  //������·���Ĳ��� 
	   printf("\n����Թ�·��Ϊ��\n\n�� %d ��·��\n",index+1);   
   }
	else    //����Թ�û�г�· 
	   printf("No way");
	return 0;
}

