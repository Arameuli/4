#include <iostream>
#include"Shenoba.h"
#include"Xee.h"
using namespace std;
bool Shenoba::samehight(Xee t) {
	return hight == t.hight;
}
int main()
{
	Shenoba c(140);
	Xee t(55);
	if (c.samehight(t)) {
		cout << "emtxveva " << endl;
	}
	else cout << "ar emtxveva " << endl;
}
/*#pragma once
class Xee;
class Shenoba
{
private: int hight;
public:
	Shenoba(int hight) {
		this->hight = hight;
	}
	bool samehight(Xee t);
};*/
/*#pragma once
#include"Shenoba.h"
class Xee
{
	friend bool Shenoba :: samehight(Xee t);
private: int hight;
public: Xee(int hight) {
	this->hight = hight;
}
};
*/