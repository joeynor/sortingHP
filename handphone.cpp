#include <iostream>
#include <string>

using namespace std;

struct Phones
{
  string make, model;
  int price;
  char condition;
};

void storeInfo(int, Phones []);
void sortInfo(int, Phones []);
void displayInfo(int, Phones []);

int main()
{
  int numphones;
  cout << "Please enter number of phones for sale: " ;
  cin >> numphones;

  Phones myphone[numphones] = {};
  storeInfo(numphones,myphone);
  sortInfo(numphones,myphone);
  displayInfo(numphones,myphone);
  return 0;
}

void storeInfo(int nphones, Phones rec[])
{
  /*cout << nphones;*/
  for (int i = 0; i < nphones; i++) {
    cout << endl << "Please enter Phone Manufacturer: " ;
    cin >> (rec+i)->make;
    cout << "Please enter Phone Model: " ;
    cin >> (rec+i)->model;
    cout << "Please enter price of Phone: " ;
    cin >> (rec+i)->price;
    cout << "Please enter Condition Grade A,B or C: " ;
    cin >> (rec+i)->condition;    
    cout << endl;
  }
}

void sortInfo(int nphones, Phones info[])
{
  Phones temp;
  cout << "Make\t\tModel\tPrice\tCondition\n" ;
  cout << "------\t\t-----\t---\t--------\n" ;
  for (int i = 0; i<nphones-1; i++)
    {
      for(int j = i+1; j<nphones; j++)
        {
          if((info+j) -> price<(info+i) -> price) {
            temp = *(info+j);
		    *(info+j) = *(info+i);
		    *(info+i) = temp;
          }
        }
    }
}

void displayInfo(int nphones, Phones info[]){
  for(int i = 0; i < nphones; i++){
    cout << (info+i)->make << "\t\t" << (info+i)->model << "\t"
         << (info+i)->price << "\t" << (info+i)->condition << endl;
  }
}
