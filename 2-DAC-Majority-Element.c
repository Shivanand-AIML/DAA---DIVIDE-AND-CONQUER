#include <stdio.h>
int majority(int* arr, int n){
    int count = 0, first = arr[0], second;
    for(int i = 0; i < n; i++){
        if(arr[i] == first) count++;
        else second = arr[i];
    }
    if(count > n/2) return first;
    else return second;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%d", majority(arr,n));
    return 0;
}
