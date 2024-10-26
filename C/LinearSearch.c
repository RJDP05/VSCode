#include<stdio.h>
int s,e,j,arr[50]; 
void putArray(){
    printf("Enter the Size of Array \n");
    scanf("%d",&s);
    printf("Enter the Elements of Array \n");
    for (int i = 0; i < s; i++){
        scanf("%d",&arr[i]);
    }
}

int linearSearch(){
    printf("Enter the Element U Want to Search\n");
    scanf("%d",&e);
    for (j = 0; j < s; j++)
    {
        if(arr[j]==e)
        {
            return 1;
        }
    }
    return 0;
}
 
int main(){
    putArray();
    if (linearSearch())
    {
        printf("Element Found in %d index \n",j);
    }
    else 
    {
        printf("Element Not Found \n");
    }  
    return 0;
}
