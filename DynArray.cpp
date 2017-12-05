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


DynArray::DynArray() : m_size{0}, m_capacity{8}, m_data{new double[8]} {}

DynArray::DynArray(int newCapacity) : m_size{0}, m_capacity{newCapacity}, m_data{new double[newCapacity]} {}

DynArray::~DynArray() 
{
    delete[] m_data;
};

void DynArray::resize(int newCapacity)
{
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
        delete new_data;
    }
    else 
    {
     m_capacity = newCapacity;    
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
    if(m_size = 0) throw;
    m_size -= 1;
}

void DynArray::erase(int index)
{
    for (int i = index; i < m_size - 1; ++i)
           m_data[i] = m_data[i+1];
    pop_back();
}

int DynArray::size() {return m_size;}
int DynArray::capacity() {return m_capacity;}

void DynArray::print()
{
    
}


