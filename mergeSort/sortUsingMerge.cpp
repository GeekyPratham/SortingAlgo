
// #include <iostream>
// #include <vector>
// using namespace std;
// void merge(vector<int>& a,vector<int>& b,vector<int>& res){
//     int i=0; //a
//     int j=0; //b
//     int k=0; //res
   
//     while(i<a.size() && j<b.size()){
//         if(a[i]<b[j]){
//             res[k++]=a[i++];
//         }
//         else{
//             res[k++]=b[j++];
//         }
//     }
//      if(i==a.size()){ //a is at end
//         while(j<b.size()){
//             res[k++]=b[j++];
//         }
        
//     }
//     if(j==b.size()){ // b is at end
//         while(i<a.size()){
//             res[k++]=a[i++];
//         }
//     }
// }
// void mergeSort(vector<int>& v){
//     int n= v.size();
//     if(n==1) return; // jab array mera one size ka hai toh usko aur nahi torna hai;
//     int n1=n/2;  //size of first array
//     int n2=n-n/2; //size of second array

//     vector<int> a(n1);
//     vector<int> b(n2);

//     //vector<int> a(n1), b(n2) this is also the method to initialize two vector simultaneously

//     //copy pasting of original array

//     for(int i=0;i<n1;i++){
//         a[i]=v[i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i]=v[n1+i];
//     }
//     // magic aka recursion
//     mergeSort(a);
//     mergeSort(b);

//     // merge
//     merge(a,b,v);
    
//     //deleting the previous array after merge to reduce the space complexity
//     a.clear();
//     b.clear();

    
// }
// int main(){
//     int arr[]= {5,1,3,0,4,9,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr,arr+n); // ye same as array bas vector me convert kia hai
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     mergeSort(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
    
// }

#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0; //a
    int j=0; //b
    int k=0; //res
   
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k++]=b[j++];
        }
        else{
            res[k++]=a[i++];
        }
    }
     if(i==a.size()){ //a is at end
        while(j<b.size()){
            res[k++]=b[j++];
        }
        
    }
    if(j==b.size()){ // b is at end
        while(i<a.size()){
            res[k++]=a[i++];
        }
    }
}
void mergeSort(vector<int>& v){
    int n= v.size();
    if(n==1) return; // jab array mera one size ka hai toh usko aur nahi torna hai;
    int n1=n/2;  //size of first array
    int n2=n-n/2; //size of second array

    vector<int> a(n1);
    vector<int> b(n2);

    //vector<int> a(n1), b(n2) this is also the method to initialize two vector simultaneously

    //copy pasting of original array

    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[n1+i];
    }
    // magic aka recursion
    mergeSort(a);
    mergeSort(b);

    // merge
    merge(a,b,v);
    
    //deleting the previous array after merge to reduce the space complexity
    a.clear();
    b.clear();

    
}
int main(){
    int arr[]= {5,1,3,0,4,9,6,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n); // ye same as array bas vector me convert kia hai
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}