#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int width;
public:
    rectangle(int length, int width)
    {
       this->length = length;
       this->width = width;
    }

    void getArea()
    {
        cout << "Result: " << length * width << endl;
    }
};

int main()
{
    rectangle p1(2, 3);
    p1.getArea();
}
