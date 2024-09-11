#include<iostream>
using namespace std;

// Corrected function
void transposeArr(int arr[][4], int rows, int cols, int transposeArr[][3]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            transposeArr[j][i] = arr[i][j];
        }
    }
}

int main(){
    int arr[3][4] = {{1, 8, 6, 4}, {7, 5, 6, 4}, {9, 5, 1, 6}};
    int transpose[4][3]; 
    
    cout << "Original array:" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    // Perform the transpose
    transposeArr(arr, 3, 4, transpose);
    
    // Print the transposed array
    cout << "Transposed array:" << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
