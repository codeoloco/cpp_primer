/*****************************************************************************
 * ex03.cpp -- exercise 3 chapter 7
 *
 * Here is a structure declaration
 *  
 *  struct box
 *  {
 *      char maker[40];
 *      float height;
 *      float width;
 *      float length;
 *      float volume;
 *  };
 *
 * a. Write a function that passes a box structure by value and that displays
 *    the value of each member.
 * b. Write a function that passes the address of a box structure and that
 *    sets the volume member to the product of the other three dimensions.
 * c. Write a simple program that uses these two functions.
 *
 */
#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void print_box(box);
void set_volume(box*);

int main()
{

    box abox = {"Dr Lee's Boxes", 10.1, 15.2, 20.3, 0};

    print_box(abox);
    set_volume(&abox);
    print_box(abox);

    return 0;
}

void print_box(box b)
{
    using namespace std;

    cout << "The box ...\n";
    cout << "\t" << b.maker << endl;
    cout << "\t" << b.height << endl;
    cout << "\t" << b.width << endl;
    cout << "\t" << b.length << endl;
    cout << "\t" << b.volume << endl;
}

void set_volume(box * b)
{
    b->volume = b->height * b->width * b->length;
}
