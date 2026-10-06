#include<iostream>
using namespace std;
int firstoccurence(int arr[],int size,int key){
   
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    int ans =-1;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
         mid = (start+end)/2;
        }
          return ans;
    }

int lastoccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=(start+end)/2;
    
    while(start<=end){
        if(arr[mid]==key)
        {
            start=mid+1;
            ans=mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;      
          }
       
         mid=(start+end)/2;
       }
          return ans;
   }


int main(){
    int even[9]={1,2,3,3,3,3,3,4,5};

    int first = firstoccurence(even, 9, 3);
    int last = lastoccurence(even, 9, 3);

    cout << "first occurance of 3 at index " << first << endl; 
    cout << "last occurance of 3 at index " << last << endl; 

    if(first == -1) 
    { 
        cout << "element not found"; 
    } 
    else 
    { 
        cout << "total number of occurences = " << last - first + 1;  
    } 

    return 0; 

}

