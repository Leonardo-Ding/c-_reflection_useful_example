#include <iostream>
#include "ClassFactory.h"
//test class B
class TestClassB{
public:
    void m_print(){
        std::cout << "hello TestClassB" << std::endl;
    };
};
 
//@brief:创建类实例的回调函数
TestClassB* createObjTestClassB(){
        return new TestClassB;
}

RegisterAction g_creatorRegisterTestClassB("TestClassB",
					(PTRCreateObject)createObjTestClassB);