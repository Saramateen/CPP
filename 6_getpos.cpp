#include<iostream>
using namespace std;
int getpivot(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid = (start + (end-start)/2);

    while(start<end)
        {
            if(arr[mid] >= arr[0]){
             start = mid + 1;   
            }
            else{
                end = mid;
            }
            mid = (start + (end - start)/2);
        }
    return start;
}

int binarysearch(int arr[], int size,int start, int end, int key){
    int mid = (start + (end - start)/2);

    while(start<=end){
        if(key == arr[mid]){
            return mid;
        }
       else if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
         mid = (start + (end - start)/2);
    }
    return -1;
}

int findposition(int arr[],int size, int key){
    int pivot = getpivot(arr,size);
    if(key >= arr[pivot] && key<=arr[size-1]){
        return binarysearch(arr,size, pivot, size-1, key);
    }
    else{
        return binarysearch(arr,size, 0, pivot-1, key);
    }
 }

int main(){
    int arr[5]={7,9,1,2,3};
    int key = 2;
    cout<<"position: "<< findposition(arr,5,2);

    return 0;
}








