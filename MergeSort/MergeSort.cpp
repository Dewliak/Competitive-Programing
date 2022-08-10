#include <iostream>
#include <vector>

using namespace std;



void swapElements(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(vector<int> arr)
{
    for(int i: arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int partitions(vector<int> &arr, int low,int high)
{

    int pivot = arr[high];
    int i = (low-1);

    for(int j = low; j <= high-1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swapElements(&arr[i],&arr[j]);
        }
    }
    swapElements(&arr[i+1],&arr[high]);
    return(i + 1);

}

void quickSort(vector<int> &arr, int low, int high)
{
    if(low < high)
    {
        int pi = partitions(arr,low,high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi + 1, high);

    }


}

int main()
{
    vector<int> arr {38,27,43,3,9,82,10,100,25,27,23,1,2};

    quickSort(arr, 0, arr.size()-1);
    printArray(arr);


    return 0;
}

