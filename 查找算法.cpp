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
// �������
// binary_search
// upper_bound�������һ�����ڲ��ҵ�ֵ
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
	//find ��������
	auto result = find(data.begin(), data.end(), 0);//
	if(result!=data.end())
		cout << *result << endl;
	//find_if��������
	auto findif = find_if(data.begin(), data.end(), [](int data) {return data > 7; });
	if (result != data.end()) {
		cout << *findif << endl;
	}
	//find_first_of��Χ���ң���һ���ҵ���Χ���κ�һ��Ԫ��
	int temp[] = { 10,0,2 };
	cout << *find_first_of(data.begin(), data.end(), temp, temp + 3) << endl;
	//adjacent_find���ظ���Ԫ��

	vector<int> value = { 1,2,3,3,3,4,4,5 };
	cout << *adjacent_find(value.begin(), value.end()) << endl;

	//���Ӵ�
	int num[] = { 1,2,3 };
	cout << *search(value.begin(), value.end(), num, num + 3) << endl;

	//��ָ�����ִ�����Ԫ��
	cout << *search_n(value.begin(), value.end(), 3, 3) << endl;//��������3��3��

}

int main() {
	testFind();
	return 0;
}