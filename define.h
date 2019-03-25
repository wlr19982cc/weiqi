#define startI 1//定义起点的所在的行数 
#define startJ 1 //定义起点的所在的列数
#define endI 8  //定义终点的所在的行数
#define endJ 8 //定义终点的所在的列数
#define N 10  //定义迷宫的大小为 N×N型 
extern int  count  ; //记录每一条出路的路径长 
extern int  kind  ;//记录迷宫出路种类 
extern int index  ;//记录迷宫出路最短路径 
extern  int a ;  // 用于判断迷宫是否有出路 
extern int shortest[200];  //存储迷宫每一条出路的路径长的数组   
extern int maze[10][10] ;
