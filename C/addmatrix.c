#include <stdio.h>

void takeinput(int r, int c, int mt[r][c]);
void addMatrices(int r, int c, int mt1[r][c], int mt2[r][c], int out[r][c]);
void output(int r, int c, int out[r][c]);

int main() {
    int rows, cols, mat1[100][100], mat2[100][100], result[100][100];
    
    // Input the size of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    if (rows <= 0 || cols <= 0) {
        printf("Invalid matrix size.\n");
        return 1;
    }
    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    takeinput(rows, cols, mat1);

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    takeinput(rows, cols, mat2);

    // Call the function to add the matrices
    addMatrices(rows, cols, mat1, mat2, result);

    // Output the result
    output(rows, cols, result);

    return 0;
}

void takeinput(int r, int c, int mt[r][c]){
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element mat[%d][%d]: ", i, j);
            scanf("%d", &mt[i][j]);
        }
    }
}

void addMatrices(int r, int c, int mt1[r][c], int mt2[r][c], int out[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            out[i][j] = mt1[i][j] + mt2[i][j];
        }
    }
}

void output(int r, int c, int out[r][c]){
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", out[i][j]);
        }
        printf("\n");
    }
}

 