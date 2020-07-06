#include <iostream>
#include "LinkedList.h"
#include <string>
#include "Point.h"

using namespace std;

int main()
{
    LinkedList<Point> l;
    
    Point p(1,2);
    Point q(2,2);
    Point r(3,2);
    Point s(4,2);

    /*
    l.pushBack("gato");    //insertamos los nodos
    l.pushBack("perro");
    l.pushBack("raton");
    l.pushFront("hamster");
    */
    l.pushBack(p);    //insertamos los nodos
    l.pushBack(q);
    l.pushBack(r);
    l.pushBack(s);
    
    l.print();
    
    //l.pop(2);   //removemos indicando la posicion
    l.popFront();
    l.popBack();
    
    l.print();

    return 0;
}