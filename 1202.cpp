#define	_CRT_SECURE_NO_WARNINGS 1



//#include<iostream>
//#include<vector>
//using namespace std;
//int palindrome(vector<int>& item, int head, int tail);//ÒýÓÃ
//int main()
//{
//	int n, a;
//	cin >> n;
//	vector<int> item;
//	while (cin >> a)
//		item.push_back(a);
//	cout << palindrome(item, 0, n - 1);
//	return 0;
//}
//int palindrome(vector<int>& item, int head, int tail) {
//	int left = item[head], right = item[tail];
//	int times = 0;
//	while (head < tail && left != right) {
//		if (left < right) {
//			left += item[++head];
//			++times;
//		}
//		else {
//			right += item[--tail];
//			++times;
//		}
//	}
//	if (head >= tail)
//		return times;
//	else
//		return times + palindrome(item, ++head, --tail);
//}

//#include<iostream>
//using namespace std;
//int a[55];
//int huiwen(int a[], int n)
//{
//	int left = 1, right = n;
//	int sum = 0;
//	while (left < right)
//	{
//		if (a[left] < a[right])
//		{
//			a[left + 1] += a[left];
//			sum++;
//			left++;
//		}
//		else if (a[left] == a[right])
//		{
//			left++;
//			right--;
//		}
//		else
//		{
//			a[right - 1] += a[right];
//			sum++;
//			right--;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		cin >> a[i];
//	cout << huiwen(a, n);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//const int maxn = 100;
//int nums[maxn], n, sum, cnt;
//int idx[1 << 20];
//int main() {
//	int i, j;
//	for (i = 0; i < 20; i++) idx[1 << i] = i;
//	cin >> n >> sum;
//	for (i = 0; i < n; i++) {
//		cin >> nums[i];
//	}
//	int s = (1 << n) - 1;
//	for (i = s; i; i = s & (i - 1)) {
//		int accu = 0;
//		j = i;
//		do {
//			accu += nums[idx[j ^ (j & (j - 1))]];
//			j = j & (j - 1);
//		} while (j);
//		if (accu == sum)cnt++;
//	}
//	cout << cnt;
//}

//
//#include<iostream>
//using namespace std;
//double a, b, c, d, x;
//double f(double x) {
//	double y = a * x + b;
//	y = y * x + c;
//	return y * x + d;
//}
//double Find(double& a, double& b, double delta) {
//	double x, fa = f(a), fb;
//	for (x = a; x <= b; x += delta) {
//		fb = f(x + delta);
//		if (fb * fa <= 0) {
//			break;
//		}
//		fa = fb;
//	}
//	a = x;
//	b = x + delta;
//	return(a + b) / 2;
//}
//double findroot(double& a, double& b) {
//	Find(a, b, 0.5);
//	Find(a, b, 0.05);
//	return Find(a, b, 0.005);
//}
//int main()
//{
//	double x1, xr, x;
//	cin >> a >> b >> c >> d;
//	x1 = -100, xr = 100;
//	x = findroot(x1, xr);
//	printf("%1.2lf ", x);
//	x1 = xr, xr = 100;
//	x = findroot(x1, xr);
//	printf("%1.2lf ", x);
//	x1 = xr, xr = 100;
//	x = findroot(x1, xr);
//	printf("%1.2lf", x);
//}
//
////int main() {
////	double a, b, c, d, i;
////	cin >> a >> b >> c >> d;
////}
////
////int main() {
////	double a, b, c, d, i;
////	cin >> a >> b >> c >> d;
////	for (i = -100; i < 100; i++) {
////		double left = i, right = i + 1;
////		if (a * i * i * i + b * i * i + c * i + d == 0) {
////			printf("%.2lf ", i);
////		}
////		else if (f(left) * f(right) < 0) {
////			while (right - left >= 0.001) {
////				double mid = (left + right) / 2;
////				if (f(mid)*f(left) <= 0)
////					right = mid;
////				else
////					left = mid;
////			}
////		}
////	}
////}