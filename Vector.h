#pragma once
#include <cmath>
#include <iostream>
//перегрузить оператор + - *(скалярное произведение). Длина вектора. Нормализация вектора. Конструкторы копирования и присваивания(подумать не делать).
template<typename T>
class Vector
{
private:
    T* _array;
    size_t _size;
public:
    Vector(){
        _size = 10;
        _array = new T[_size];
        for (int i = 0; i < _size; i++){
            _array[i] = 0;
        }
    };
    
    Vector(size_t size) : _size(size){
        _array = new T[_size];
        for (int i = 0; i < _size; i++){
            _array[i] = 0;
        }
    }

    Vector(std::initializer_list<T> list){
        _size = list.size();
        _array = new T[_size];
        int i = 0;
        for (auto elem = list.begin(); elem != list.end(); ++elem){
            _array[i] = *elem;
            i++;
        }
    }

    Vector(size_t size, T* array) : _size(size), _array(new T[size]){
        for (int i = 0; i < _size; i++){
            _array[i] = array[i];
        }
    }

    ~Vector(){
        delete [] _array;
    }

    const T& operator[](int index) const{
        return _array[index];
    }
    friend std::ostream& operator<<(std::ostream& os, const Vector& tmp){
        os << "(";
        for (int i = 0; i < tmp._size; i++){
            os << tmp._array[i];
            if (i + 1 != tmp._size) os << ", ";
        }
        os << ")" << std::endl;
        return os;
    }
   
};

