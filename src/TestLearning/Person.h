//
// Created by Administrator on 2024/4/22/0022.
//

#ifndef LEARNINGLUA_PERSON_H
#define LEARNINGLUA_PERSON_H
#include <iostream>

class Person {
public:
    Person();
    ~Person();
    std::string name;
    int age;
    void SetName(std::string name);
    void SetAge(int age);
    std::string GetName();
    int GetAge();
};


#endif //LEARNINGLUA_PERSON_H
