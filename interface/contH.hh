#ifndef _CONTH_HH_
#define _CONTH_HH_
#include "TNamed.h"
#include "TH1.h"
#include <vector>
using namespace std;
class contH: public TNamed
{
public:
  contH();
  vector<TH1 *> v;
  void Do();
  ~contH();
  ClassDef(contH, 1)
};

#endif
