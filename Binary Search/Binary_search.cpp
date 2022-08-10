#include <bits/stdc++.h>

using namespace std;

vector<int> arr{};

int binarySearch(int k){
    int low =0;
    int high = arr.size() - 1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] < k){
            low = mid +1;
        }
        else if(arr[mid] > k){
            high = mid -1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main()
{

    int N,K;
    cin >> N >> K;
    for(int i =0; i < N; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << binarySearch(K) << endl;;

    return 0;
}


//Test

/*
10 3
1 1 2 3 4 5 6 7 10 23

*/
