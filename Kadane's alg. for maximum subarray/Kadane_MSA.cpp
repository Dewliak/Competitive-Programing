#include <bits/stdc++.h>

using namespace std;

vector<int> arr{};

int main()
{
    int N;
    cin >> N;
    for(int i =0; i < N; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int global_max{arr[0]},current_max{arr[0]};
    for(int i =0; i < N;i++){
        current_max = max(arr[i],current_max + arr[i]);

        if(current_max > global_max){
            global_max = current_max;
        }

    }

    cout << global_max << endl;

    return 0;
}
