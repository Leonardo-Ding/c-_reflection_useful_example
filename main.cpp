//typedef void* (*PTRCreateObject)(void);
#include <iostream>

#include "ClassFactory.h"
#include "Register.h"
#include <string>
#include <iostream>
//test class
class TestClassA {
public:
    TestClassA() {
        m_name = "TestClassA";
    }
	// void m_print() {
	// 	std::cout << "hello TestClassA" << std::endl;
	// };
    const std::string& m_show() const { return m_name;}
private:
    std::string m_name;
};
class TestClassB {
public:
    TestClassB() {
        m_name = "TestClassB";
    }
	// void m_print() {
	// 	std::cout << "hello TestClassB" << std::endl;
	// };
    const std::string& m_show() const { return m_name;}
private:
    std::string m_name;
};

REGISTER(TestClassA);
REGISTER(TestClassB);

int main(int argc, char* argv[]) {
	TestClassA* ptrObjA = static_cast<TestClassA*>(ClassFactory::getInstance().getClassByName("TestClassA"));
    std::cout << ptrObjA->m_show() << std::endl;
    //ptrObjA->m_print();
    TestClassB* ptrObjB = static_cast<TestClassB*>(ClassFactory::getInstance().getClassByName("TestClassB"));
    std::cout << ptrObjB->m_show() << std::endl;
	//ptrObjB->m_print();
    return 0;
}