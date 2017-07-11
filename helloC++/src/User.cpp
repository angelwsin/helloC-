/*
 * User.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Administrator
 */


#include "User.h"


User::User() {
	this->age =0 ;
	this->password =" c++ ";
}

User::~User() {

}

User::User(int age,string& userName,string& password){
    this->age = age;
    this->userName = userName;
    this->password = password;
}

//成员函数有this指针，而友元函数没有this指针
string getPassword(User& user){
   return user.password;
}


