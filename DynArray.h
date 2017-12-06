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
    
    int size() const;
    int capacity() const;
    
    const double& operator[] (int i) const {return m_data[i];}  // const Memberfunktion für const Objekt und pass-by-const-reference
    double& operator[] (int i) {return m_data[i];} // kann auch als lvalue verwendet werden
    
    void print();

    
private:
    DynArray(const DynArray& other); //Kopierkonstruktor soll explizit *nicht* aufgerufen werden
    void resize(int newCapacity);
    double* m_data;
    int m_size;
    int m_capacity;
};

#endif /* DYNARRAY_H */

