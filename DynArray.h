#ifndef DYNARRAY_H
#define DYNARRAY_H


class DynArray
{
public:
    DynArray(); //Standardkonstruktor
    DynArray(int newCapacity); //Weiterer Konstruktor
    ~DynArray(); //Destruktor, muss implementiert werden
    
    double& at(int index);
    void push_back(double elem);
    void pop_back();
    void erase(int index);
    
    int size();
    int capacity();
    
    double operator[](int i){return m_data[i];}
    
    void print();

private:
    void resize(int newCapacity);
    DynArray(const DynArray& other); //Kopierkonstruktor soll explizit *nicht* aufgerufen werden
    double* m_data;
    int m_size;
    int m_capacity;
};

#endif /* DYNARRAY_H */

