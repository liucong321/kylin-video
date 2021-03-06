/*  smplayer, GUI front-end for mplayer.
    Copyright (C) 2006-2015 Ricardo Villalba <rvm@users.sourceforge.net>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _RECENTS_H_
#define _RECENTS_H_

#include <QStringList>

class Recents
{

public:
	Recents();
	virtual ~Recents();

	virtual void clear();

	virtual void addItem(QString s);
	virtual void addItem(QString s, QString title);

	virtual QString item(int n);
	virtual QString title(int n);

	virtual int count();

	virtual void setMaxItems(int n_items);
	virtual int maxItems() { return max_items; };

	virtual void fromStringList(QStringList list);
	virtual QStringList toStringList();

	virtual void list();

protected:
	int max_items;
	QStringList l;
};

#endif
