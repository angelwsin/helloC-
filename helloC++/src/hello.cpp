//============================================================================
// Name        : hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include  "User.h"
#include  "template.h"
#include  "macro.h"
using namespace std;


void invokeValue(User);
void invokeRef(User&);

int main() {
    /**
     *  c/c++ malloc  分配在堆上
     *  c++   new     分配在堆上
     *  局部变量分配在栈上
     *
     *  java  基本类型分配在栈上  引用类型堆上（栈上逃逸）
     */
	User u;
	cout<<u.getAge()<<endl;
	User* us = new User();
	User user =  User();
	delete us;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	string password = getPassword(u);

    cout << password << endl;
    cout << &u << endl;
    invokeValue(u);
    cout << u.getAge() << endl;
    //
    invokeRef(u);
    cout << u.getAge() << endl;

    int n=9;
    int &m = n;

    User ux  ;
    User& uu = ux;
    int s = addT(9,7);
    cout << s << endl;

    Print<string> print ;

    print.print(password);

    cout << MKSTR(Hello c++ ) <<endl;  //"Hello c++ "
    int xy = 100;
    cout << CONCAT(x,y) <<endl;

	return 0;
}


//传值
void invokeValue(User user){
	user.setAge(3);
	cout << "invokeValue:" << &user << endl;
}
//引用 被阉割的指针 别名  引用是变量的别名
void invokeRef(User& user){
	user.setAge(8);
	cout << "invokeRef:" <<&user << endl;
}

