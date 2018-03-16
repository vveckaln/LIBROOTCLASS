#include "contH.hh"
ClassImp(contH)

contH::contH()
{

}

void contH::Do()
{
  for(vector<TH1 *>::iterator it = v.begin(); it != v.end(); it ++)
    {
      printf("integral %f\n", (*it) -> Integral());
    }
}

contH::~contH()
{

}
