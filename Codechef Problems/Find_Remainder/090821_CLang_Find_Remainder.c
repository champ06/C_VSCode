#include <stdio.h>

// Solution 1
int main() {
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		int c = a%b;
		printf("%d\n",c);
		t--;
	}
	return 0;
}

// Solution 2
/*
#include <stdio.h> 

int main() {
	// Read the number of test cases.
	int T, i;
	scanf("%d", &T);
// 	while (T--) {
    for (i = 0; i < T; i++)
    {
		// Read the input a, b
		int a, b, ans;
		scanf("%d%d", &a, &b);

		// Compute the ans.
		// Complete this line.
		if (a<b)
		{
		    ans = a;
	        printf("%d\n", ans);
		}
		else
		{
    		ans = a % b;
    		printf("%d\n", ans);
		}
	}

	return 0;
}
*/