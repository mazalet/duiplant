#pragma once

#include <dui/DuiSingletonMap.h>
namespace DuiEngine
{

class DUI_EXP DuiCSS :public DuiSingletonMap<DuiCSS,pugi::xml_node,CDuiStringA>
{
public:
    DuiCSS()
    {
    }
    virtual ~DuiCSS()
    {
    }

    BOOL Init(LPCTSTR pszXmlName);
	BOOL Init(pugi::xml_node xmlNode);

	pugi::xml_node GetDefAttribute(LPCSTR pszClassName);
protected:
	pugi::xml_node _GetDefAttribute(LPCSTR pszClassName);
	void BuildClassAttribute(pugi::xml_node & xmlNode, LPCSTR pszClassName);

	pugi::xml_document m_xmlRoot;
};

}//namespace DuiEngine
