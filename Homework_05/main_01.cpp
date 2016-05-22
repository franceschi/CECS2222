#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    
    Complex(int real=0,int img=0)
    {
        this->real = real;
        this->img = img;
    }
    Complex sum(Complex other)
    {
        return Complex(real+other.real,img+other.img);
    }
    Complex subtract(Complex other)
    {
        return Complex(real-other.real,img-other.img);
    }
    void print()
    {
        cout << "(" << real << "x + " << img << "i) " << endl;
    }
};

int main()
{
    cout <<"Welcome to the complex number program!" << endl;
    Complex C1(4,5);
    Complex C2(2,3);
    
    C1.print();
    C2.print();
    
    cout << "Addition of Complex number #1 and Complex number #2 is given by result: " << endl;
    Complex C3 = C1.sum(C2);
    C3.print();
    
    cout << "Subtraction of Complex number #2 and Complex number #1 given by result:" << endl;
    Complex C4 = C1.subtract(C2);
    C4.print();
    
    return 0;
}

