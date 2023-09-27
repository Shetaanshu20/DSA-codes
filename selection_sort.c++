void selectionSort(vector<int>&arr) {
    // Write your code here.
     int a ;
    for(int i=0;i<arr.size();i++){
        a=i;
        for(int j=i;j<arr.size();j++){
            a = arr[a]<arr[j]?a:j;


        }
        swap(arr[i],arr[a]);
    }
        return;
}

//main function to run above function
/*

#include<iostream>
using namespace std;
int main(){
vector<int> arr;
arr.push_back(5);
arr.push_back(2);
arr.push_back(7);
arr.push_back(51);
selectionSort(arr);
for (auto x : arr){
    cout<<x<<" ";}
return 0;
    }

*/