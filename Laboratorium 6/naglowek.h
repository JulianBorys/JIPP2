#include <iostream>
using namespace std;

class Node
{

private:
    double x,y;

public:
    Node();
    Node(double x, double y);

    void display();
    void upadateValue(double x, double y);

    friend double pointsDistance(Node& a, Node& b);
};

Node::Node(): x(0), y(0) {}

void Node::display()
{
    cout << "x: " << x << "\ty: " << y << endl;
}

void Node::upadateValue(double x, double y)
{
    this->x = x;
    this->y = y;
}

double pointsDistance(Node& a, Node& b)
{
    return sqrt(pow((b.x - a.x) ,2) + pow((b.y - a.y) ,2));
}