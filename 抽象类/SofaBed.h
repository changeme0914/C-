// SofaBed.h: interface for the SofaBed class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SOFABED_H__EEBED903_9F02_4D9C_AABE_7ECC5B307780__INCLUDED_)
#define AFX_SOFABED_H__EEBED903_9F02_4D9C_AABE_7ECC5B307780__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Bed.h"

#include "Sofa.h"
class SofaBed:public Bed,public Sofa
{
public:
	void fun();

};

#endif // !defined(AFX_SOFABED_H__EEBED903_9F02_4D9C_AABE_7ECC5B307780__INCLUDED_)
