#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int x=1,y=1;
int map1[1000][1000] = {0};
int map2[100][100] = {0};
int map3[10][10] = {0};

//void creatMap(int x_axis,int y_axis) BY MinOS
void creatMap(int x_axis,int y_axis)
{

    for (int i = 0; i < y_axis; ++i) 
    {
        for (int j = 0; j <x_axis; ++j) 
        {
            map3[i][j]=1;
        }
    }
}

//void printMap(int x_axis,int y_axis) BY MinOS
void printMap(int x_axis,int y_axis)
{
    printf("y\\x");
    for (int i = 0; i < x_axis; ++i) 
    {
        printf("%3d",i);
    }
    printf("\n");
    for (int i = 0; i < y_axis; ++i)
    {
        printf("%3d",i);
        for (int j = 0; j <x_axis ; ++j) 
        {
            char outChar;
            if(map3[i][j]==1)
            {
                outChar='*';
            }
            else
            {
                outChar=' ';
            }
            printf("  %c",outChar);
        }
        printf("\n");
    }//这个函数什么意思
}
void MineApper(int kick)//by lawliet
{
    int mine = 0 ;
    int num = 0;//还需要重新赋值：显示周围雷数
    if (kick == mine)
    {
        cout << "游戏结束" <<endl;
    }
    else 
    {
        cout << num <<endl;
    } 

}


int main() 
{
    srand (time(NULL));//要到哪里用
    int kick = 0;//点击数
    int *p_one = map1[10];
    int *p_two = map2[100];
    int *p_three = map3[1000];
    std::cout << "Hello, World!" << std::endl;

    scanf("%d %d",&x,&y);//为什么不用宏函数

    creatMap(x,y);
    printMap(x,y);

    fflush(stdin);
    getchar();
    return 0;
}
