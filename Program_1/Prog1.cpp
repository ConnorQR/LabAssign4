#include <iostream>
#include <cstdlib>
using namespace std;

int D1;
int D2;
int Total;
int Point;
int Credits = 100;
int X;
int T;

int die(){


  int D1 = rand() % 6 + 1;
  int D2 = rand() % 6 + 1;

  int Total = D1 + D2;
  cout << "player rolled " << D1 << " + " << D2 << " = " << Total << endl;
  return Total;
}

int Wager(int X, int Credits, int Total){

  if (Total == 7 || Total == 11){
    cout << "Player Wins " << endl;
    Credits+=X;
    cout << "You won " << X << " credits. Your new balance is " << Credits << " credits" << endl; 
    return Credits;
    } else if (Total == 2 || Total == 3 || Total == 12){
      cout << "Player loses" << endl;
      Credits-=X;
      cout << "You lost " << X << " credits. Your new balance is " << Credits << " credits" << endl; 
      return Credits;
   } else 

  Point = Total;
  cout << "Point is : " << Point << endl;
      do {
        int T = die();
        if (T == Point) {
          cout << "Player Wins" << endl;
          Credits+=X;
          cout << "You won " << X << " credits. Your new balance is " << Credits << " credits" << endl; 
          return Credits;
        }else if (T == 7){
          cout << "Player loses" << endl;
          Credits-=X;
          cout << "You lost " << X << " credits. Your new balance is " << Credits << " credits" << endl; 
          return Credits;
        } 
      } while (T != 7 || T != Point);

  
  return Credits;
}

void playGame(){

  srand(time(0));

  do {
    cout << "You have " << Credits << " credits. How many would you like to wager?\n";
      while (!(cin >> X)){
        cout << "please enter a number" << endl;
        cin.clear();
	      cin.ignore();
      }if (X > Credits){
        cout << " You don't have that many credits" << endl;
      }else if (X < 0){
        cout << " Please enter a positive number" << endl;
      }
      
  }while (X > Credits || X < 0);
  cout << endl;
  int T = die();

  Credits = Wager(X, Credits, T);

}

int main( ) {

  char ans;
  bool done = false;
  while ( ! done ) {
         playGame();   // YOU MUST WRITE THIS FUNCTION
         cout << " Play again (y/n) ? ";
         e:
         cin >> ans;
         if ( ans == 'n' || ans == 'N') done = true;
          else if ( ans == 'y' || ans == 'Y'){
            done = false;
          } else if ( ans != 'y' || ans != 'Y'){
              cout << "please enter Y or N" << endl;
              goto e;
             }
  }
  return 0;
}