// Merge Sort
#include <iostream>
#include <stdlib.h>
using namespace std;
// Merge funtion to comine 2 ordered array sets
void merge(int arr[],int i,int j,int k ){
    int n1=j-i+1;
    int n2=k-j;
// Declaring Internal sub arrays for intermediate storing
    int A[n1],B[n2];
    for (int r1=0;r1<n1;r1++){
        A[r1]=arr[i+r1];
    }
    for (int r2=0;r2<n2;r2++){
        B[r2]=arr[j+1+r2];
    }
    int m=0,n=0,len1=i;
    while (m<n1 && n<n2){
        if(A[m]<=B[n]){
            arr[len1]=A[m];
            m=m+1;
            len1=len1+1;
        }
        else {
            arr[len1]=B[n];
            n=n+1;
            len1=len1+1;
        } 
    }
// Running loop for pending elements in case one sub array smaller than the other
    while (m<n1){
            arr[len1]=A[m];
            m++;
            len1++;
    }
    while (n<n2){
            arr[len1]=B[n];
            n++;
            len1++;
    }
}
// Merge Sort function to split array in 2 halves and recusrively call them
void mergeSort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main(){
    int arr[]={1,3,12,1,88,5,2,4,6,19,16,61,56};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,arr_size-1 );
    for(int z=0;z<arr_size;z=z+1){cout<<arr[z]<<",";}
}
