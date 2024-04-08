//#include<iostream>
//#include<vector>
//using namespace std;
//
//template<typename E>
//void printVector(vector<E>&vector){
//	for (E& ele : vector) {
//		cout << ele << ",";
//	}
//	cout << endl;
//}
//
//void test01() {
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	////����
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//	//	cout << *it << endl;
//	//}
//	////�޸�
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//	//	if (*it == 20) {
//	//		*it = 200;
//	//	}
//	//	cout << *it << endl;
//	//}
//	// 
//	// 
//	////������д(�����޸ģ�
//	//for (int ele : v) {
//	//	cout << ele << endl;
//	//}
//	////���޸ĵķ���
//	//for (int& ele : v) {
//	//	if (ele == 20) {
//	//		ele = 2000;
//	//	}
//	//}
//	//for (int ele : v) {
//	//	cout << ele << endl;
//	//}
//
//
//
//	//�������
//	for (vector<int>::iterator it = --v.end(); it != v.begin(); it--) {
//		cout << *it << endl;
//	}
//}
//
//
//void test02() {
//	vector<int> v1;
//	printVector(v1);
//	vector<int> v2(10, 5);
//	printVector(v2);
//	vector<int> v3(v2.begin(), v2.end());
//	printVector(v3);
//	vector<int>v4(v1);
//	printVector(v4);
//	int arr[] = { 1,2,3,4 };
//	vector<int> v5(arr, arr + 3);
//	printVector(v5);
//}
//void test03() {
//	vector<int> v1;//��
//	printVector(v1);
//
//	vector<int>v2(4, 3);//�ĸ�3��
//	printVector(v2);
//
//	vector<int> v3(v2.begin(), v2.end());
//	printVector(v3);
//
//	int arr[] = { 1,2,3,4,5 };
//	vector<int>v4(arr, arr + 5);
//	printVector(v4);
//	vector<int>v5;
//	v5.assign(arr, +arr + 5);
//	printVector(v5);
//
//	vector<int> v6;
//	v6.assign(5, 10);
//	printVector(v6);
//	v6 = v5;//��ֵ
//	printVector(v6);
//
//
//	//swap()
//	v1.swap(v2);
//	printVector(v2);
//	printVector(v1);
//}
//void test04() {
//	vector<int> v1(10, 5);
//	cout << v1.size() << endl;
//	vector<int> v2;
//	cout << v1.empty() << endl;
//	cout << v2.empty() << endl;
//	v1.resize(20);
//	printVector(v1);//10��5+10��0
//	cout << v1.size() << endl;//
//	cout << v1.capacity() << endl;//20
//
//	v1.pop_back();
//	printVector(v1);
//	cout << v1.size() << endl;//Ԫ�ظ�����19
//	cout << v1.capacity() << endl;//���ٵĿռ��С��20
//	
//	printf("-----\n");
//	v1.resize(1);
//	printVector(v1);
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl;
//	
//
//}
//void test05() {
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	vector<int> v;
//	v.assign(arr, arr + sizeof(arr) / sizeof(arr[0]));
//
//	int &ele = v.at(3);//&����ȡ��ַ������������ֻ�Ǵ���&������޸ĳ����飿������������
//	ele = 40;
//	printVector(v);
//
//	int& ee = v[7];
//	ee = 40;
//	printVector(v);
//
//	cout << v.front() << endl;
//	cout << v.back() << endl;
//}
//void test06() {
//	int arr[] = {12,45,56,23,89,56,89,45};
//	vector<int> v(arr, arr+sizeof(arr) / sizeof(int));
//	cout << v.capacity() << endl;//8
//	
//	v.insert(v.begin()+3,5,0);//12,45,56,0,0,0,0,0,23,89,56,89,45
//	cout << v.at(8) << endl;
//	printVector(v);
//	cout << v.capacity() << endl;//13
//
//	v.push_back(34);
//	printVector(v);
//	cout << v.capacity() << endl;//19??????������ʹ��push_back���Ԫ��ʱ�������ǰ�������㣬vector�����һ��������ڴ�飬
//	                            ����ԭ��Ԫ�ظ��Ƶ��µ��ڴ���С�������̿��ܻᵼ�����·����ڴ�͸���Ԫ�صĿ�����
//	v.pop_back();
//	printVector(v);
//	
//
//	v.erase(v.begin() + 3, v.begin() + 8);
//	printVector(v);//12,45,56,23,89,56,89,45
//
//	v.erase(v.begin() + 6);//12,45,56,23,89,56,45
//	printVector(v);
//	v.clear();
//	printVector(v);
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;//19
//}
//int main() {
//	test01();
//	test02();
//	test03();
//	test04();
//	test05();
//	test06();
//	return 0;
//}