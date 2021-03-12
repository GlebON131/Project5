#include <iostream>
#include <math.h>

using namespace std;
class Example
{
private:
    int a;
public:
    int GetA()
    {
        return a;
    }
    void SetA(int newA)
    {
        a = newA;
    }
};

class Vector
{
private:
    double x;
    double y;
    double z;
    double L;

public:
    Vector() : x(5),y(5),z(5)
    {}
    Vector(double _x,double _y, double _z) : x(_x), y(_y), z(_z)
    {}
        void Show() 
    {
            cout << x << ' ' << y << ' ' << z << '\n';
    }
        double M()
        {
            return L;
        }
        void ShowL()
        {
            L = sqrt(x * x + y * y + z * z);
            cout << "Vector length: " << L;
        }
};
int main()
{
    Example temp;
    temp.SetA(10);
    cout << temp.GetA() << '\n';
    Vector v;
    v.Show();
    v.ShowL();
}

