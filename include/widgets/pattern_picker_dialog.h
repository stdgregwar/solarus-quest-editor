/*
 * Copyright (C) 2014-2018 Christopho, Solarus - http://www.solarus-games.org
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
#ifndef SOLARUSEDITOR_PATTERN_PICKER_DIALOG_H
#define SOLARUSEDITOR_PATTERN_PICKER_DIALOG_H

#include "ui_pattern_picker_dialog.h"
#include <QDialog>

namespace SolarusEditor {

/**
 * @brief Dialog allowing the user to pick a single pattern in a tileset view.
 */
class PatternPickerDialog : public QDialog {
  Q_OBJECT

public:

  PatternPickerDialog(TilesetModel& tileset, QWidget* parent = nullptr);

  QString get_pattern_id() const;

public slots:

  void done(int result) override;

private:

  Ui::PatternPickerDialog ui;     /**< The widgets. */

};

}

#endif
