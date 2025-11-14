#include <algorithm>
#include <iostream>
#include <cassert>
#include <cstdio>
#include <string>
#include <vector>
 
#define NMAX 100010
 
using namespace std;
 
int N;
 
vector<int> vals[NMAX];
vector<int> gbit[NMAX];
vector<int> fbit[NMAX];
 
const int mod = (1e9)+7;
 
void upd(int x, int v, vector<int> &tree, vector<int> &vl){
	x = lower_bound(vl.begin(),vl.end(),x)-vl.begin();
 
	for(;x < tree.size(); x += (x&-x)){
		tree[x] += v;
		tree[x] %= mod;
		if(!x) break;
	}
}
 
int query(int x, vector<int> &tree, vector<int> &vl){
	if(tree.empty()) return 0;
	x = lower_bound(vl.begin(),vl.end(),x)-vl.begin();
	int sum =0 ;
	for(--x; x >= 0; x -= (x&-x)){
		sum += tree[x];
		sum %= mod;
		if(!x) break;
	}
 
	return sum;
}
 
int A[NMAX];
int lis[NMAX];
int len[NMAX];
int L;
 
void init(){
	int i,x;
 
	for(i =0 ; i < N; ++i){
		x = lower_bound(lis,lis+L,A[i])-lis;
		lis[x] = A[i];
		L = max(L,++x);
		len[i] = x;
		vals[x].push_back(A[i]);
	}
 
	for(i = 0; i <= L; ++i){
		sort(vals[i].begin(),vals[i].end());
		fbit[i].resize(vals[i].size());
		gbit[i].resize(vals[i].size());
	}
}
 
void clear(){
	for(int i =0 ; i <= L; ++i){
		vals[i].clear();
		fbit[i].clear();
		gbit[i].clear();
	}
	L = 0;
}
 
int ls;
 
int compute(){
	int i,ff,gg;
	int sl;
	for(i = 0; i < N; ++i){
		if(len[i] == 1){
			ff = gg = 1;
		}
		else{
			ff = query(A[i],fbit[len[i]-1],vals[len[i]-1]);
			if(len[i] == 2) gg = 1;
			else {
				gg = query(A[i],fbit[len[i]-2],vals[len[i]-2]) + query(A[i],gbit[len[i]-1],vals[len[i]-1]);
				gg %= mod;
			}
		}
 
		upd(A[i],ff,fbit[len[i]],vals[len[i]]);
		upd(A[i],gg,gbit[len[i]],vals[len[i]]);
	}
 
	if(ls == 1) return 1;
	sl = query((2e9),fbit[ls-1],vals[ls-1])+ query((2e9),gbit[ls],vals[ls]);
	sl %= mod;
 
	return sl;
}
 
int main(){
 
	int t;
 
	scanf("%d",&t);
	int i;
	while(t--){
		scanf("%d",&N);
		for( i= 0; i < N; ++i) scanf("%d",&A[i]);
		init();
		ls= L;
		printf("%d\n",compute());
		clear();
	}
 
	return 0;
}
