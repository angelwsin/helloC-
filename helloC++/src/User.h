/*
 * User.h
 *
 *  Created on: 2017年7月7日
 *      Author: Administrator
 */

#ifndef USER_H_
#define USER_H_
#include <iostream>
#include <string>
#include "AbstractUser.h"
using namespace std;




class User : AbstractUser {

private :
	int age;
	string userName;
	string password;


public:
	User();
	User(int age,string& userName,string& password);
	virtual ~User();

	int getAge() const {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	const string& getUserName() const {
		return userName;
	}

	void setUserName(const string& userName) {
		this->userName = userName;
	}

	void say(string& str){
      cout << "hello "+str << endl;
	}
	//友元函数 不属于任何类 但可以 访问
	 friend  string getPassword(User& user);

};





#endif /* USER_H_ */
