#include<stdio.h>
  int s,arr[50];
void putArray(){
    printf("Enter the Size of Array \n");
    scanf("%d",&s);
    printf("Enter the Elements of Array \n");
    for (int i = 0; i < s; i++){
        scanf("%d",&arr[i]);
    }
}

void delete(){
    int p;
    printf("Enter the Position of The Array\n");
    scanf("%d",&p);
    if (p > s + 1 || p <= 0) {
        printf("Invalid position!\n");
        return;
    }

     for (int i = p-1; i <= s-1 ; i++){
        arr[i] = arr[i+1];
     }
     s--;
}

void print(){
    printf("The New Array is: \n");
    for (int i = 0; i < s; i++){
        printf("%d" ,arr[i]);
        printf("\n");
    }  
}

int main(){
    putArray();
    delete();
    print();
    return 0;
}