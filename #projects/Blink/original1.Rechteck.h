#include "Arduino.h"

class Rechteck 
{
  private:
  int breite;
  int laenge;
  public:
  Rechteck(int b,int l);
  int get_Breite();
  void set_Breite(int b);
  int get_Laenge();
  void set_Laenge(int l);
};
