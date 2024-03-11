/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   ex2.h
 * Author: User
 *
 * Created on 9 de março de 2024, 11:58
 */

#ifndef EX2_H
#define EX2_H

class ex2 {
public:
    ex2();
    ex2(const ex2& orig);
    virtual ~ex2();
    
    bool Fibonacci(int num, int a = 0, int b = 1);
private:

};

#endif /* EX2_H */

