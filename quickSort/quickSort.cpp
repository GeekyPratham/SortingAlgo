// #include <iostream>
// using namespace std;
// int partation(int arr[],int si,int endIdx){
//     int pivotElement = arr[si];
    
//     int count =0;
//     for(int i=si+1;i<=endIdx;i++){
//         if(arr[i]<=pivotElement) count++;
//     }

//     int pivotIdx = count+si; //yaha tak si wala element ka sahi index aaya
//     swap(arr[si],arr[pivotIdx]);
//     int i=si;
//     int j=endIdx;
//     while(i<pivotIdx && j>pivotIdx){
//         if(arr[i]<=pivotElement) i++;
//          if(arr[j]>pivotElement) j--;
//         else if(arr[i]>pivotElement && arr[j]<=pivotElement ) {
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
//     return pivotIdx;


// }
// void quickSort(int arr[],int si, int endIdx){
//     if(si >= endIdx) return;
//     // 5,1,8,2,7,6,3,4
//     int pivotIdx = partation(arr,si,endIdx);
//     // 4,1,3,2,[5],6,8,7
//     quickSort(arr,si,pivotIdx-1);
//     quickSort(arr,pivotIdx+1,endIdx);
    
// }
// int main(){
//     int arr[] ={5,1,8,2,7,6,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     quickSort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//more optimized quick sort .it is best having TC = O(n)

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
void quickSort(int arr[],int si, int endIdx){
    if(si >= endIdx) return;
    // 5,1,8,2,7,6,3,4
    int pivotIdx = partation(arr,si,endIdx);
    // 4,1,3,2,[5],6,8,7
    quickSort(arr,si,pivotIdx-1);
    quickSort(arr,pivotIdx+1,endIdx);
    
}
int main(){
    int arr[] ={5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}