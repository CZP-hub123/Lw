#include <iostream>
#include <string>
using namespace std;


void bubleSort(int * arr,int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int * arr,int len)
{
    for (int i = 0; i < len; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;


}

int main(){
    int a[] = {9,8,7,6,5,4,3,2,1};
    int len = sizeof(a)/sizeof(a[0]);
    bubleSort(a,len);
    printArray(a,len);
    return 0;
}