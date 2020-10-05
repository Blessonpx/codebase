#include <iostream>
using namespace std;
int main()
{
// Input of Number array with size defined first
    int sizeofarray;
    cout<<"Input Number of Elements "<<endl;
    cin>>sizeofarray;
    int x[sizeofarray];
    for (int i = 0; i < sizeofarray; ++i)
    {
    cin >> x[i];
    }
    int key,i,k;
//  Sample of an array   int x[10]={2,9,3,1,7,11,3,99,91,1000};
    for(int j=1;j<=sizeof(x)/sizeof(x[0]);j=j+1){
        key=x[j];
        i=j-1;
        while (i>-1 && x[i]>=key){
// i>-1 in order to evaluate at first element too then go to -1
// x[i]>= key in order to make way when key is shifted to first element 
            x[i+1]=x[i];
            i=i-1;    
            }
        x[i+1]=key;
        }
    for(int l=0;l<sizeof(x)/sizeof(x[0]);l=l+1){cout<<x[l]<<endl;}
    return 0;
}
