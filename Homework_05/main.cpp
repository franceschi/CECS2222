#include<iostream>
using namespace std;//
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
Complex add(Complex other)
{
return Complex(real+other.real,img+other.img);
}
Complex subtract(Complex other)
{
return Complex(real-other.real,img-other.img);
}
void print()
{
cout << "(" << real << " , " << img << ") " << endl;
}
};
int main()
{
Complex C1(4,5);
Complex C2(2,3);
C1.print();
C2.print();
cout << "Addition of C1 and C2 given by " << endl;
Complex C3 = C1.add(C2);
C3.print();
cout << "subtraction of C2 and C1 given by " << endl;
Complex C4 = C1.subtract(C2);
C4.print();

return 0;
}

