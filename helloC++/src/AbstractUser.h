/*
 * AbstractUser.h
 *
 *  Created on: 2017年7月7日
 *      Author: Administrator
 */

#ifndef ABSTRACTUSER_H_
#define ABSTRACTUSER_H_

#include <string>
using namespace std;
//抽象
class AbstractUser {
public:
     virtual  void say(string& str) = 0;
};

#endif /* ABSTRACTUSER_H_ */
