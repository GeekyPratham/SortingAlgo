// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){

//     vector<int> v;
//     for(int i=0;i<5;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     for(int i=0;i<5;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
    

//     int i=0;
//     int j=i+1;
//     bool flag = false;
//     while(i<j && i<5 && j<5){
//         if(v[i]<v[j]){
//             flag=true;
//             i++;
//             j++;
//         }
//         else{
//             flag = false;
//             break;
//         }
//     }
//     if(flag==true) cout<<"it is sorted.";
//     else cout<<"it is not sorted.";
// }

#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,6,5};
    bool flag = false; // not sorted
    for(int i=0;i<4;i++){
        if(arr[i]<arr[i+1]){
            flag=true;

        }
        else {
            flag=false;
            break;
        }
    }
    if(flag==true) cout<<"it is sorted.";
    else cout<<"it is not sorted.";

}