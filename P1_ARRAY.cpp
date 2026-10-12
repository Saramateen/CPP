#include <iostream>
using namespace std;

int specialindexed(int arr[],int size)
{
    int square;
    int ans=0;
    for(int i=0;i<size;i++)
        {
          if(size % (i+1) == 0)
          {
              square = arr[i]*arr[i];
              ans = ans+square;
          }
        }
    return ans;
}
int main()
{
    int arr[]={1,2,3,4};
    cout<< specialindexed(arr,4);
    return 0;
}