#include<stdio.h>

void binarySearch(int a[], int s, int n){
    int low = 0;
    int high = n - 1;
    int mid;
    while(low<=high){
        mid = (low+high)/2;

    if(a[mid] == s){
        printf("Element is present at index %d\n", mid);
        break;
    }
    else if(a[mid] < s){
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }
    }
}
int main(){
    printf("Give the Elements of Array: ");
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int s;
    printf("Enter the Element to be searched: ");
    scanf("%d",&s);
    binarySearch(a,s,5);
    return 0;
}
