/*
 * User.cpp
 *
 *  Created on: 2017��7��7��
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

//��Ա������thisָ�룬����Ԫ����û��thisָ��
string getPassword(User& user){
   return user.password;
}


