/*
 * Copyright (C) 2014-2015 Christopho, Solarus - http://www.solarus-games.org
 *
 * Solarus Quest Editor is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Solarus Quest Editor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SOLARUSEDITOR_TILE_H
#define SOLARUSEDITOR_TILE_H

#include "entities/entity_model.h"

/**
 * @brief An editable tile.
 */
class Tile : public EntityModel {

public:

  Tile(MapModel& map, const Solarus::EntityData& entity);

  QString get_pattern_id() const;

  void draw(QPainter& painter) const override;

private:

  mutable QPixmap pattern_image;     /**< Cached image of the tile pattern. */

};

#endif
