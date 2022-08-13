#include <bits/stdc++.h>
using namespace std;

class distence
{
    int s1, s2;
public:
    distence(int a, int b)
    {
        s1 = a;
        s2 = b;
    }
    friend void ans(distence, distence);
    void display()
    {
        cout <<"your given  points is:- (" << s1 << "," << s2 << ")" << endl;
    }
};
void ans(distence p1, distence p2)
{
    double disbtw;
    disbtw = sqrt(pow((p1.s1 - p2.s1), 2) + pow((p1.s2 - p2.s2), 2));
    cout<<"The distance between two points are " << disbtw << endl;
}

int main()
{
    distence x(3, 4);
    distence y(2,3);
    x.display();
    y.display();
    ans(x, y);
    return 0;
}