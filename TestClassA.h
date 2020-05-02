#include <iostream>
#include "ClassFactory.h"
//test class A
class TestClassA{
public:
    void m_print(){
        std::cout << "hello TestClassA" << std::endl;
    };
};
 
//@brief:创建类实例的回调函数
TestClassA* createObjTestClassA(){
        return new TestClassA;
}

RegisterAction g_creatorRegisterTestClassA("TestClassA",
					(PTRCreateObject)createObjTestClassA);