#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	unordered_set<int> st;
	int x;
	for(int i = 0; i < n; i++) cin>>x, st.insert(x);
	int i = 1; 
	while(st.count(i)) i++;
	cout<<i<<endl;
	return 0;
} 
