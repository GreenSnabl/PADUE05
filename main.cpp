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


int main(int argc, char** argv) {

    DynArray d(2000);
    d.at(0) = 2.44;
    d.at(3) = 2.666;
    
    for(int i = 0; i < 1995; ++i)
        d.pop_back();

    d.erase(2);
    d.erase(1);
    d.print();
    cout << "\n\n";
    
    for(int i = 0; i < 5; i++)
    d.push_back(i*1.5);

    d.print();
    cout << d[1] << "\n";
    d[0] = 120.12;
    cout << d[0] << "\n";
    
    
    
    return 0;
}

