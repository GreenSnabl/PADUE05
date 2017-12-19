/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DynArray.cpp
 * Author: dennis
 * 
 * Created on December 5, 2017, 8:01 PM
 */
#include "DynArray.h"
#include <iostream>
#include <iomanip>

using std::cout; using std::endl; using std::right; using std::setw;

DynArray::DynArray() : m_size{0}, m_capacity{8}, m_data{new double[8]} {cout << "\n~Dynarray(): " << this << "\n\n";}

DynArray::DynArray(int newCapacity) : m_size{newCapacity}, m_capacity{newCapacity}, m_data{new double[newCapacity]} 
{
    for (int i = 0; i < m_size; ++i)
        m_data[i] = 0.0;
    cout << "\nDynarray(int newCapacity): " << this << "\n\n";
} 
DynArray::~DynArray() {delete[] m_data; cout << "\n~Dynarray(): " << this << "\n\n";}

void DynArray::resize(int newCapacity)
{
    if(newCapacity == m_capacity) return;
    if(newCapacity < m_size)
    {
        double* new_data = new double[newCapacity];
        m_capacity = newCapacity;
        m_size = newCapacity;
        for(int i = 0; i < newCapacity; ++i)
        {
         new_data[i] = m_data[i];
        }
        delete[] m_data;
        m_data = new_data;
        new_data = nullptr;
    }
    else 
    {
        double* new_data = new double[newCapacity];
        m_capacity = newCapacity;
        for(int i = 0; i < m_size; ++i)
            new_data[i] = m_data[i];
        delete[] m_data;
        m_data = new_data;
        new_data = nullptr;
    }
}

double& DynArray::at(int index)
{
    if(index < m_size && index >= 0) return m_data[index];
}

void DynArray::push_back(double elem) 
{
    if(m_size == m_capacity)
    {
        resize(m_size * 2);    
    }
    m_data[m_size] = elem;
    ++m_size;
    
}

void DynArray::pop_back() 
{
    if(m_size == 0) return;
    --m_size;
}

void DynArray::erase(int index)
{
    for (int i = index; i < m_size - 1; ++i)
           m_data[i] = m_data[i+1];
    pop_back();
}

int DynArray::size() const {return m_size;}
int DynArray::capacity() const {return m_capacity;}

void DynArray::print()
{
    for (int i = 0; i < m_size; ++i){
        if (i != 0 && i % 20 == 0) cout << "\n";
        cout << setw(4) << std::left << at(i);
    }
    cout << endl;
}


/*DynArray::DynArray(const DynArray& other) : m_size{other.m_size}, 
                                            m_capacity{other.m_capacity}, 
                                            m_data{new double[other.m_size]}
{
    for (int i = 0; i < other.m_size; ++i)
        m_data[i] = other.m_data[i];
}*/