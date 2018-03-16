#include "classA.hh"
#include "TH1F.h"
#include "TCanvas.h"
ClassImp(classA)

classA::classA(): n(0), _th1(nullptr)
{
}
void classA::Do()
{
  printf("Doing; integral %f\n", _th1 -> Integral());
}
classA::~classA()
{
}
