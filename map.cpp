//#include <iostream>
//#include <map>
//using namespace std;
//
//void test_pair() {
//	
//	pair<string, int> p1("chinese", 99);
//	cout << p1.first << endl;
//	cout << p1.second << endl;
//
//	
//	pair<string, int> p2 = make_pair("math", 98);
//	cout << p2.first << endl;
//	cout << p2.second << endl;
//}
//
//void printMap(map<string,int>&m) {
//#if 0
//	for (map<string, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << (*it).first << ",value=" << (*it).second << endl;
//	}
//#else
//	for (pair<string, int>p : m) {
//		cout << "key= " << p.first << ",value=" << p.second << "\t";
//	}
//	cout << endl;
//#endif
//}
//
//int main() {
//	
//	map<string, int> m;
//	
//	m.insert(pair<string, int>("chinese", 99));
//	m.insert(make_pair("math", 98));
//	m.insert(map<string, int>::value_type("english", 87));
//	m["history"] = 89;
//	m["history"] = 100;
//
//	
//	m.erase("history");
//
//	
//	map<string,int>::iterator it=m.find("english");
//	cout << m.count("english") << endl;
//	
//	cout << m.size() << endl;
//	cout << m.empty() << endl;
//
//	printMap(m);
//	return 0;
//}