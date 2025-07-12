#include <bits/stdc++.h>
using namespace std;
using ll = long long;

static const uint32_t EMPTY = 0xFFFFFFFF;
static const uint32_t DELETED = 0xFFFFFFFE;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll Q; uint32_t S, A, B;
    cin >> Q >> S >> A >> B;
    uint32_t cap = 1;
    while(cap < Q * 2) cap <<= 1;
    vector<uint32_t> tbl(cap, EMPTY);
    auto h = [&](uint32_t x){
        return (x ^ (x >> 16)) & (cap - 1);
    };
    ll sum = 0;
    for(ll i = 0; i < Q; i++){
        uint32_t op = (S & 1);
        uint32_t x = S >> 1;
        uint32_t idx = h(x);
        uint32_t first_del = EMPTY;
        while(true){
            uint32_t v = tbl[idx];
            if(v == EMPTY){
                if(op){
                    uint32_t pos = (first_del != EMPTY ? first_del : idx);
                    tbl[pos] = x;
                    sum += x;
                }
                break;
            }
            if(v == DELETED){
                if(first_del == EMPTY) first_del = idx;
            }
            else if(v == x){
                if(!op){
                    tbl[idx] = DELETED;
                    sum -= x;
                }
                break;
            }
            idx = (idx + 1) & (cap - 1);
        }
        S = (uint32_t)(( (uint64_t)A * S + B ) & 0xFFFFFFFFu);
    }
    cout << sum << "\n";
}
