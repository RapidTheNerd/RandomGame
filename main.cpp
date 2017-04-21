#include <iostream>
#include <cstdlib>

using namespace std;

const int rows = 10;
const int elements = 10;

int maxS = 5;

int matrix[rows][elements];

void clear(){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < elements; j++){
            matrix[i][j] = 0;
        }
    }
}

void show(){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < elements; j++){
            cout << matrix[i][j] << " ";
        }
    }
}

void setS(){
    int s = 0;
    while(s < maxS){
        int x = rand() % rows;
        int y = rand() % elements;
        if(matrix[x][y] != 1){
            s++;
            matrix[x][y] = 1;
        }
    }
}

int main() {
    clear();
    show();
    system("pause");
    return 0;

}