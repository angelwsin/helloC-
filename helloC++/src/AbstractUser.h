/*
 * AbstractUser.h
 *
 *  Created on: 2017��7��7��
 *      Author: Administrator
 */

#ifndef ABSTRACTUSER_H_
#define ABSTRACTUSER_H_

#include <string>
using namespace std;
//����
class AbstractUser {
public:
     virtual  void say(string& str) = 0;
};

#endif /* ABSTRACTUSER_H_ */
