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

int main() {
    clear();
    show();
    system("pause");
    return 0;

}