#pragma once

#include "spine.h"

class SpineSlot : public Node2D {
	GDCLASS(SpineSlot, Node2D);

	Spine *spine;

	void _draw();

protected:
	void _notification(int p_what);

	static void _bind_methods();

public:
	spSlot *slot;
	spSlot *nm_slot;

	void init(Spine *spine, spSlot *slot, spSlot *nm_slot) {
		this->spine = spine;
		this->slot = slot;
		this->nm_slot = nm_slot;
	}

	SpineSlot();
	virtual ~SpineSlot();
};
