## 题意

-   找到数组中最小未出现的正整数，可以使用集合做预处理。

## 代码

-   空间复杂度：$O(N)$
-   时间复杂度：$O(N)$
-   思路：集合预处理。

```cpp
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
```

-   空间复杂度：$O(1)$
-   时间复杂度：$O(N)$
-   思路：双指针，已经存在的正整数l和最大能存在的正整数r。

```cpp
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int nums[N];
int main(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++) cin>>nums[i];
	int l = 0, r = n;
	while(l < r){
		if(nums[l]==l+1) l++;
		else if(nums[l] > r || nums[l] <= l || nums[nums[l]-1]==nums[l]) {
			r--;
			nums[l] = nums[r];
		}
		else swap(nums[l], nums[nums[l]-1]);
	}
	cout<<l+1<<endl;
	return 0;
} 
```

