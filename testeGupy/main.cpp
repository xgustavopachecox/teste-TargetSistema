/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on 9 de março de 2024, 11:41
 */

#include <cstdlib>
#include <iostream>

#include "ex2.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ex2 obj;
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    cout << num << obj.Fibonacci(num,0,1) ? " faz parte da sequencia de Fibonacci." : " nao faz parte da sequencia de Fibonacci.";
    return 0;
}

