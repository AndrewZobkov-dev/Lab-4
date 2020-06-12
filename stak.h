#pragma once
#include <iostream>
using namespace std;
template <typename Data>
class Stak
{
private:
    Data *data;
    int capacity;
    int count;
public:
    Stak()
    {
        capacity = 10;
        data = new Data[capacity];
        count = 0;
    }
    Stak(int const inputCapacity)
    {
        capacity = inputCapacity;
        data = new Data[capacity];
        count = 0;
    }
    Stak(Stak const &inputStak)
    {
        capacity = inputStak.capacity;
        data = new Data[capacity];
        for(count = 0; count <inputStak.count; ++count)
            data[count] = inputStak.data[count];
    }
    bool const push(Data const inputData)
    {
        if(count == capacity)
        {
            cout<<"\nStak is full"<<endl;
            return false;
        }
        data[count] = inputData;
        ++count;
        return true;
    }
    Data const pop()
    {
        if(isEmpty())
        {
            cout<< "\nStak is empty\n";
            return 0;
        }
        --count;
        Data tmpdata = data[count];
        data[count] = 0;
        return tmpdata;
    }
    Data const top() const
    {
        if(isEmpty())
            return 0;
        return data[count-1];
    }
    void clear()
    {
        delete[]data;
        count = 0;
        data = new Data[capacity];
    }
    bool const isEmpty() const
    {
        if(count == 0)
            return true;
        return false;
    }
    int const size() const
    {
        return count;
    }
    void print() const
    {
        if(isEmpty())
        {
            cout<<"\nQueue is empty"<<endl;
        }else{
            for(int i = 0; i<count;)
                cout<<"\t"<<data[i++];
        }
    }
    Stak& operator = (Stak const &inputStak)
    {
        delete[] data;
        capacity = inputStak.capacity;
        data = new Data[capacity];
        for(count = 0; count <inputStak.count; ++count)
            data[count] = inputStak.data[count];
        return *this;
    }
    ~Stak()
    {
        delete[] data;
        count = 0;
    }
};
