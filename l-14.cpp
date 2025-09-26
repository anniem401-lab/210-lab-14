// COMSC-210 | Lab 14 | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>

using namespace std;

class Color 
{
private:
    int red;
    int green;
    int blue;

public:
// Getters and Setters
int r()             { return red; }
void setR(int r)    { red = r; }

int g()             { return green; }
void setG(int g)    { green = g; }

int b()             { return blue; }
void setB(int b)    {blue = b;}
};

int main()
{
    // Color objects r,g,b
    Color r;
    //Color.setR(255,0,0);

    Color g;
    Color b;
    
	return 0;
}
