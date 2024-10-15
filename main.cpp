#include <iostream>


int x=1,y=1;
int map[1000][1000];

//void creatMap(int x_axis,int y_axis) BY MinOS
void creatMap(int x_axis,int y_axis){

    for (int i = 0; i < y_axis; ++i) {
        for (int j = 0; j <x_axis; ++j) {
            map[i][j]=1;
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
    for (int i = 0; i < y_axis; ++i) {
        printf("%3d",i);
        for (int j = 0; j <x_axis ; ++j) {
            char outChar;
            if(map[i][j]==1){
                outChar='*';
            }
            else{
                outChar=' ';
            }
            printf("  %c",outChar);
        }
        printf("\n");
    }
}


int main() {
    std::cout << "Hello, World!" << std::endl;

    scanf("%d %d",&x,&y);

    creatMap(x,y);
    printMap(x,y);

    fflush(stdin);
    getchar();
    return 0;
}
