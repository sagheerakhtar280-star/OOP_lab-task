#ifndef prob1_h
#define prob1_h
#include<iostream>
using namespace std;
class DArray{
    private:
    int*iptr;
    int size{};
    int capacity{1};
    public:
    int getsize()const;
    DArray();
    DArray& operator =(const DArray&obj);
    int  operator[](int idx)const;
    void push_back(int);
    ~DArray();
  
};
  ostream& operator<<(ostream&out,const DArray&obj);
#endif
 
