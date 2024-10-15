#include <iostream>
#include <cstdlib>
//#include <stdlib.h>
#include <ctime>
using namespace std;

int x=1,y=1,n=0;
int map[50][50];//Use 50X50 to save memory
int mine_map[50][50];
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
    for (int i = 1; i <= y_axis; ++i) {
        printf("%3d",i);
        for (int j = 1; j <= x_axis ; ++j) {
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





int main() {
    std::cout << "Hello, World!" << std::endl;
    //inputCheck BY MinOS
    while(inputCheck==0){
        cin >> x >> y >> n ;//Accept Suggestion
        if(x>25||y>25||n>x*y*0.25){
            printf("over!\n");
            inputCheck = 0;
        }
        else{
            inputCheck = 1;
        }
    }

    creatMap(x,y);
    printMap(x,y);

    fflush(stdin);
    getchar();
    return 0;
}
