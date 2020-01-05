#pragma once

#include <cstdint>
#include "../IBaseObject.h"

namespace alt
{
	class IWebView: public virtual IBaseObject
	{
	public:
		virtual ~IWebView() = default;
	};
}
