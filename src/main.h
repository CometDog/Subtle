#pragma once

#include "pebble.h"

static const GPathInfo MINUTE_HAND_POINTS = {
  4,
  (GPoint []) {
    { 4, 4 },
{ 4, -70 },
{ -4, -70 },
{ -4, 4 }
  }
};

static const GPathInfo HOUR_HAND_POINTS = {
  4,
  (GPoint []) {
    { 4, 4 },
{ 4, -50 },
{ -4, -50 },
{ -4, 4 }
  }
};