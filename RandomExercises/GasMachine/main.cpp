#include <iostream>
#include <string>
using namespace std;

// * Welcome
// Insert Card
// Upsell
// * Gas Grade Selection
// Dispense Gas - Pending [Adding dynamic stop (Price or Gallons)]
// * Thank You

double regularGas = 2.89;
double midGas = 3.09;
double premiumGas = 3.19;

void dispenseGas(int gasGrade)
{
  double gasPrice;
  int gallonLimit = 40;
  double gallonsDispensed = 0.00;

  switch (gasGrade)
  {
  case 1:
    gasPrice = regularGas;
    break;
  case 2:
    gasPrice = midGas;
    break;
  case 3:
    gasPrice = premiumGas;
    break;
  default:
    gasPrice = 0;
    break;
  }

  while (gallonsDispensed <= gallonLimit)
  {
    cout << "Price: " << gallonsDispensed * gasPrice << "\t";
    cout << "Gallons: " << gallonsDispensed << "\n";
    gallonsDispensed += 1;
  }
}

void welcome()
{
  cout << "Welcome to your Gas Machine \n";
  cout << "Press any key to continue. \n";
  cin.get();
}

void gasGradeSelection(int *gasGrade)
{
  int selection;
  cout << "Please select your gas grade: \n";
  cout << "[1] Regular: $2.89 per gallon \n";
  cout << "[2] Mid: $3.09 per gallon \n";
  cout << "[3] Premium: $3.29 per gallon \n";
  cout << "Make your selection and press enter: ";
  cin >> selection;
  *gasGrade = selection;
}

void displaySelectedGrade(int selectedGrade)
{
  string gasGradeLabel;

  switch (selectedGrade)
  {
  case 1:
    gasGradeLabel = "Regular";
    break;
  case 2:
    gasGradeLabel = "Mid";
    break;
  case 3:
    gasGradeLabel = "Premium";
    break;
  default:
    gasGradeLabel = "NONE";
    break;
  }

  if (gasGradeLabel == "NONE")
  {
    cout << "You selected " << selectedGrade << "which is not valid \n";
    cout << "Now I shall explode..."
         << "\n";
  }
  else
  {
    cout << "You selected " << gasGradeLabel << "\n";
  }
}

void goodbye()
{
  cout << "Thanks for shopping at MG Gas Machines \n";
  cout << "Hope to see you soon \n";
}

int main()
{
  int selectedGrade;
  int *selectedGradePtr = &selectedGrade;

  welcome();
  gasGradeSelection(selectedGradePtr);
  displaySelectedGrade(selectedGrade);
  dispenseGas(selectedGrade);
  goodbye();

  return 0;
}
