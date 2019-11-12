#include<iostream>
using namespace std;

class singleton
{
	private: int x;static singleton *obj;
	explicit singleton(){
		cout << "constructor :" << endl;
		x = 10;
	}

	public:
	static singleton *getInstance()
	{
		if(obj == NULL){
		obj = new singleton();
		}
		
		return obj; 
	}
	void print()
	{
		cout << x << endl;
	}
		
	void set(int num)
	{
		x = num;
	}
};

singleton *singleton::obj=NULL;
int main()
{
	singleton::getInstance()->set(10);
	singleton::getInstance()->print();
	singleton::getInstance()->set(20);
	singleton::getInstance()->print();
	return 0;
}
