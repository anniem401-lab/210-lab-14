// COMSC-210 | Lab 14 | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <iomanip>
using namespace std;

const int W15 = 15;

class Color 
{
private:
    int red;
    int green;
    int blue;

public:
// Getters and Setters
int getRed()             { return red; }
void setR(int r)    { red = r; }

int getGreen()             { return green; }
void setG(int g)    { green = g; }

int getBlue()             { return blue; }
void setB(int b)    {blue = b;}

// Print method
void print()
{
    cout << setw(W15) << "Red: " << red << endl;
    cout << setw(W15) << "Green: " << green << endl;
    cout << setw(W15) << "Blue: " << blue << endl;
}
};

void print(Color);

int main()
{
    // Color objects r,g,b (0,0,0)

    cout << endl << "----------------------------";
    cout << endl << "Color red:" << endl;
    cout << "----------------------------" << endl;
    Color r;
    r.setR(255);
    r.setG(0);
    r.setB(0);
    r.print();
    print(r); //Prints red
    
    cout << "----------------------------";
    cout << endl << "Color green:" << endl;
    cout << "----------------------------" << endl;
    Color g;
    g.setR(0);
    g.setG(255);
    g.setB(0);
    g.print();
    print(g); //Prints green

    cout << "----------------------------";
    cout << endl << "Color blue:" << endl;
    cout << "----------------------------" << endl;
    Color b;
    b.setR(0);
    b.setG(0);
    b.setB(255);
    b.print();
    print(b); //Prints blue
    
    cout << endl;
	return 0;
}

// Prints out the colors in r,g,b (0,0,0) format
void print(Color c)
{
    cout << endl << "   R,G,B" << endl;
    cout << "(" << c.getRed() << ", " <<c.getGreen() << ", " << c.getBlue() << ")";
    cout << endl << endl;
}