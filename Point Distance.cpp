/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: HW 7.16
Description:
-Define a structure Point. A point has an x- and a y-coordinate
-Write a function double distance(Point a, Point b) that computes the distance from a to b
-Write a program that reads the coordinates of the points, calls your function, and displays the result


*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

struct Point { // define structure with double variables

    double x;
    double y;
};

double distance(Point x, Point y) {
    return sqrt(pow(x.x - y.x, 2) + pow(x.y - y.y, 2));
}

int main() {
    Point p1, p2;  // declare two point variables
    cout << "Enter x of first point: ";
    cin >> p1.x;
    cout << "Enter y of first point: ";
    cin >> p1.y;
    cout << "Enter x of second point: ";
    cin >> p2.x;
    cout << "Enter y of second point: ";
    cin >> p2.y;
    cout << "Distance between entered points is " << distance(p1, p2) << endl;  // print the distance
    return 0;
}