#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int totalCalibrationValue = 0;
  string entryList[4] = {"1abc2", "pqr3stu8vwx", "a1b2c3d4e5f", "treb7uchet"};
  vector<string> entries;
  entries.assign(entryList, entryList + 4);

  int arrSize = entries.size();
  for (int i = 0; i < arrSize; i++)
  {
    string result = "";
    string concatString = "";
    for (string::iterator it = entryList[i].begin(); it < entryList[i].end(); ++it)
    {
      bool isCharDigit = std::isdigit(*it);
      if (isCharDigit)
      {
        result = result + *it;
      }
    }

    concatString = result[0];
    concatString = concatString + result.back();

    cout << "Calibration Value No. " << i + 1 << ": " << concatString << "\n";
    totalCalibrationValue += stoi(concatString);
  }

  cout << "Total Calibration Value: " << totalCalibrationValue << "\n";

  return 0;
}
