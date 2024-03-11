/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on 9 de março de 2024, 12:20
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    string text = "ABCDE";
    int tamanho = 5;
    char aux[tamanho];

    for (int i = 0; i < tamanho; i++) {
        aux[i] = text[i];
    }

    for (int i = 0; i < tamanho; i++) {
        text[i] = aux[tamanho - i - 1];
        cout << text[i];
    }
    cout << endl;
    return 0;
}

