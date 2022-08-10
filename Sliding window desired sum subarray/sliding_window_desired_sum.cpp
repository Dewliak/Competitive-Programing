#include <bits/stdc++.h>


// Having a array, find the desired number for sor

using namespace std;

int main()
{
    vector<int> arr{};
    int N,K;
    cin >> N >> K;
    for(int i =0 ; i < N; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    //Sliding window
    vector<pair<int,int>> sol{};
    int j{0};
    int sum{0};
    for(int i =0; i< N;i++){
        sum += arr[i];

        while(sum > K){
            sum -= arr[j];
            j++;
        }
        if(sum == K){
            sol.push_back(make_pair(j,i));
        }
    }

    for(auto i: sol){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
