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
    Color(int r, int g, int b) : red(r), green(g), blue(b) {}
    void display() const 
    {
        cout << "Red: " << red << ", Green: " << green << ", Blue: " << blue << endl;
    }
};

int main()
{
    // Create Color objects
    Color color1(255, 0, 0);  // Red
    Color color2(0, 255, 0);  // Green
    Color color3(0, 0, 255);  // Blue

    // Display the colors 
	color1.display();
	color2.display();
	color3.display();

	return 0;
}
