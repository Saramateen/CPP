#include<iostream>
using namespace std;

int peakindex(int arr[],int size){

    int start = 0;
    int end = size-1;
    int mid = (start +(start+end)/2);
    
    while(start<end){
        if(arr[mid] < arr[mid+1])
        {
            start = mid+1;
        }
        else
        {
            end=mid; 
        }
         mid = (start +(start+end)/2);
         
    }
     return start; 

}
 

int main(){
    int array[5] = {1,2,3,4,5};
    cout<<"peak index of mountain array is "<< peakindex(array,5)<<endl;
    return 0;
} 





    
 