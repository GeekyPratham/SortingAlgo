
#include <iostream>
using namespace std;
int partation(int arr[],int si,int endIdx){
    int pivotElement = arr[(si+endIdx)/2];
    
    int count =0;
    for(int i=si;i<=endIdx;i++){
        if(i==(si+endIdx)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }

    int pivotIdx = count+si; //yaha tak si wala element ka sahi index aaya
    swap(arr[(si+endIdx)/2],arr[pivotIdx]);
    int i=si;
    int j=endIdx;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
         if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement ) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;


}
int quickSort(int arr[],int si, int endIdx ,int k){
    
    // 5,1,8,2,7,6,3,4
    int pivotIdx = partation(arr,si,endIdx);
    // 4,1,3,2,[5],6,8,7
    if(pivotIdx+1==k) {
        return arr[pivotIdx];
        
    }
    else if(pivotIdx+1>k){
        return quickSort(arr,si,pivotIdx-1,k);
    }
    else if(pivotIdx+1<k){
        return quickSort(arr,pivotIdx+1,endIdx,k);

    }
    
}
int main(){
    int arr[] ={5,11,81,2,7,61,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"enter the nth smallest element: ";
    cin>>k;
    cout<<endl;
    cout<<quickSort(arr,0,n-1,k);
    
}