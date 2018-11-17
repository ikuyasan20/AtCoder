#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A = vector<int>(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    int ors = 0;
    for(int i=0; i<N; i++){
        ors |= A[i];
    }

    int count = 0;
    while(!(ors & 1)){
        count++;
        ors >>= 1;
    }
    cout << count << endl;
    return 0;
}