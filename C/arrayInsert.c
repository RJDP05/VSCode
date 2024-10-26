#include <stdio.h>
  int s,arr[50];
void putArray(){
    printf("Enter the Size of Array \n");
    scanf("%d",&s);
    printf("Enter the Elements of Array \n");
    for (int i = 0; i < s; i++){
        scanf("%d",&arr[i]);
    }
}

void input(){
    int n,p;
    printf("Enter the Number U want to Input\n");
    scanf("%d",&n);
    printf("Enter the Position of The Array\n");
    scanf("%d",&p);
    if (p > s + 1 || p <= 0) {
        printf("Invalid position!\n");
        return;
    }
     for (int i = s-1; i >= p-1 ; i--){
        arr[i+1] = arr[i];
     }
     arr[p-1] = n;
     s++;
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
    input();
    print();
    return 0;
}


   
   
