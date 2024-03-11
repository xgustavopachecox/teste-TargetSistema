/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   ex2.cpp
 * Author: User
 * 
 * Created on 9 de março de 2024, 11:58
 */

#include "ex2.h"

ex2::ex2() {
}

ex2::ex2(const ex2& orig) {
}

ex2::~ex2() {
}

bool Fibonacci(int num, int a, int b) {
    if (num== a || num == b) {
        return true;
    } else if (num < b) {
        return false;
    }
    return Fibonacci(num, b, a + b);
}
