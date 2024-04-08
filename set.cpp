//#include <iostream>
//#include <set>
//using namespace std;
//
//void printSet(set<int>& s) {
//	
//#if 0
//	for (auto it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//#else 
//	for (int ele : s) {
//		cout << ele << " ";
//	}
//	cout << endl;
//#endif
//
//}
//
//
//int main() {
//	set <int> s;
//	multiset<int> ms;
//	//insert
//	s.insert(123);
//	s.insert(111);
//	s.insert(100);
//	s.insert(111);
//	printSet(s);
//	//delete
//	
//	/*set<int>::iterator it = s.begin();
//	s.erase(it);
//	printSet(s);
//	s.clear();
//	printSet(s);*/
//
//	//find;
//	set<int>::iterator target = s.find(100)
//	cout << s.count(100) << endl;
//	set<int>::iterator res1 = s.lower_bound(111);
//	set<int>::iterator res2 = s.upper_bound(111);
//
//	cout << s.size() << endl;
//	
//	cout << s.empty() << endl;
//	
//
//	return 0;
//}