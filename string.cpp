#include <iostream>
//#include <string>
using namespace std;

void test01() {
	string str;
	cout << "str=" << str << endl;
	
	string str2 = string("hello world");
	cout << "str2=" << str2 << endl;

	string str3 = string(str2);
	cout << "str3=" << str3 << endl;
	
	string str4 = string(5, 'A');
	cout << "str4= "<<str4 << endl;
	
	const char* array = "hello world";
	string str5 = string(array);
	cout << "str5=" << str5 << endl;
}
//string �ĸ�ֵ
void test02() {
	string str;
	//ͨ���ȺŸ�ֵ��
	//ͨ���ַ�����ֵ
	str = "hello world";
	cout << str << endl;
	//ͨ���ַ����鸳ֵ
	const char* arr = "abc";
	str = arr;
	cout << str << endl;
	
	str = 'a';
	cout << str << endl;


	
	str.assign("hello world");
	cout << str << endl;

	str.assign(3, 'a');
	cout << str << endl;


	//
	str.assign(arr, 2);
	cout << str << endl;

	str.assign("hello world", 3, 5);
	cout << str << endl;
}

void test03() {
	string str = "hello world";

	//char& operator[](int n);
	//char& at(int n);
	
	cout << str[4] << endl;
	cout << str.at(4) << endl;//ȡ

	
	char& c = str[4];
	c = '!';
	cout << str << endl;
	
	
	cout << (int*)str.c_str() << endl;
	cout << str.c_str() << endl;

	str = "12334dhkj";
	cout << (int*)str.c_str() << endl;
	cout << str.c_str() << endl;
	c = 'A';
	cout << str << endl;

}
//string 
void test04() {
	string str = "hello";
	
	//string str1 = str + "world"
	//string str2 = "hello" + "world";
	str += " world";
	cout << str << endl;

	//append;
	str.append(" how are you");
	cout << str << endl;

	str.append(" nihao", 3);//
	cout << str << endl;  //

	string str2 = "??";
	str.append(str2);
	cout << str << endl;//
	
	str.append("c++ is the best progarmming language", 11, 4);
	cout << str << endl;//
	str.append(4, 'a');
	cout << str << endl;
}
//string �Ĳ��Һ��滻
void test05() {
	string str = "c++ is the most popular ,most useful language in the world";
	//
	cout<<str.find("most")<<endl;
	cout << str.find("most", 20) << endl;
	cout << (int)(str.find("areyou")) << endl;
	cout << str.find("mostmost", 0, 4) << endl;
	                                          
	
	cout << str.rfind("most") << endl;
	cout << str.rfind("most", 20) << endl;
	
	str.replace(11, 25,"best");//
	cout << str << endl;
}

void test06() {
	
	string str1 = "abcdef";
	string str2 = "abe";
	cout << (str1 > str2 )<< endl;

	
	cout << str1.compare(str2) << endl;
}

void test07() {
	string str = "hello";
	cout << str.substr(3, 1) << endl;
	cout << str.substr(0) << endl;
	cout << str.substr(4) << endl;
	cout << str << endl;
}

void test08() {
	string str = "HAHAHAHA";
	str.insert(4, "hell0");
	cout << str << endl;
	str.insert(4, 5, 'k');
	cout << str << endl;
	//ɾ��
	str.erase(4, 5);
	cout << str << endl;
	str.erase(4);
	cout << str << endl;
}


int main() {
	test01();
	printf("--------\n");
	test02();
	printf("--------\n");
	test03();
	printf("--------\n");
	test04();
	printf("--------\n");
	test05();
	printf("--------\n");
	test06();
	printf("--------\n");
	test07();
	printf("--------\n");
	test08();

	return 0;
}

