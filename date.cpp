//
// Created by Abdullah Alhaider on 19/8/2018.
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  int sDay, sMonth, sYear;
  int eDay, eMonth, eYear;

  cout << "====================================" << endl;
  cout << "===== Enter start dates values =====" << endl;
  cout << "====================================" << endl;

  cout << "Start Day : ";
  cin >> sDay;
  cout << "Start Month : ";
  cin >> sMonth;
  cout << "Start Year : ";
  cin >> sYear; cout<<endl;

  sDay = sDay;
  sMonth = sMonth - 1;
  sYear = sYear - 1900;

  cout << "====================================" << endl;
  cout << "====== Enter end dates values ======" << endl;
  cout << "====================================" << endl;

  cout << "End Day : ";
  cin >> eDay;
  cout << "End Month : ";
  cin >> eMonth;
  cout << "End Year : ";
  cin >> eYear; cout<<endl;

  eDay = eDay;
  eMonth = eMonth - 1;
  eYear = eYear - 1900;

  cout << "====================================" << endl;
  cout << "====================================\n" << endl;

  // setting start date ..
  struct tm start = {0,0,0,sDay,sMonth,sYear};
  // setting end date ..
  struct tm end = {0,0,0,eDay,eMonth,eYear};

  time_t x = mktime(&start);
  time_t y = mktime(&end);

  if (x != (time_t)(-1) && y != (time_t)(-1))
  {
    double daysLeft = difftime(y,x)/(60*60*24);
    cout << "Counting from :\n" << ctime(&x) << endl;
    cout << "Counting to :\n" << ctime(&y) << endl;
    cout << "Number of days left is: " << daysLeft << " days" << "\n\n";
    --daysLeft;
  }

  return 0;
}
