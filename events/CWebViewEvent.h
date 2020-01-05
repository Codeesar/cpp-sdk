#pragma once

#include "../types/StringView.h"
#include "../types/MValue.h"
#include "../Ref.h"

#include "CEvent.h"
#include "../script-objects/IWebView.h"

namespace alt
{
	class CWebViewEvent : public CEvent
	{
	public:
		CWebViewEvent(IWebView* _target, StringView _name, const MValueArgs& _args) :
			CEvent(Type::WEB_VIEW_EVENT),
			target(_target),
			name(_name),
			args(_args)
		{

		}

		IWebView* GetTarget() const { return target; }
		StringView GetName() const { return name; }
		const MValueArgs& GetArgs() const { return args; }

	private:
		IWebView* target;
		String name;
		MValueArgs args;
	};
}
