#include <iostream>
using namespace std;
#include <string>
struct Stu
{
	string name;
	int age;
};
void print(Stu s)
{
	cout << s.name << " "<<s.age << endl;
}
int main()
{
	Stu s = { "zhangsan",20};
	print(s);
	return 0;
}
