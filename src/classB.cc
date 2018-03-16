#include "classB.hh"
#include "TH1F.h"
#include "TCanvas.h"
ClassImp(classB)

classB::classB(): n(0), p(nullptr)
{
}
void classB::Do()
{
  printf("Doing; *p = %f\n", *p);
}
classB::~classB()
{
  delete[] p;
}
