#include "Arduino.h"
#include "Rechteck.h"

Rechteck::Rechteck(int b,int l)
{
  breite = b;
  laenge = l;
}
int Rechteck::get_Breite()
{
  return breite;
}

void Rechteck::set_Breite(int b)
{
  breite = b;
}
int Rechteck::get_Laenge()
{
  return laenge;
}

void Rechteck::set_Laenge(int l)
{
  laenge = l;
}
