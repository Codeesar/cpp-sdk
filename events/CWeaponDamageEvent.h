#pragma once

#include "../entities/IPlayer.h"

#include "CEvent.h"

namespace alt
{
	class CWeaponDamageEvent : public CEvent
	{
	public:
		CWeaponDamageEvent(IPlayer* _source) :
			CEvent(Type::WEAPON_DAMAGE),
			source(_source)
		{

		}

		IPlayer* GetSource() const { return source; }

	private:
		IPlayer* source;
	};
}
