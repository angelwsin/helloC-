/*
 * template.h
 *
 *  Created on: 2017年7月7日
 *      Author: Administrator
 */

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

#include <iostream>
using namespace std;




//模板函数 typename/class
template <typename  T> T addT(T a,T b){
	  return a+b;
};


template <class T> class Print{

public :
	void print(T& t){
		cout << t << endl;
	}

};



#endif /* TEMPLATE_H_ */
