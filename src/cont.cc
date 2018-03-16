#include "cont.hh"
ClassImp(cont)

cont::cont()
{

}

void cont::Do()
{
  for(vector<classA *>::iterator it = v.begin(); it != v.end(); it ++)
    {
      printf("integral %f\n", (*it) -> _th1 -> Integral());
    }
}

cont::~cont()
{

}
