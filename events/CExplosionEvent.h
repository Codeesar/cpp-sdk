#pragma once

#include "../entities/IPlayer.h"

#include "CEvent.h"

namespace alt
{
	class CExplosionEvent : public CEvent
	{
	public:
		CExplosionEvent(IPlayer* _source) :
			CEvent(Type::EXPLOSION),
			source(_source)
		{

		}

		IPlayer* GetSource() const { return source; }

	private:
		IPlayer* source;
	};
}
