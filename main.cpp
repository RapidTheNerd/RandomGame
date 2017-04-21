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

int numOfS(){

    int c = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < elements; j++){
            if(matrix[i][j] = 1){
                c++; //Kappa
            }
        }
        return c;
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

bool attack(int x, int y){
    if(matrix[x][y] == 1){
        matrix[x][y] == 2;
        return true;
    }
    return false;
}

int main() {
    srand(time(NULL));
    clear();
    setS();
    int pos1, pos2;
    char prompt;
    while(1){
        cout << "Input location: "; cin >> pos1 >> pos2;
        if(attack(pos1, pos2))
            cout << "You attacked correctly" << endl;
            else
                cout << "You fucking missed" << endl;
                cout << "Surrender? (y,n)" >> cin >> prompt;
                if(prompt == 'y'){
                    break;
                }
            cout << "Game over!" << endl;
            show();
        
        }
    system("pause");
    return 0;
}

