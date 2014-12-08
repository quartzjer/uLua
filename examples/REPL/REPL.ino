/**************************************************************************\
* Pinoccio Library                                                         *
* https://github.com/Pinoccio/library-pinoccio                             *
* Copyright (c) 2014, Pinoccio Inc. All rights reserved.                   *
* ------------------------------------------------------------------------ *
*  This program is free software; you can redistribute it and/or modify it *
*  under the terms of the MIT License as described in license.txt.         *
\**************************************************************************/
#include <SPI.h>
#include <Wire.h>
#include <Scout.h>
#include <GS.h>
#include <bitlash.h>
#include <lwm.h>
#include <js0n.h>
#include "ulexer.h"
//#include "uparser.c"
#include "ucodegen.h"
#include "vm.h"

void setup() {
  Scout.setup("ulua-test", "custom", -1);
  // Add custom setup code here
}

void loop() {
  Scout.loop();
  // Add custom loop code here
}
