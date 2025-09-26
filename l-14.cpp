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
    Color r;

    Color g;
    Color b;
    
	return 0;
}

void print(Color c)
{
    cout << c.getRed() << c.getGreen() << c.getGreen();
}