//
// Created by Administrator on 2024/4/22/0022.
//

#include "Person.h"

Person::Person() {
    name = "default";
    age = 0;
}

Person::~Person() {

}

void Person::SetName(std::string name) {
    this->name = name;
}

void Person::SetAge(int age) {
    this->age = age;
}

std::string Person::GetName() {
    return name;
}

int Person::GetAge() {
    return age;
}