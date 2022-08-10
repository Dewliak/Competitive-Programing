#include <bits/stdc++.h>

using namespace std;

// Easy: Statically Sized Sliding Window: Given an array of integers, find maximum/minimum sum subarray of the required size.

int main()
{
    vector<int> arr{};
    int N,K;
    cin >> N >> K;
    for(int i =0 ; i < N ; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int max_sum{-1};
    int sum{0};
    for(int i =0; i < K;i++){
        sum += arr[i];
    }
    max_sum = sum;
    for(int i = K; i < N;i++){
        sum -= arr[i-K];
        sum += arr[i];
        if(sum > max_sum){
            max_sum = sum;
        }

    }

    cout << max_sum << endl;

    return 0;
}


/*
10 3
1 2 3 4 5 4 3 2 1 0


*/
