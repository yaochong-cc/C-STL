//#include<cstdio>
//#include <algorithm>
//using namespace std;
//
//const int max = 10000;
//int main() {
//	int n, q, x, a[10000], kcase = 0;
//	while (scanf("%d%d", &n, &q) == 2 && n) {
//		printf("CASE# %d:\n", ++kcase);
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &a[i]);
//		}
//		sort(a, a + n);//algorithm,
//		while (q--) {
//			scanf("%d", &x);
//			int p = lower_bound(a, a + n, x) - a;//
//			if (a[p] == x) {
//				printf("%d found at %d\n", x, p + 1);
//			}
//			else {
//				printf("%d not found\n", x);
//			}
//		}
//		return 0;
//	}
//}