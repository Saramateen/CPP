#include<iostream>
using namespace std;

long long SqrtInteger(int n){

    int start = 0;
    int end = n;
    int mid = start +(end - start)/2;
    int ans = -1;

    while(start<=end){
        int square = mid*mid;

        if(square == n ){
            return mid;
        }
        else if(square > n){
            end = mid - 1;
        }
        else if(square < n){
            ans = mid;
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

double moreprecision(int n, int precision, int tempsol){
    double factor = 1;
    double ans = tempsol;

    for(int i=0; i<precision; i++){
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int mySqrt(int x){
      return SqrtInteger(x);
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int tempsol = SqrtInteger(n);
    cout<<"answe is: "<<moreprecision(n,3,tempsol)<<endl;
    return 0;
}









