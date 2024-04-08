//find 
//find_first_of
// adjacent_find
// search
// search_n
// count
// count_f
// equal
// 
// 
// 有序查找
// binary_search
// upper_bound查找最后一个大于查找的值
// lower_bound
// equal_bound

#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
void testFind() {
	int array[10] = { 1,3,5,7,9,0,2,4,6,8 };
	vector<int> data;
	data.assign(array, array + 10);
	//find 基本查找
	auto result = find(data.begin(), data.end(), 0);//
	if(result!=data.end())
		cout << *result << endl;
	//find_if条件查找
	auto findif = find_if(data.begin(), data.end(), [](int data) {return data > 7; });
	if (result != data.end()) {
		cout << *findif << endl;
	}
	//find_first_of范围查找，第一次找到范围中任何一个元素
	int temp[] = { 10,0,2 };
	cout << *find_first_of(data.begin(), data.end(), temp, temp + 3) << endl;
	//adjacent_find找重复的元素

	vector<int> value = { 1,2,3,3,3,4,4,5 };
	cout << *adjacent_find(value.begin(), value.end()) << endl;

	//找子串
	int num[] = { 1,2,3 };
	cout << *search(value.begin(), value.end(), num, num + 3) << endl;

	//找指定出现次数的元素
	cout << *search_n(value.begin(), value.end(), 3, 3) << endl;//查找连续3个3；

}

int main() {
	testFind();
	return 0;
}