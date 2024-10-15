#include <iostream>
#include <cstdlib>
//#include <stdlib.h>
#include <ctime>
using namespace std;

int x=1,y=1,n=0;
int map[50][50];//Use 50X50 to save memory
int mine_map[50][50];
int map1[30][30] = {0};
int map2[16][16] = {0};
int map3[10][10] = {0};

short int inputCheck=0;//Use short int to save memory

//void creatMap(int x_axis,int y_axis) BY MinOS
void creatMap(int x_axis,int y_axis){
    for (int i = 1; i <= y_axis; ++i) {
        for (int j = 1; j <=x_axis; ++j) {
            map[i][j]=-1;
        }
    }
}

//void printMap(int x_axis,int y_axis) BY MinOS
void printMap(int x_axis,int y_axis){
    printf("y\\x");
    for (int i = 0; i < x_axis; ++i) {
        printf("%3d",i);
    }
    printf("\n");
    for (int i = 1; i <= y_axis; ++i)
        {
        printf("%3d",i);
        for (int j = 1; j <= x_axis ; ++j) 
        {
            char outChar;
            if(map[i][j]==-1){//Unknown
                outChar='?';
            }
            else if(map[i][j]==0){
                outChar='0';
            }
            else if(map[i][j]==1){
                outChar='1';
            }
            else if(map[i][j]==2){
                outChar='2';
            }
            else if(map[i][j]==3){
                outChar='3';
            }
            else if(map[i][j]==4){
                outChar='4';
            }
            else if(map[i][j]==5){
                outChar='5';
            }
            else if(map[i][j]==6){
                outChar='6';
            }
            else if(map[i][j]==7){
                outChar='7';
            }
            else if(map[i][j]==8){
                outChar='8';
            }
            else if(map[i][j]==9){
                outChar='9';
            }
            /*
            else if(map[i][j]==?){
                outChar='?';
            }
             */
            else{
                outChar=' ';
            }
            printf("  %c",outChar);
        }
        printf("\n");
    }
}



void putMine(){
    int a,b;
    for (int i = 0; i < n; ++i) {
        srand((unsigned)time(NULL));
        a = rand() % x ;
        b = rand() % y ;
        //printf("%d %d",a,b);
        mine_map[b][a]=1;
    }
}





int main() 
{
    srand (time(NULL));//要到哪里用
    int i = (rand() % 10) + 1;
    int j = (rand() % 10) + 1;
    int MineNum = 0;

    int choose = 0;//选择难度1，2，3
    cout << "请从1,2,3三个难度中选择一个适配的难度:" <<endl;
    cin >> choose ;

    int kick = 0;//点击数




    int (*p_one)[10] = map3;
    int (*p_two)[16] = map2;
    int (*p_three)[30]= map1;
    if (choose == 1)
    {
        MineNum = 10;
    }else if(choose == 2) 
    {
        MineNum = 40;
    }else
    {
        MineNum = 159;
    }
    for (int i = 1;i <= 10 ;i++)
    {
        for (int j = 1;j <=10 ;j++)
        {
            if (p_one[i][j] = 1)
            {
                cout //待定
            }
        }


    }


    std::cout << "Hello, World!" << std::endl;

    scanf("%d %d",&x,&y);//为什么不用宏函数

    creatMap(x,y);
    printMap(x,y);

    fflush(stdin);
    getchar();
    return 0;
}
