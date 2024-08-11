// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     int arr[]={5,4,3,2,1};
//     int n=5;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // bubble sort
//     for(int i=0;i<n-1;i++){//n-1 passes here is 3 times pass happen
//         //traverse
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }

//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


//more efficient code
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool flag = false;
    // bubble sort
    for(int i=0;i<n-1;i++){//n-1 passes here is 3 times pass happen
        //traverse

        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        


    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}