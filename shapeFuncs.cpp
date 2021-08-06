#include <iostream>
#include <string>
#include <sstream>  // for ostringstream
#include <iomanip> // for setprecision
#include "utility.h"
#include <cmath>

using namespace std;


#include "shapes.h"
#include "shapeFuncs.h"
#include "utility.h"

// Compute distance between two points

double distanceBetween(Point p, Point q) {
    double distance;
    
    distance = sqrt(pow(q.x-p.x, 2) + pow(q.y-p.y, 2));
  return distance;
}

 
// The function initPoint below illustrates passing a struct by pointer.
// Inside this function:
//  p   is the address of the struct Point
// (*p) refers to the struct Point itself (we dereference the pointer)
// (*p).x refers to the x member of the point
// (*p).y refers to the y member of the point
// p->x is a shortcut for (*p).x ( -> means deference AND THEN go inside the struct)
// p->y is a shortcut for (*p).y ( -> means deference AND THEN go inside the struct)


void initPoint(struct Point *p, double xVal, double yVal) {
    (*p).x = xVal; // x member of point points to xVal
    (*p).y = yVal; // y member of point points to yVal
    return;
}


string pointToString(Point p, int precision) {
  ostringstream oss;
  oss << setprecision(precision); // set precision to 3 decimal places
  oss << "(" << p.x << "," << p.y << ")";
  return oss.str();
}

string boxToString(Box b, int precision) {
  
  // SAMPLE FORMAT: [ul=(3.4,-5),w=5,h=7] (without the []s)
  
  return "stub!"; // TODO: Delete this line and comment and replace with appropriate code
}
 


bool pointsApproxEqual(Point p1, Point p2, double tolerance) {
  return distanceBetween(p1,p2) < tolerance;

}

bool boxesApproxEqual(Box b1, Box b2, double tolerance) {

    if(pointsApproxEqual(b1.ul,b2.ul,tolerance)) {
        if (approxequal(b1.width,b2.width, tolerance) && approxequal(b1.height,b2.height, tolerance)) {
            return 1; //return true
        }
    }
    return 0; //return false
}


// Now write a function to initialize a box.
// You'll need to initialize the upper left x and y,
// the width and the height.
// Note: there is a struct Point inside the struct Box.
// So here's a clue: For the x value, use (*b).ul.x or (b->ul).x 
//  The y value is similar.
// There is also a way to "reuse" initPoint, if you are feeling 
//  confident in your understanding of pointers and structs.

void initBox(struct Box *b, double ulx, double uly, double w, double h)
{
    (*b).ul.x = ulx;
    (*b).ul.y = uly;
    (*b).width = w;
    (*b).height = h;
    
  return;
}


double areaOfBox(Box b) {
  return -42.0;  /* stub---make sure all tests fail initially */
  // you can use b.width to access width, and b.height to access height
}
