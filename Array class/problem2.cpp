#include"prob2.h"
#include<iostream>
using namespace std;
int DArray::size()const{
    return _size;
}
int DArray::capacity()const{
    return _capacity;
}
/*==================================*/
//Default Constructor
/*==================================*/
DArray::DArray(){
   iptr = new int[1];
    _size = 0;
    _capacity = 1;
}
/*====================================*/
// Copy Assignment operator
/*====================================*/
DArray& DArray::operator=( const DArray&obj){

    if(this == &obj){
        return*this;
    }
       _size = obj._size;
   _capacity = obj._capacity;
    int *temp = new int [obj._capacity];
    for(int i{};i<obj._size;i++){
    temp[i] = iptr[i];
    }
  
   
  
  delete[]iptr;
  iptr = temp;
  
   return *this;
}
void DArray::push_back(int num){
    
    if(_size == _capacity){
        _capacity = _capacity*2;
        int *temp = new int[_capacity];
        for(int i{};i<_size;i++){
            temp[i] = iptr[i];
            
        }
        delete[] iptr;
      iptr = temp;

     
    }
    iptr[_size] = num;
    _size++;
   
}
int DArray::operator[](int idx)const{
    return iptr[idx];
}
int& DArray:: operator[](int idx){
    return iptr[idx];
}

ostream& operator<<(ostream&out,const DArray&obj){
    for(int i{};i<obj.size();i++){
    out<<obj[i]<<" ";

}
return out;

}
DArray::~DArray(){
    delete[]iptr;
}

