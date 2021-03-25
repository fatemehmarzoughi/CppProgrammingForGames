
#include <iostream>
#include <stdlib.h>
#include <ctime>

void Dice(int & die1, int & die2)
{
  //gives a random number between 1 and 6
  die1 = 1 + std::rand() % (6+1) - 1;
  die2 = 1 + std::rand() % (6+1) - 1;
}

int main()
{
  srand( time(0) );

  //x and y are the dies
  int x = 0;
  int y = 0;


  // the user's score
  int score = 1000;
  bool input = 0;

  while(!input)
  {
    if(score <= 0)
    {
      std::cout<<"Loser!!"<<std::endl;
      break;
    }
    std::cout<<"Enter your choice : 0)play 1)quit"<<std::endl;
    std::cin>>input;
    if(input == 1)
      break;
    Dice(x , y);
    std::cout<<x<<"  ,  "<<y<<std::endl;

    if(x == y && x == 6)
    {
      score *= 2 ;
    }
    else
    {
      score -= 100;
    }

    std::cout<<"Score = "<<score<<std::endl;
  }

  return 0;
}
