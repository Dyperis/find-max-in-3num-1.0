#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int FirstNum;
  int SecondNum;
  int ThirdNum;
  cout << "Enter First Number: " << endl;
  cin >> FirstNum;
  cout << "Enter Second Number: " << endl;
  cin >> SecondNum;
  cout << "Enter Third Number: "<< endl;
  cin >> ThirdNum;
if (FirstNum > SecondNum && FirstNum > ThirdNum)
{
  cout << "the biggest number is: " << FirstNum << endl;
}
  else if (SecondNum > FirstNum && SecondNum > ThirdNum)
  {
    cout << "the biggest number is: " << SecondNum << endl;
  }
  else
  {
    cout << "the biggest number is: " << ThirdNum << endl;
  }
  return 0;

}
