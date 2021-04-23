#pragma once
#include<memory>

#include "TriggerData.h"

namespace DAPI
{
  struct Trigger
  {
    Trigger() { data = std::make_shared<TriggerData>(); }

    int getLevel() const { return data->lvl; }
    int getX() const { return data->x; }
    int getY() const { return data->y; }
    TriggerType getType() const { return data->type; }

    std::shared_ptr<TriggerData> data;
  };
}