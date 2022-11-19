//maximum element in Array
#include<iostream>
#include<limits.h>

using namespace std;
int maximumelement(int arr[],int n){
    int temp=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }
    }
        return temp;
    }
int minelement(int arr[],int n){

int temp=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<temp){
            temp=arr[i];
        }
    }
        return temp;
    }

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<maximumelement(arr,10)<<endl;
    cout<<minelement(arr,10)<<endl;

    return 0;
}