
#include <iostream>
using namespace std;
int main()
{
    int length, width, area, perimeter;
    cout << "The Area of a Rectangle: " << endl;
    cout << "Enter the length: ";
    cin >> length ;
    cout << "Enter the width: ";
    cin >> width;
    area = length * width;
    perimeter = (length * 2) + (width * 2);
    cout << "The Area of the Rectangle is: " << area << endl;
    cout << "The Perimeter of the Rectangle is: " << perimeter << endl;


}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "The Area of triangle using Herons Formula " << endl;
    double side_a, side_b, side_c, s, area;
    cout << "Enter the A side length: " <<  endl;
    cin >> side_a;
    cout << "Enter the B side length: " << endl;
    cin >> side_b;
    cout << "Enter the C side length: " << endl;
    cin >> side_c;
    s = (side_a + side_b + side_c) / 2;
    area = sqrt(s * (s-side_a) * (s - side_c) * (s - side_b));
    cout << "The Area of the triangle using Herons' formula is = " << area << endl;


}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double area, radii, circumference;
  double pi = 3.141592;
  cout << "Find the Area and Circumference of a circle: " << endl;
  cout << "Enter Radius: " << endl;
  cin >> radii;
  area = pi * (radii * radii);
  circumference = pi * (radii * 2);
  cout << "The Circumference of the circle is " << circumference << endl;
  cout << "The Area of the circle is " << area << endl;

}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int F, C;
    cout << "Converting Celsius into Fahrenheit" << endl;
    cout << "Enter the Celsius value: " << endl;
    cin >> C;
    cout << "Enter the Fahrenheit value: " << endl;
    cin >> F;
    int fahrenheit = (C * (9 / 5)) + 32;
    int celsius = (F - 32) * 5 / 9;
    cout << "The Temperature of " << C << " Celsius converted into Fahrenheit is " << fahrenheit << "degrees Fahrenheit" << endl;
    cout << "The Temperature of " << F << " Fahrenheit converted into Celsius is " << celsius << " degrees Celsius" << endl;

}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int angle_a, angle_b, angle_c;
    cout << "Find the Third Angle of a Triangle given rwo angles: " << endl;
    cout << "Enter Angle A " << endl;
    cin >> angle_a;
    cout << "Enter Angle B " << endl;
    cin >> angle_b;
    angle_c = 180 - ( angle_a + angle_b);
    cout << "The Third Angle is : " << angle_c;

}
#include <iostream>
using namespace std;
int main()
{
   int number, divisor, quotient, remainder;
   cout << "Calculate a Number by dividing it and display a quotient and remainder:" << endl;
   cout << "Enter the Number: " << endl;
   cin >> number;
   cout << "Enter the Divisor: " << endl;
   cin >> divisor;
   quotient = number / divisor;
   remainder = number % divisor;
   cout << "The Quotient is " << quotient << endl;
   cout << "The Remainder is " << remainder << endl;

}
