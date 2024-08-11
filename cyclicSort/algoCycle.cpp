#include <iostream>
using namespace std;
int main(){
    int arr[]={5,1,6,7,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
        if(arr[i]!=i+1) swap(arr[i],arr[arr[i]-1]);
        else i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}