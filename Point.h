#include<iostream>

using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(int,int);
        int getX();
        int getY();
        int setX(int);
        int setY(int);
        friend ostream& operator <<(ostream &o, const Point &p);
};

    Point::Point(int x_=0, int y_=0){
        x=x_;
        y=y_;
    }
    int Point::getX(){
        return x;
    }
    int Point::getY(){
        return y;
    }
    int Point::setX(int x_){
        x=x_;
    }
    int Point::setY(int y_){
        y=y_;
    }
    ostream& operator <<(ostream &o, const Point &p){
        o<<"("<<p.x<<","<<p.y<<")";
        return o;
    }