#ifndef _PLANETXDHT11_H_
#define _PLANETXDHT11_H_

#include <DHT.h>
#include "RJPins.h"

class PlanetXDHT11 : public DHT
{
public:
  PlanetXDHT11(RJPin pin) : DHT(pins[pin][1], DHT11) { };
};

#endif
