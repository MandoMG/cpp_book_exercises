// Read Page 133
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double COST_PER_CUBIC_FOOT = 0.23;
  double CHARGE_PER_CUBIC_FOOT = 0.50;
  double length, width, height;
  double volume;

  cout << "Enter length of box: ";
  cin >> length;
  cout << "Enter width of box: ";
  cin >> width;
  cout << "Enter height of box: ";
  cin >> height;

  volume = length * width * height;

  cout << setprecision(2) << fixed << showpoint;

  cout << "Crate volume: " << volume << " cubic feet\n";
  cout << "Crate's cost: $" << volume * COST_PER_CUBIC_FOOT << "\n";
  cout << "Customer Charge: $" << volume * CHARGE_PER_CUBIC_FOOT << "\n";
  cout << "Profit: $" << (volume * CHARGE_PER_CUBIC_FOOT) - (volume * COST_PER_CUBIC_FOOT) << "\n";

  return 0;
}