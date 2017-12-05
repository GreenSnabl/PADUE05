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
/*
 * 
 */
int main(int argc, char** argv) {

    DynArray d;
    for(int i = 0; i < 5; i++)
    d.push_back(i*1.5);
    for (int i = 0; i < d.size(); ++i)
        std::cout << d.at(i) << "\n";
    for (int i = 0; i < d.size(); ++i)
        std::cout << d[i] << "\n";
    
    
    return 0;
}

