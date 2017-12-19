/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dennis
 *
 * Created on December 5, 2017, 8:01 PM
 */

#include "DynArray.h"
#include <iostream>

using std::cout;

void f()
{
    DynArray d(10);
    for (int i = 0; i < 10; ++i)
        d.at(i) = i;
    d.print();
    cout << "\n";
    
    
    d.erase(3);
    d.print();
    cout << "\n";
    
    for(int i = 10; i < 100; ++i)
        d.push_back(i);
    d.pop_back();
    d.print();
     cout << "\n";
}


void g()
{
        DynArray d2(20000);
    for (int i = 0; i < 20000; ++i)
        d2.at(i) = i;
    for(int i = 0; i < 19950; ++i)
        d2.erase(49);
    d2.print();
    
    cout << "\n";

    d2.pop_back();
    d2.print();
    cout << "\n";
    for(int i = 0; i < 500; ++i)
        d2.push_back(i);
    
    d2.print();
}

int main() {

    f();
    g();
    

    
    return 0;
}

