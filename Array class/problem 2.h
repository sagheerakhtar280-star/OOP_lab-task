#ifndef prob2_h
#define prob2_h
#include<iostream>
using namespace std;
class DArray{
    private:
    int* iptr;
    int _size{};
    int _capacity{1};
    public:
    int size()const;
    //
    int capacity()const;
    //
    DArray();
    DArray& operator =(const DArray&obj);
    int  operator[](int idx)const;
    int&  operator[](int idx );
    void push_back(int);
    ~DArray();
  
};
  ostream& operator<<(ostream&out,const DArray&obj);
#endif
