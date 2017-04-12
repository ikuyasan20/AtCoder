//http://arc071.contest.atcoder.jp/tasks/arc071_b
#include <iostream>
using namespace std;

typedef long long ll;

int n,m;
ll x[100000] = {};
ll y[100000] = {};
const int mod = 1000000007;

void read_input(){
    int i;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> x[i];
    }
    for(i=0; i<m; i++){
        cin >> y[i];
    }
}

int main(void){
    read_input();
    int i,j;
    ll sum_x = 0;
    ll sum_y = 0;
    for(i=0; i<n; i++){
        sum_x += ((2*i - n + 1) * x[i]);
    }
    for(i=0; i<m; i++){
        sum_y += ((2*i - m + 1) * y[i]);
    }
    sum_x %= mod;
    sum_y %= mod;
    cout << (sum_x * sum_y) % mod << endl;
    return 0;
}
