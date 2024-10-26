#include<stdio.h>
int arr[50][50],i,j,nz=0,z=0;
void creatematrix(){
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d %d",&i,&j);
    printf("Enter the elements of the matrix:\n");
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            scanf("%d",&arr[k][l]);
        }
    }
}

void printmatrix(){
   printf("The Matrix is: \n");
   for(int k=0;k<i;k++){
    for(int l=0;l<j;l++){
        printf("%d ",arr[k][l]);
        }
        printf("\n");
    }
}

void check(){
   
   for (int  k = 0; k < i; k++){
        for(int l=0;l<j;l++){
            if(arr[k][l] != 0) nz++;
            else z++;
        }
   }
    if(nz>z) printf("It's Not a Sparse Matrix !!\n");
    else printf("It's a Sparse Matrix !!\n");
}

void sparse(){
    if(nz>z) return;
    printf("Coloum wise Representation: \n");
    int s[nz][3],k=0;
    for(int l=0;l<i;l++){
        for(int m=0;m<j;m++){
            if(arr[l][m] != 0) {
                s[k][0] = l;
                s[k][1] = m;
                s[k][2] = arr[l][m];    
                k++;
            }
        }
    }
        printf("Row Coloum Value\n");
        for (int l = 0; l < nz; l++) {
        printf("%d     %d      %d\n", s[l][0], s[l][1], s[l][2]);
    }
}

int main(){
    creatematrix();
    printmatrix(); 
    check();
    sparse();
    return 0;
}