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

    while (true) {
        cout << "Digite um numero (ou -1 para sair): ";
        cin >> num;
        if (num == -1)
            break;
        cout << num << (obj.Fibonacci(num, 0, 1) ? " faz parte da sequencia de Fibonacci." : " nao faz parte da sequencia de Fibonacci.") << endl;
    }

    return 0;
}

