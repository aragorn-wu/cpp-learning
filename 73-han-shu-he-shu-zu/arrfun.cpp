#include <iostream>

const int arrSize=8;

int sum_arr(int arr[],int n); //declare

int main(){
    using namespace std;
    int cookies[arrSize]={1,2,3,4,5,6,7,8};
    int sum=sum_arr(cookies,arrSize);
    cout<<"Total cookies eated: "<<sum<<endl;
    return 0;
}

//define
int sum_arr(int arr[],int n){
    int total=0;
    for(int i=0;i<n;i++){
        total=total+arr[i];
    }
    return total;
}

