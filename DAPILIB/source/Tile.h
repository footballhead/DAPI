#pragma once
#include<memory>

#include "TileData.h"

namespace DAPI
{
  struct Tile
  {
    Tile();

    int getType() const { return data->type; }
    int getX() const { return data->x; }
    int getY() const { return data->y; }
    bool getSolid() const { return data->solid || data->type == 0; }
    bool allowsMissile() { return !data->stopMissile; }

    std::shared_ptr<TileData> data;
  };
}