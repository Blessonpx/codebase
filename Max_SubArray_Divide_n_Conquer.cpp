// Maximum Subarray Problem
#include <iostream>
#include <stdlib.h>
using namespace std;

// ------------------------------------------MERGE SORT----------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------
// Using Merge Sort to take min of Array fro Sentinel Values
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
// ----------------------------------------------------------------------------------------------------
// Declare minimum limit for details 
int min_limit;
// Declare Max_Subarray_Crossing
int max_subarray_crossing(int A[],int low,int mid,int high){
    int left_sum,right_sum,sum,max_left,max_right;
    left_sum=min_limit;
    sum=0;
    for (int i=mid;i>low;i--){
        sum=sum+A[i];
        if (sum>left_sum){
            left_sum=sum;
            max_left=i;
            }
        }
    right_sum=min_limit;
    sum=0;
    for (int i=mid+1;i<=high;i--){
        sum=sum+A[i];
        if (sum>right_sum){
            right_sum=sum;
            max_right=i;
            }
        }
    return left_sum+right_sum;
}
// Declare max_subarray
int max_subarray(int A[],int low,int high){
    int mid,left_sum,right_sum,cross_sum,x;
    if (low==high) {return A[low];}
    else {
        mid=(low+high)/2;
        left_sum=max_subarray(A,low,mid);
        right_sum=max_subarray(A,mid+1,high);
        cross_sum=max_subarray_crossing(A,low,mid,high);
        x=max(max(left_sum,right_sum),cross_sum);
        cout<<left_sum<<"::"<<right_sum<<"::"<<cross_sum<<endl;
        return x;
    }

}
int main(){
    int z;
    int arr[]={13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    int arr_s[arr_size];
    for(int i=0;i<arr_size;i++){arr_s[i]=arr[i];}
    mergeSort(arr_s,0,arr_size-1);
    min_limit=arr_s[0]-1000;
//    cout<<"Smallest Integer  ::"<<min_limit<<endl;
    max_subarray(arr,0,arr_size-1);
//    cout<<z<<endl;
    return 0;
}
