#include"prob1.h"
#include<iostream>
using namespace std;
DArray::DArray(){
    iptr = new int[1];
    size = 0;
    capacity = 1;
}
int DArray::getsize()const{
    return size;
}
DArray& DArray::operator=(const DArray&obj){
    if(this == &obj){
        return*this;
    }
     size = obj.size;
   capacity = obj.capacity;
  int *temp = new int [capacity];
  for(int i{size-1};i>=0;i--){
    temp[i] = obj.iptr[i];
  } 
  
  delete[]iptr;
  iptr = temp;
  
   return *this;
}
void DArray::push_back(int num){
    if(size == capacity){
        capacity*=2;
        int *temp = new int[capacity];
        for(int i{};i<size;i++){
            temp[i] = iptr[i];
            
        }
        delete[] iptr;
      iptr = temp;
     
    }
    iptr[size] = num;
    size++;
   
}
int DArray:: operator[](int idx)const{
    return iptr[idx];
}
ostream& operator<<(ostream&out,const DArray&obj){
    for(int i{};i<obj.getsize();i++){
    out<<obj[i]<<" ";

}
return out;

}
DArray::~DArray(){
    delete[]iptr;
}
