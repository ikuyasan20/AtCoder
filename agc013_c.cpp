//http://agc013.contest.atcoder.jp/tasks/agc013_c
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int N,T,L;
    int X[100000] = {};
    int W[100000] = {};
    int i;
    cin >> N >> L >> T;
    //cout << N << L << T << endl;
    for(i=0;i<N;i++){
        cin >> X[i] >> W[i];
        //cout << X[i] << W[i] << endl;
    }

    vector<int> v;
    for(i=0;i<N;i++){
        if(W[i]==1){
            v.push_back((X[i] + T) % L);
        }
        if(W[i]==2){
            v.push_back((((X[i] - T) % L) + L) % L);
        }
        //cout << v[i] << endl;
    }
    int cross = 0;
    if(W[0]==1){
        for(i=1;i<N;i++){
            if(W[i]==2){
                if(2*T-(X[i]-X[0])>=0){cross++;}
                //cout << "cross " << cross << endl;
                cross += (2*T-(X[i]-X[0]))/L;
                //cout << "cross " << cross << endl;
            }
        }
    }
    if(W[0]==2){
        for(i=1;i<N;i++){
            if(W[i]==1){
                if(2*T-(L - X[i] + X[0])>=0){cross++;}
                //cout << "cross " << cross << endl;
                cross += (2*T-(L - X[i] + X[0]))/L;
                //cout << "cross " << cross << endl;
            }
        }
    }
    cross %= N;
    int tmp = v[0];
    sort(v.begin(), v.end());
    vector<int>::iterator iter = find(v.begin(), v.end(), tmp);
    int index = distance(v.begin(), iter);
    if(W[0]==1){
        if(v[index] == v[(index+1+N)%N]){index++;}
        for(i=0;i<N;i++){
            cout << v[(index-cross+i+N)%N] << endl;
        }
    }
    if(W[0]==2){
        for(i=0;i<N;i++){
            cout << v[(index+cross+i+N)%N] << endl;
        }
    }
    //cout << "index " << index << endl;

    return 0;
}
